#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;
//#include <Windows.h>

struct palavraRegistrada                                                   //Strutura de palavras registradas.
{
    char palavra[20];
    int quant = 1;
};

void imprimirPalavraQtd(palavraRegistrada ponteiro[], int n)                //Imprime todas as palavras e suas quantidades
{
    for (int i = 0; i < n; i++)
    {
        cout << ponteiro[i].palavra << " Quantidade: " << ponteiro[i].quant << endl;
    }
}

void imprimeArgumento(palavraRegistrada ponteiro[], int n, int quant)       //Imprime somente as palavras cujo a quantidade veio pelos argumentos
{
    for (int i = 0; i < n; i++)
    {
        if(ponteiro[i].quant >= quant){
        cout << ponteiro[i].palavra << " Quantidade: " << ponteiro[i].quant << endl;
        }
    }
}

int contaVezes(palavraRegistrada *ponteiro, char limpTemp[], int size)      //Conta quantas vezes cada palavra apareceu no texto.
{
    int i = 0;
    while (i < size)
    {
        if (strcmp(limpTemp, ponteiro[i].palavra) == 0)
        {
            return i;
        }
        i++;
    }
    return false;
}

bool confereExiste(palavraRegistrada *ponteiro, char limpTemp[], int size)  //Confere ce a palavra existe no texto
{
    int i = 0;
    while (i < size)
    {
        if (strcmp(limpTemp, ponteiro[i].palavra) == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

void swapChars(char text[])                                                 //troca os caracteres por espaços
{

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ',' || text[i] == '.' || text[i] == '(' || text[i] == ')' || text[i] == ';')
        {
            text[i] = ' ';
        }
    }
}

void deleteSpaces(char text[], char cleanText[])                            //Tira o espaço das palavras
{   

    int i = 0;
    int iCT = 0;

    while (text[i] != '\0')
    {
        if (text[i] == ' ')
        {
            i++;
            continue;
        }
        cleanText[iCT] = text[i];
        iCT++;
        i++;
    }
}

FILE * abreArq (string nomeArq){                                            //Abre o arquivo
 FILE *arq;
arq = fopen(nomeArq.c_str(), "rt");
    if (arq == NULL)
    {
        cout << "Problema na abertura do arquivo!!!!!!\n";
    }
    return arq;
}

palavraRegistrada *montaLista(palavraRegistrada ponteiro[], int &sizeRef, FILE *arq)    //Função mais importante.                                                                                       
{                                                                                       //Monta a lista de palavras e suas quantidades.
    char temp[256];
    char limpTemp[256];
    string palavraLimpa;
    while (!feof(arq))
    {
        memset(&limpTemp[0], 0, sizeof(limpTemp));
        fscanf(arq, "%s", temp);
        swapChars(temp);
        deleteSpaces(temp, limpTemp);
        bool conferir = confereExiste(ponteiro, limpTemp, sizeRef);
        if (conferir)
        {
            sizeRef++;
            ponteiro = (palavraRegistrada *)realloc(ponteiro, sizeof(palavraRegistrada) * sizeRef);
            strcpy(ponteiro[sizeRef - 1].palavra, limpTemp);
            ponteiro[sizeRef - 1].quant = 1;
        }
        else
        {
            int index = contaVezes(ponteiro, limpTemp, sizeRef);
            ponteiro[index].quant++;
        }
    }
    fclose(arq);
    return ponteiro;
}

void pesquisaPlavra(char palavra[], palavraRegistrada ponteiro[], int n)    //Pesquisa se a palavra existe na lista.
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

palavraRegistrada *transformaMaiusculo(palavraRegistrada ponteiro[], int n) //Transforma todas as letras em maiúsculas
{
    int cont = 0;
    char temp[20];
    for (int i = 0; i < n; i++)
    {
        while (ponteiro[i].palavra[cont] != '\0')
        {
            temp[cont] = toupper(ponteiro[i].palavra[cont]);
            ponteiro[i].palavra[cont] = temp[cont];
            cont++;
        };
        cont = 0;
    }
    return ponteiro;
}

palavraRegistrada *limpaAcento(palavraRegistrada ponteiro[], int n)         //Tentativa de tirar acentos.
{

    string aux;
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        while (ponteiro[i].palavra[cont] != '\0')
        {
            aux = ponteiro[i].palavra[cont];
        if(aux== "á"){
            cout<< aux;
            ponteiro[i].palavra[cont]= 'A';
        }

          /*  switch (aux)
            {
            case "á":
            case "Á":
            case 'ã':
            case 'Ã':
            case 'â':
            case 'Â':
            case 'À':
            case 'à':
                cout << aux;
                aux = "A";
                break;
    case 'é':
    case 'É':
    case 'ê':
    case 'Ê':
    cout<< aux[cont];
        aux[cont] = 'E';
        break;
    case 'í':
    case 'Í':
    cout<< aux[cont];
        aux[cont] = 'I';
        break;
    case 'ó':
    case 'Ó':
    case 'ô':
    case 'Ô':
    case 'õ':
    case 'Õ':
    cout<< aux[cont];
        aux[cont] = 'O';
        break;
    case 'ú':
    case 'Ú':
    cout<< aux[cont];
        aux[cont] = 'U';
        break;
    default:
        break;*/
            //ponteiro[i].palavra[cont] = aux[cont];
            cont++;
        }
        cont = 0;
    }
    return ponteiro;
}

