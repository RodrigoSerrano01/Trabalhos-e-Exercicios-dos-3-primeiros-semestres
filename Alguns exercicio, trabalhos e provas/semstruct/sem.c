#include <locale.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool testaNivel()                                                //valida o nivel cadastrado.
{
    int nivelAux = 2;
    do
    {

        printf("Digite as opções: \n0- Calouro. \n1- Veterano.\n");
        scanf("%d", &nivelAux);
        if (nivelAux == 0)
        {
            return false;
        }
        else if (nivelAux == 1)
        {
            return true;
        }

        printf("Opção invalida!\n");
    } while (nivelAux != 0 && nivelAux != 1);
}

void cadastro(char **nome, int idade[], float media[], bool nivel[],           //cadastra os alunos.
              int *total)
{
    char aux[100] = " ";
    int i = 0, nivelAux;
    printf("Digite o nome:\n");
    scanf("%s", aux);
    while (aux[i] != '\0')
    {
        nome[(*total)][i] = aux[i];
        i++;
        if (aux[i] == '\0')
        {
            nome[(*total)][i] = '\0';
        }
    }
    printf("Digite sua idade:\n");
    scanf("%d", &idade[(*total)]);
    printf("Digite sua media:\n");
    scanf("%f", &media[(*total)]);
    nivel[(*total)] = testaNivel();

    (*total)++;
}

void mostraNivel(bool nivel[], int i)           // imprime o nivel dos alunos.
{
    printf("Nivel: ");
    if (nivel[i])
    {
        printf("Veterano");
    }
    else
    {
        printf("Calouro");
    }
}

void mostraAluno(char **nome, int idade[], float media[], bool nivel[],
                 int *total, int i)                                               //imprime todas as informações dos alunos.
{
    int j = 0;
    printf("Nome: ");
    while (nome[i][j] != '\0')
    {
        printf("%c", nome[i][j]);
        j++;
    }
    printf("\nidade: %d \n", idade[i]);
    printf("media: %0.2f \n", media[i]);
    mostraNivel(nivel, i);
    printf("\n");
}

void printAlunos(char **nome, int idade[], float media[], bool nivel[],
                 int *total)                                              //função que mostra todos os alunos sem filtro.
{
    for (int i = 0; i < (*total); i++)
    {
        mostraAluno(nome, idade, media, nivel, &total, i);
    }
}

void printAlunosMaiorMedia(char **nome, int idade[], float media[],
                           bool nivel[], int *total)                      // funçao que mostra somente os alunos acima da média.
{
    for (int i = 0; i < (*total); i++)
    {
        if (media[i] >= 6)
        {
            mostraAluno(nome, idade, media, nivel, &total, i);
        }
    }
}

void printCalouroMaiorMedia(char **nome, int idade[], float media[],
                            bool nivel[], int *total)                  // função que mostra todos os calouros acima da média.
{
    for (int i = 0; i < (*total); i++)
    {
        if (!nivel[i])
        {
            if (media[i] >= 6)
            {
                mostraAluno(nome, idade, media, nivel, &total, i);
            }
        }
    }
}

void printVeteranoMaiorMedia(char **nome, int idade[], float media[],
                             bool nivel[], int *total)                          // função que mostra todos os Veteranos acima da média.
{
    for (int i = 0; i < (*total); i++)
    {
        if (nivel[i])
        {
            if (media[i] >= 6)
            {
                mostraAluno(nome, idade, media, nivel, &total, i);
            }
        }
    }
}

void printCalouros(char **nome, int idade[], float media[], bool nivel[],
                   int *total)                                                  //função que mostra todos os calouros cadastrados.
{
    for (int i = 0; i < (*total); i++)
    {
        if (!nivel[i])
        {
            mostraAluno(nome, idade, media, nivel, &total, i);
        }
    }
}

void printVeterano(char **nome, int idade[], float media[], bool nivel[],
                   int *total)                                              //função que mostra todos os Veteranos cadastrados.
{
    for (int i = 0; i < (*total); i++)
    {
        if (nivel[i])
        {
            mostraAluno(nome, idade, media, nivel, &total, i);
        }
    }
}

void calculaMediaGeral(char **nome, int idade[], float media[], bool nivel[],
                  int *total)                                                //função que calcula e mostra a média geral de todos os alunos.
{
    float soma = 0;
    for (int i = 0; i < (*total); i++)
    {
        soma += media[i];
    }
    printf("A Media geral é %.2f \n", soma / (*total));
}

void calculaMediaCalouro(char **nome, int idade[], float media[], bool nivel[],
                         int *total)                                      //função que calcula e mostra a média geral dos calouros.
{
    float soma = 0;
    int cont = 0;
    for (int i = 0; i < (*total); i++)
    {
        if (!nivel[i])
        {
            soma += media[i];
            cont++;
        }
    }
    printf("A Media dos calouros é %.2f \n", soma / cont);
}

void calculaMediaVeterano(char **nome, int idade[], float media[],
                          bool nivel[], int *total)                      //função que calcula e mostra a média geral dos Veteranos.
{
    float soma = 0;
    int cont = 0;
    for (int i = 0; i < (*total); i++)
    {
        if (nivel[i])
        {
            soma += media[i];
            cont++;
        }
    }
    printf("A Media dos Veteranos é %.2f \n", soma / cont);
}

void menu(char **nome, int idade[], float media[], bool nivel[])                    //Menu
{
    int total = 0, opc = 0;

    do
    {
        printf(
            "Digite a opção:\n 1- cadastro. \n 2- imprimir tudo. \n 3- imprimir "
            "Calouro.\n 4- imprimir Veterano.\n 5- Media Total\n 6- Calculo media "
            "Calouro \n 7- Calculo media Veterano\n 8- Alunos acima da media. \n "
            "9- Calouros acima da media. \n 10- Veteranos acima da media. \n 0- "
            "Sair.\n-> ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            cadastro(nome, idade, media, nivel, &total);
            break;
        case 2:
            printAlunos(nome, idade, media, nivel, &total);
            break;
        case 3:
            printCalouros(nome, idade, media, nivel, &total);
            break;
        case 4:
            printVeterano(nome, idade, media, nivel, &total);
            break;
        case 5:
            calculaMediaGeral(nome, idade, media, nivel, &total);
            break;
        case 6:
            calculaMediaCalouro(nome, idade, media, nivel, &total);
            break;
        case 7:
            calculaMediaVeterano(nome, idade, media, nivel, &total);
            break;
        case 8:
            printAlunosMaiorMedia(nome, idade, media, nivel, &total);
            break;
        case 9:
            printCalouroMaiorMedia(nome, idade, media, nivel, &total);
            break;
        case 10:
            printVeteranoMaiorMedia(nome, idade, media, nivel, &total);
            break;
        case 0:
            printf("Saindo!\n");
            break;
        default:
            printf("Opção invalida!!\n");
            break;
        }

    } while (opc != 0);
    //  printf("%d", total);
}

int main()
{

    char **nome;
    int idade[100];
    float media[100];
    bool nivel[100];

    nome = (char **)malloc(100 * sizeof(char *));           //faz a alocação para nome virar um vetor.

    for (int i = 0; i < 100; i++)
    {
        nome[i] = (char *)malloc(100 * sizeof(char *));     //faz a alocação para nome virar uma matriz.
    }

    menu(nome, idade, media, nivel);
}
