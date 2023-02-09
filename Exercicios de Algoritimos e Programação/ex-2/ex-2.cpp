#include <iostream>

using namespace std;

int main()
{
    float num, num2, num3, resultado;
        do{
    cout << "Digite o primeiro numero: ";
    cin >> num;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    cout << "Digite o teceiro numero: ";
    cin >> num3;
    
        }while( num < 0 || num2 < 0 || num3 < 0);
        
        resultado = (num + num2 + num3) / 3;
    
    cout << " O Resultado: "<< resultado;
    return 0;
    
}


