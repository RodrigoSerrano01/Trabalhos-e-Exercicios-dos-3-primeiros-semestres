#include <iostream>
using namespace std;

int main() {
  
  int num1, num2,cont = 0;

  cout << "Digite o primeiro numero: ";
  cin >> num1;
  cout << "Digite o segundo numero: ";
  cin >> num2;
  for(int i = num1 ; i <= num2; i ++){

    cout<< i<<"-";
    cont ++;
    if(cont == 10){
      cont =0;
      cout<< "\n";
    }

   /* if(i %10 ==0){

       cout<< "\n";
    }
    
  */

  }
  

}