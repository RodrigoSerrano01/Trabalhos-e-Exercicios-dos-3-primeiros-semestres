#include <iostream>
using namespace std;

int main() {

float salario , desconto;

cout << "Digite o seu salario: ";
cin >> salario;

desconto = salario - ( salario * 0.1);

cout << "salario: "<< salario << "R$\n"; 
cout << "salario com desconto: "<< desconto << "R$\n"; 

}