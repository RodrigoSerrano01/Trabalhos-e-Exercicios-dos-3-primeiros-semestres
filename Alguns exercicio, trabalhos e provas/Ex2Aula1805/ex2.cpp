#include <iostream>
using namespace std;

int main() {
 
 int tam, num;
 float aux;


 cout<< "Digite a quantidade de tentarivas: ";
 cin >> tam;


 int vetor [tam];
 srand (time(0));

  num = rand ()% 6;

for(int i =0 ; i < tam; i ++){
  num = (rand ()% 6)+1;
  vetor [i]= num;
  cout<< num << endl;
}



}