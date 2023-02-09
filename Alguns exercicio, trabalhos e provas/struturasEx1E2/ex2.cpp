#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;

//nome
//prof
//faltas
//n1 e n2

struct nota
{
    string nome, prof;
    float faltas;
    float n1, n2;
};

void calculaNota()
{
    int quantMateria = 5;
    nota materia[quantMateria];
    float freq, numeroAulas = 100;

    for (int i = 0; i < quantMateria; i++)
    {
        cout << "Digite o nome da materia:";
        cin >> materia[i].nome;
        cout << "Digite o nome ddo professor:";
        cin >> materia[i].prof;
        cout << "Digite o numero de faltas: ";
        cin >> materia[i].faltas;
        cout << "Nota n1:";
        cin >> materia[i].n1;
        cout << "Nota n2:";
        cin >> materia[i].n2;
    }

    for (int i = 0; i < quantMateria; i++)
    {
        cout << "Nome da Materia:" << materia[i].nome << endl;
        cout << "Nome do Professor:" << materia[i].prof << endl;
        cout << "numero de faltas:" << materia[i].faltas << endl;
        cout << "Nota n1:" << materia[i].n1 << endl;
        freq = (numeroAulas - materia[i].faltas) / numeroAulas * 100;
        if (freq > 75)
        {
            if (materia[i].n2 <= 6)
            {
                cout << "Nota n2:" << materia[i].n2 << " precisa fazer a Subistitutiva" << endl;
            }
            else
            {
                cout << "Nota n2:" << materia[i].n2 << " não precisa fazer a Subistitutiva" << endl;
            }
        }
        else
        {
            cout << "Frequencia menor que 75% Não pode fazer a subistitutiva" << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    calculaNota();
}