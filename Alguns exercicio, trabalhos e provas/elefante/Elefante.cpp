#include <iostream>
using namespace std;
int main()
{
    int  numElefante = 0;
    do{
    cout << "Informe o número de Elefantes: (0 - Para Sair)\n";
    cin >> numElefante;
    system("clear");
    for (int i = 1; i <= numElefante; i++)
    {
        if (i % 2 == 0)
        {  
            cout << i  << " elefantes ";
            for (int j = 0; j < i; j++)
            {
                cout << "incomodam ";
            }
            cout << "muito mais.\n";
        }else if(i == 1){
            cout << i << " elefante incomodam muita gente.\n";
        }else
        {      
            cout << i << " elefantes incomodam muita gente.\n";
        }
    }
    }while(numElefante >0);
    return 0;
}