void ordenaPalavras(palavraRegistrada ponteiro[], int n)                   //Ordena palavras em ordem alfabéticas
{
    int ret = -1;
    char primeiraLetra;
    //ponteiro = limpaAcento(ponteiro, n);
    ponteiro = transformaMaiusculo(ponteiro, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ret = strcmp(ponteiro[i].palavra, ponteiro[j].palavra);
            //ponteiro[i].palavra[0] = primeiraLetra;
            if (ret > 0)
            {

                palavraRegistrada aux = ponteiro[i];
                ponteiro[i] = ponteiro[j];
                ponteiro[j] = aux;
                ret = -1;
            }
        }
    }
    cout<< "\n-ALFABETICA-\n\n";
    imprimirPalavraQtd(ponteiro, n);
}

void ordenarQuantidade(palavraRegistrada ponteiro[], int n)                 //Ordena as palavras por suas quantidades.
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
    cout<< "\n-QUANTIDADE-\n\n";
    imprimirPalavraQtd(ponteiro, n);
}

void menu(palavraRegistrada ponteiro[], int totalPalavras)                  //Monta um menu de opções
{
    int opc;
    char palavraAux[20];
    do
    {
        cout << "Digite a opção desejada:\n 1- Palavras e quantidades. \n 2- Pesquisar palavar.\n 3- Ordem alfabetica. \n 4- Ordenar por quantidade. \n 5- Total de palavras. \n 0- Para sair.";
        cin >> opc;
        switch (opc)
        {
        case 1:
            imprimirPalavraQtd(ponteiro, totalPalavras);
            break;
        case 2:
            cout << "Digite a palavra que deseja pesquisar: ";
            cin >> palavraAux;
            pesquisaPlavra(palavraAux, ponteiro, totalPalavras);

            break;
        case 3:
            ordenaPalavras(ponteiro, totalPalavras);
            break;
        case 4:
            ordenarQuantidade(ponteiro, totalPalavras);
            break;
        case 5:
            cout << "\nO Texto tem " << totalPalavras << " palavras \n \n";
            break;
        case 0:
            system("cls");
            cout << "Saindo\n\n";
            break;
        case 8:
            break;
        default:
        {
            cout << "Codigo invalido Digite Novamente! \n\n";
        }
        }

    } while (opc != 0);
}

void comArgumentos (palavraRegistrada ponteiro[], int totalPalavras, char const *argv[], int argc){ // Seleção de argumentos, substitui o menu

if(argc > 1 ){

        if (!strcmp(argv[1], "-a")){
        ordenaPalavras(ponteiro, totalPalavras);
        }
        else if (!strcmp(argv[1], "-q")){
        imprimirPalavraQtd(ponteiro, totalPalavras);
        }
        else if (!strcmp(argv[1], "-n")){
        ordenarQuantidade(ponteiro, totalPalavras);
        }
        else if (!strcmp(argv[1], "-m")){
            menu(ponteiro, totalPalavras);
        }
        else if (!strcmp(argv[1], "-all")){
        ordenarQuantidade(ponteiro, totalPalavras);
        ordenaPalavras(ponteiro, totalPalavras);
        }
        else if (!strcmp(argv[1], "-t")){
            int quant = atol(argv[2]);
            if(quant == 0){
                cout<< "Problema nos argumentos!\n";
                exit;
            }else{
           imprimeArgumento(ponteiro, totalPalavras, quant);
           }
        }
    }

}

int main(int argc, char const *argv[])          // Principal, incia as funções
{
    int totalPalavras = 0; 
   // SetConsoleOutputCP(65001);
    string nomeArq =argv[3];
    palavraRegistrada *ponteiro;
    FILE *arq = abreArq(nomeArq);
    ponteiro = (palavraRegistrada *)malloc(sizeof(palavraRegistrada) * 1);
    ponteiro = montaLista(ponteiro, totalPalavras, arq);
    comArgumentos(ponteiro, totalPalavras, argv, argc);
    //menu(ponteiro, totalPalavras);
}
