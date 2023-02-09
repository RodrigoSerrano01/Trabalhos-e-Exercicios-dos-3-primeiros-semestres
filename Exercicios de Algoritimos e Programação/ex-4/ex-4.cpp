#include <iostream>

using namespace std;

int main()
{
    int a1, razao, n, resultado;
    cout << "Digite o primeiro termo: ";
    cin >> a1;
    cout << "Digite o valor da  razão: ";
    cin >> razao;
    do{
    cout << "Digite o numero de  termos: ";
    cin >> n;
    }while(n < 0);
    resultado = (a1 + (n - 1) * razao);
    
    
    
    
    
    cout << " O N-essimo termo da PA é: "<< resultado;
    return 0;
    
}
