#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;
//ex1:
//armazenar
//excluir um valor
//esquisar a quantidade ocupada
//pesquisar o maior numero
//o menor
//visualizar
//ex2:





void manipulaVetor()
{

    int aux, opc, valor, cont = 0, contaVazio = 0, maior = 0, menor;

    cout << "Digite a quantidade de posicoes do vetor:";
    cin >> aux;
    int vet[aux];

    for (int i = 0; i < aux; i++)
    {
        vet[i] = -1;
    }
    do
    {
        cout << "\nOpcoes: \n 1- Armazenar um valor. \n 2- Excluir um valor. \n 3- Pesquisar a quantidade de ocupacoes. \n 4- Maior numero. \n 5- Menor numero. \n 6- Visualizar. \n 0- Sair\n";
        cin >> opc;

        switch (opc)
        {

        case 1:
            cout << "Digite um valor:";
            cin >> valor;
            if (cont < aux)
            {
                vet[cont] = valor;
                cont++;
            }
            break;
        case 2:
            cout << "a posição que deseja excluir:";
            cin >> valor;
            vet[valor] = -1;
            break;
        case 3:
            for (int i = 0; i < aux; i++)
            {
                if (vet[i] < 0)
                {
                    contaVazio++;
                }
            }
            cout << "O vetor tem " << contaVazio << "Posicoes vazias";
            break;
        case 4:
            for (int i = 0; i < aux; i++)
            {
                if (vet[i] > maior)
                {
                    maior = vet[i];
                }
            }
            cout << "O maior numero e: " << maior;

            break;
        case 5:
            menor = vet[0];
            for (int i = 0; i < aux; i++)
            {
                if (vet[i] < menor && vet[i] >= 0)
                {
                    menor = vet[i];
                }
            }
            cout << "O menor numero e: " << menor;
            break;
        case 6:
            for (int i = 0; i < aux; i++)
            {
                if (vet[i] == -1)
                {
                    cout << "vazio, ";
                }
                else
                {
                    cout << vet[i] << ", ";
                }
            }
            break;
        case 0:
            cout << "Saindo \n";
            break;
        default:
            cout << "Opcao invalida\n";
        }

    } while (opc != 0);
}


int main(int argc, char const *argv[])
{

    manipulaVetor();
}