#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
//#include <Windows.h>
using namespace std;

struct palavraRegistrada
{
    char palavra[20];
    int quant = 1;
};

void imprimirPalavraQtd(palavraRegistrada ponteiro[], int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << ponteiro[i].palavra << " Quantidade: " << ponteiro[i].quant << endl;
    }
}

bool copyFromText(char text[])
{

    FILE *archive;
    archive = fopen("arquivobackup.txt", "rt");

    if (archive == NULL)
    {
        cout << "Error in the opening of the archive\n";
        return 1;
    }

    fread(text, sizeof(char), 5000, archive);

    return 0;

    fclose(archive);
    cout << text;
}

void swapChars(char text[])
{

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ',' || text[i] == '.' || text[i] == '(' || text[i] == ')')
        {
            text[i] = ' ';
        }
    }
}

void deleteSpaces(char text[], char cleanText[])
{

    int i = 0;
    int iCT = 0;

    while (text[i] != '\0')
    {
        if (text[i] != ' ')
        {
            cleanText[iCT] = text[i];
        }
        else
        {
            cleanText[iCT] = ' ';

            while (text[i + 1] == ' ')
            {
                i++;
            }
        }
        iCT++;
        i++;
    }
}

int palavrasCounter(char cleanText[])
{

    int cont = 1, i = 0;

    while (cleanText[i] != '\0')
    {

        if (cleanText[i] == ' ')
        {
            cont++;
        }
        i++;
    }
    return cont;
}

void separaPalavra(char cleanText[], string palavras[])
{
    int i = 0, j = 0;
    do
    {
        if (cleanText[i] != ' ')
        {
            palavras[j] += cleanText[i];
        }
        else
        {
            j++;
        }
        i++;
    } while (cleanText[i] != '\0');
}

palavraRegistrada *contaPalavras(string separatedpalavras[], palavraRegistrada ponteiro[], int totalPalavras, int &n)
{

    char aux[20];
    int ret = -1;

    for (int i = 0; i < totalPalavras; i++)
    {

        int x = -1;

        strcpy(aux, separatedpalavras[i].c_str());

        for (int k = 0; k < n - 1; k++)
        {

            ret = strcmp(aux, ponteiro[k].palavra);

            if (ret == 0)
            {

                x = k;
                break;
            }
        }

        if (x == -1)
        {
            n++;
            ponteiro = (palavraRegistrada *)realloc(ponteiro, sizeof(palavraRegistrada) * n);
            strcpy(ponteiro[n - 1].palavra, separatedpalavras[i].c_str());
            ponteiro[n - 1].quant = 1;
        }
        else
        {
            ponteiro[x].quant++;
        }
    }
    return ponteiro;
}

void pesquisaPlavra(char palavra[], palavraRegistrada ponteiro[], int n)
{
    bool palavraExiste = false;
    int ret = -1;
    int indexPalavra;
    for (int i = 0; i < n; i++)
    {
        ret = strcmp(palavra, ponteiro[i].palavra);

        if (ret == 0)
        {
            indexPalavra = i;
            break;
        }
    }
    if (ret == 0)
    {
        cout << ponteiro[indexPalavra].palavra << " Quantidade: " << ponteiro[indexPalavra].quant << endl;
    }
    else
    {
        cout << "A palavra não existe no texto! \n";
    }
}

void ordenaPalavras(palavraRegistrada ponteiro[], int n)
{
    int ret = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ret = strcmp(ponteiro[i].palavra, ponteiro[j].palavra);
            if (ret > 0)
            {
                palavraRegistrada aux = ponteiro[i];
                ponteiro[i] = ponteiro[j];
                ponteiro[j] = aux;
                ret = -1;
            }
        }
    }
    imprimirPalavraQtd(ponteiro, n);
}

void ordenarQuantidade(palavraRegistrada ponteiro[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ponteiro[i].quant < ponteiro[j].quant)
            {
                palavraRegistrada aux = ponteiro[i];
                ponteiro[i] = ponteiro[j];
                ponteiro[j] = aux;
            }
        }
    }
    imprimirPalavraQtd(ponteiro, n);
}

int main()
{

    char text[5000], cleanText[5000], palavraAux[20];
    bool ret = false;
    palavraRegistrada *ponteiro = NULL, plavraPesquisada;
    string palavras[644], aux[644];
    int n = 1, opc;
    ponteiro = (palavraRegistrada *)malloc(sizeof(palavraRegistrada) * n);
    // SetConsoleOutputCP(65001);

    ret = copyFromText(text);

    swapChars(text);
    deleteSpaces(text, cleanText);
    int totalPalavras = palavrasCounter(cleanText);
    separaPalavra(cleanText, palavras);
    ponteiro = contaPalavras(palavras, ponteiro, totalPalavras, n);

    do
    {
        cout << "Digite a opção desejada:\n 1- Mostrar o texto. \n 2- Listar todas as palavras do texto. \n 3- Palavras e quantidades. \n 4- Pesquisar palavar.\n 5- Ordem alfabetica. \n 6- Ordenar por quantidade. \n 7- Total de palavras. \n 0- Para sair.";
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << text << endl;
            break;
        case 2:
            for (int i = 0; i < totalPalavras - 1; i++)
            {
                cout << palavras[i] << endl;
            }
            break;
        case 3:
            imprimirPalavraQtd(ponteiro, n);
            break;
        case 4:
            cout << "Digite a palavra que deseja pesquisar: ";
            cin >> palavraAux;
            pesquisaPlavra(palavraAux, ponteiro, n);

            break;
        case 5:
            ordenaPalavras(ponteiro, n);
            break;
        case 6:
            ordenarQuantidade(ponteiro, n);
            break;
        case 7:
            cout << "\nO Texto tem " << totalPalavras << " palavras \n \n";
            break;
        case 0:
            system("cls");
            cout << "Saindo\n\n";
            break;
        default:
        {
            cout << "Codigo invalido Digite Novamente! \n\n";
        }
        }

    } while (opc != 0);
}