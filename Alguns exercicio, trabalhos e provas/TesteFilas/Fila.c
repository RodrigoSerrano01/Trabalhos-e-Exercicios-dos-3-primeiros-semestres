#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int const TAM = 10;
int inicio, fim, id =1;


typedef struct paciente
{
    int id;
    char nome[10];
} paciente;

paciente pacientes[TAM];

void constroi_fila()
{

    inicio = 0;
    fim = -1;
}

bool filaVazia()
{
    return inicio > fim;
}

bool filaCheia()
{
    return inicio > TAM;
}

bool filaEnfileirar(paciente p1)
{
    if (filaCheia())
    {
        return false;
    }
    else
    {
        fim++;
        pacientes[fim] = p1;
        return true;
    }
}

bool filaDensenfileirar()
{
    if (filaVazia())
    {
        return false;
    }
    else
    {
       // p1 = listaPaciente[inicio];
        inicio++;
        return true;
    }
}

int tamanhoFila(){
    return (fim - inicio)+1;

}

void exibepacientes(){

    for(int i= 0; i< TAM; i++){
        printf("Paciente ID: %d Nome: %s",pacientes[i].id,pacientes[i].nome);
    }

}



int main()
{
    paciente p1;
    int opc;
    do{
        printf("Digite a opção desejada:\n1-Incluir um paciente.\n2-Chamar um Paciente\n3- Exibir todos os pacientes.\n0. Sair");
        scanf("%d",&opc);
        switch (opc)
        {
        case 1: 
            printf("Digite o nome do pasciente");
            scanf("%s",p1.nome);
            p1.id = id;
            id++;
            if(!filaEnfileirar(p1)){
                printf("Fila Cheia\n");
            }
            else{
                printf("cadastrado\n");
            }
            break;
        case 2:
            filaDensenfileirar();
        break;
        case 3:
            exibepacientes();
        break;
        default:
            break;
        }


    }while(opc!=0);


    return 0;
}