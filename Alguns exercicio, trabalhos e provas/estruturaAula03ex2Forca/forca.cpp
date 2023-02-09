#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <time.h>
using namespace std;
int quantPalavras = 5;

struct forca
{

    char *palavra;
    string dica;
    int *correto;
    int tamanho;
};

void montaVetorDeControle(forca *inforPalavra, int index)
{

    inforPalavra[index].correto = (int *)malloc(sizeof(int) * inforPalavra[index].tamanho);

    for (int i = 0; i < inforPalavra[index].tamanho; i++)
    {
        inforPalavra[index].correto[i] = -1;
    }
}

int contaLetra(forca *inforPalavra, int index)
{
    int i = 0, cont = 0;
    do
    {
        if (inforPalavra[index].palavra[i] != '\0')
        {
            cont++;
        }
        else
        {
            return cont;
        }
        i++;
    } while (inforPalavra[index].palavra[i] != '\0');
    return cont;
}

void montaLista(forca *inforPalavra)
{
    int tamanho;
    inforPalavra[0].palavra = "gato";
    inforPalavra[0].dica = "Felino";
    inforPalavra[0].tamanho = contaLetra(inforPalavra, 0);
    montaVetorDeControle(inforPalavra, 0);
    inforPalavra[1].palavra = "cachorro";
    inforPalavra[1].dica = "Melhor amigo do homem";
    inforPalavra[1].tamanho = contaLetra(inforPalavra, 1);
    montaVetorDeControle(inforPalavra, 1);
    inforPalavra[2].palavra = "macaco";
    inforPalavra[2].dica = "Gosta de banana";
    inforPalavra[2].tamanho = contaLetra(inforPalavra, 2);
    montaVetorDeControle(inforPalavra, 2);
    inforPalavra[3].palavra = "jacare";
    inforPalavra[3].dica = "... que dorme vira bolsa de madame";
    inforPalavra[3].tamanho = contaLetra(inforPalavra, 3);
    montaVetorDeControle(inforPalavra, 3);
    inforPalavra[4].palavra = "carro";
    inforPalavra[4].dica = "meio de transporte";
    inforPalavra[4].tamanho = contaLetra(inforPalavra, 4);
    montaVetorDeControle(inforPalavra, 4);
}

void listar(forca *inforPalavra, int index)
{
    for (int i = 0; i < inforPalavra[index].tamanho; i++)
    {
        if (inforPalavra[index].correto[i] == -1)
        {
            cout << " _ ";
        }
        else
        {
            cout << " " << inforPalavra[index].palavra[i];
        }
    }
}

void finalizar(forca *inforPalavra, int index, int tentarivas)
{

    cout << "\n Com " << tentarivas << " / 7 voce acertou a palavra " << inforPalavra[index].palavra << endl;
}

void testaLetra(forca *inforPalavra, int index,int opc)
{
    int tentativas = 0;
    int i = 0, contaCorretas = 0;
    char letra;
    system("clear");
    listar(inforPalavra, index);
    do
    {
        cout << "\nVIDAS " << tentativas << "/7 \nDigite uma letra:";
        cin >> letra;
        for (int i = 0; i < inforPalavra[index].tamanho; i++)
        {
            if (inforPalavra[index].palavra[i] == letra)
            {
                inforPalavra[index].correto[i] = 1;
                contaCorretas++;
                if (contaCorretas == inforPalavra[index].tamanho)
                {
                    tentativas++;
                    listar(inforPalavra, index);
                    finalizar(inforPalavra, index, tentativas);
                    return;
                }
            }
        }
        tentativas++;
        system("clear");
        if(opc == 1 && tentativas == 3){
            cout<< "DICA: "<<inforPalavra[index].dica <<endl;
        }
        if(opc == 2 && tentativas == 5){
            cout<<  "DICA: "<<inforPalavra[index].dica <<endl;
        }
        if(opc == 3 && tentativas == 6){
            cout<<  "DICA: "<<inforPalavra[index].dica <<endl;
        }
        
        listar(inforPalavra, index);

    } while (tentativas <= 7);
    cout<< "Voce não conseguiu, a palavra era "<< inforPalavra[index].palavra<<endl;
}

int sorteio(){
    int num;
num = rand() % quantPalavras;
return num;
}
void nivel(forca *inforPalavra){

int opc, num;
bool aux;
num = sorteio();
do{
cout<< "Digite o nivel que deseja jogar: \n1- Facil. \n2- Medio. \n3- Dificil. \n4- JEDI";
cin>> opc;
aux = true;
switch (opc)
{
case 1:
    testaLetra(inforPalavra, num, opc);
    break;
    case 2:
    testaLetra(inforPalavra, num, opc);
    break;
    case 3:
    testaLetra(inforPalavra, num, opc);
    break;
    case 4:
    testaLetra(inforPalavra, num, opc);
    break;

default:
aux = false;
    break;
}

}while (!aux);
}




int main()
{
    forca inforPalavra[quantPalavras];
    srand(time(NULL));
    montaLista(inforPalavra);
    nivel(inforPalavra);
   
}