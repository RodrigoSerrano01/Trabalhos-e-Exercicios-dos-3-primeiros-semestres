#include <iostream>
using namespace std;
int main() {
 
float salario, aumento, desconto;

cout << "Digite o seu salario: ";
cin >> salario;
aumento = salario + (salario * 0.15);
desconto = (aumento - ( aumento * 0.08));

cout << "Salario bruto: "<< salario << " R$\n"<<
"Salario com aumento: " << aumento <<" R$\n"<<
"Salario com desconto: " << desconto <<" R$\n";



}