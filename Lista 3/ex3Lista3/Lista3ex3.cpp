#include <iostream>
using namespace std;

int main() {

  int idade;
  string categ;

  cout << "DIgite sua idade: ";
  cin >> idade;

  if(idade >= 5 && idade <=7){
    categ = "infantil A";

  }else if (idade >= 8 && idade <= 10){
    categ = "infantil B";

  }
  else if (idade >= 11 && idade <= 13){
    categ = "Juvenil A";

  }
  else if (idade >= 14 && idade <= 17){
    categ = "Juvenil B";

  }
  else {
    categ = "adulto";

  }

  cout << "sua categoria é " << categ;
 
}