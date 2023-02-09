#include <iostream>
using namespace std;

int main() {
  
int quant;
float total;

cout <<"Digite a quantidade de maçãs: ";
cin >> quant;
  
  if( quant >= 12){
    total = quant * 0.25;

  }
  else{
  total = quant * 0.30;
  }

cout << "Valor total: "<< total <<"R$";

  
}