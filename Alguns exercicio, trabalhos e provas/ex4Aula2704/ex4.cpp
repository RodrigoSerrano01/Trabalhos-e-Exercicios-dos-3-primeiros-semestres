#include <iostream>
using namespace std;

int main() {
  int num, total = 1;

  cout<< "Digite um número: ";
  cin >> num;
  for(int i = num; i >= 1; i --){
    total = total* i;
   
  }
   cout << "Fotorial de "<< num << " é " << total;
  
}