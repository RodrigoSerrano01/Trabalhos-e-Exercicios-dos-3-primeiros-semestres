#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstring>
using namespace std;

struct alunos
{

    string nome;
    string curso;
    int matricula;
    int n1;
    int n2;
} aluno;

void converte(string str, char txt[], int size)
{
    //char txt[str.length()];
    for (int i = 0; i < size; i++)
    {
        txt[i] = str[i];
        cout<<str[i];
    }
    cout<< size;

}

void gravacao(alunos a[], int tam)
{
    //aluno aux;
    //cout<< a[0].nome;
    
    FILE *arq = fopen("arquivo.txt", "wt");
    if (arq == NULL)
    {
        cout << "Problema ao abrir o arquivo";
    }
    else
    {

        for (int i = 0; i < tam; i++)
        {
            
            // aux = a[i];
            //fwrite(&a[i].nome, sizeof(aluno), 1, arq);
            string str = a[i].nome.append("||").append(a[i].curso).append("||");
            char txt[str.length()];
            //strcpy(txt,str.c_str());
            //
            converte(str,txt,sizeof(txt));
            fputs(txt, arq);
            cout << txt << sizeof(txt) <<"\n";
            //cout << i;
        }

        fclose(arq);
        free(arq);
    }
}

void leitura(int tam)
{
    int i = 0;
    alunos aux[tam];
    FILE *arq = fopen("arquivo.txt", "rt");
    if (arq == NULL)
    {
        cout << "Problema ao abrir o arquivo";
    }
    else
    {

        while (!feof(arq))
        {
            fread(&aux[i], sizeof(aluno), 1, arq);
            //cout << i;
            cout << aux[i].nome << endl;
            cout << aux[i].matricula << endl;
            cout << aux[i].curso << endl;
            cout << aux[i].n1 << endl;
            cout << aux[i].n2 << endl;
            i++;
            if (i == tam)
            {
                break;
            }
        }

        /*

    for (int i = 0; i < tam; i ++){
      fread(&aux[i], sizeof(alunos), 1, arq);
    }
    

        for (int i = 0; i < tam; i++)
        {
            cout << i;
            cout << aux[i].nome << endl;
            cout << aux[i].matricula << endl;
            cout << aux[i].curso << endl;
            cout << aux[i].n1 << endl;
            cout << aux[i].n2 << endl;
        }
        */
    }
    fclose(arq);
    free(arq);
}

int main()
{
    int tam = 4, opc;
    alunos alunos[tam];

    alunos[0].nome = "J";
    alunos[0].matricula = 111111;
    alunos[0].curso = "C";
    alunos[0].n1 = 1;
    alunos[0].n2 = 7;
    alunos[1].nome = "BRUNO CUNHA";
    alunos[1].matricula = 22222;
    alunos[1].curso = "CC";
    alunos[1].n1 = 5;
    alunos[1].n2 = 6;
    alunos[2].nome = "MARIA DIAS";
    alunos[2].matricula = 333333;
    alunos[2].curso = "CC";
    alunos[2].n1 = 5;
    alunos[2].n2 = 3;
    alunos[3].nome = "MATHEUS FREITAS";
    alunos[3].matricula = 444444;
    alunos[3].curso = "CC";
    alunos[3].n1 = 4;
    alunos[3].n2 = 7;

    do
    {
        cout << "Digite:";
        cin >> opc;

        switch (opc)
        {
        case 1:
            gravacao(alunos, tam);
            break;
        case 2:
            leitura(tam);
            break;
        }
    } while (opc != 0);
}