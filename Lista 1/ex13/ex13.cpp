#include <iostream>
using namespace std;


int main() {

int dia, mes , ano , dia2;

cout << "Digite a quantidade de dias sem acidentes: ";
cin >> dia;

ano=dia/360; 
mes=(dia % 360)/ 30;
dia2=(dia % 360)% 30;

cout << ano <<" anos, " << mes << " mes e "<< dia2<< " dias";


}