#include <iostream>
using namespace std;

int main() {
  int num , sem, quant, cont;
  sem = time(0);

  srand(sem);

  cout<<"Digite a quantidade de numeros para sortear: ";
  cin >> quant;
  cont =0;
  do{
    cont ++;
    num = (rand()%6) +1;

    cout<< "O Numero sorteado é :" << num << endl;


  }while(quant != cont);


}