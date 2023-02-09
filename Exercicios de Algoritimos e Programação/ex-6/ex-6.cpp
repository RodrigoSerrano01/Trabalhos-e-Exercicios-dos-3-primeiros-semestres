#include <iostream>

using namespace std;

int main()
{
    float saldoAnterior, saldoAtual;
    cout << "Digite o saldo aterior ao reajuste: ";
    cin >> saldoAnterior;
    
    saldoAtual = saldoAnterior + (saldoAnterior* 0.01);
    
    cout << "O saldo atual apos o reajuste é : "<<saldoAtual;
return 0;
    
    
    
}