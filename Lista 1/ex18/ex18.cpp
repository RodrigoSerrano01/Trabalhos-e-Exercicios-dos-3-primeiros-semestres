#include <iostream>
using namespace std;
float HORANORMAL = 10, HORAEXTRA = 15;

int main() {

float hora, horaExtra, total;

cout << " Digite a quantidade de horas trabalhadas: ";
cin >> hora;
cout << " Digite a quantidade de horas extras: ";
cin >> horaExtra;

total = (hora * HORANORMAL)+ (horaExtra * HORAEXTRA);

cout << "Total: "<< total <<" R$";


}