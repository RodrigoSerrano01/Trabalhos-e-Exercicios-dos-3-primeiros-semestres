#include <iostream>
using namespace std;

int main() {
  
float valor, total;
char opc;
bool aux = false;

do{

cout<< "Digite a opção: \na- Converter de Real para Euro \nb- Converter de Real para Dólar \nc- Converter de Euro para Dólar \nd- Converter de Euro para Real \ne- Converter de Dólar para Euro\nf- Converter de Dólar para Real \nS- Sair";
cin >>opc;
switch(opc){
case 'a':
case 'A':

  cout<< "Digite o valor: ";
  cin >> valor;
  total = valor *0.15;


break;
case 'b':
case 'B':

  cout<< "Digite o valor: ";
  cin >> valor;
  total = valor *0.18;

break;
case 'c':
case 'C':
  
  cout<< "Digite o valor: ";
  cin >> valor;
  total = valor *1.19;



break;
case 'd':
case 'D':
  
  cout<< "Digite o valor: ";
  cin >> valor;
  total = valor *6.78;



break;
case 'e':
case 'E':
  
  cout<< "Digite o valor: ";
  cin >> valor;
  total = valor *0.84;



break;
case 'f':
case 'F':
  
  cout<< "Digite o valor: ";
  cin >> valor;
  total = valor *5.67;



break;

case 'S':
case 's':

aux = true;
cout<<"Saindo";


break;



}


cout<< "Total : "<<total << endl;

}while(!(aux));


}