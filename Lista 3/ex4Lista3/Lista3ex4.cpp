#include <iostream>
using namespace std;

int main() {
  
  int codigo, quant, aux=0;
  float total;

  cout << "Digite o codigo do produto: ";
  cin >> codigo;
  cout << "Digite a quantidade: ";
  cin >> quant;
  switch(codigo){
    case 1001: total = quant * 5.35;
    break;
    case 1324: total = quant * 6.45;
    break;
    case 6548: total = quant * 2.37;
    break;
    case 987: total = quant * 5.32;
    break;
    case 7623: total = quant * 6.45;
    break;
    default:{
      aux ++;
      cout << "Codigo invalido";
      break;
    }


  }
  if(aux ==0){
  cout << "total: "<< total << "R$";
  }

}