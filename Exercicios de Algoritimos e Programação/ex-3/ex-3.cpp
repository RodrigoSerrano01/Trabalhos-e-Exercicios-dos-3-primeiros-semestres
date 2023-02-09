#include <iostream>

using namespace std;

int main()
{
    double num, resultado;
        do{
    cout << "Digite um numero: ";
    cin >> num;
    
        }while( num < 0);
    
    cout << " O Resultado: "<< num / 3;
    return 0;
    
}
