#include <iostream>
using namespace std;

int main() {
  int num;

  for (int i = 0 ; i <10; i ++){
    cout <<"Digite um numero: ";
    cin >> num;
    
    if(num%2 ==0){

      cout <<num << " é par"<<endl;
    }
    else{

      cout <<num << " é impar"<<endl;
    }

  }
}