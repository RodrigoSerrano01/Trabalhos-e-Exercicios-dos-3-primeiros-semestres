#include <iostream>
using namespace std;

int main() {
  int total;
  for(int i =1 ; i <=10; i ++){
    for (int a = 1; a<= 10; a ++){
      total = a * i;
      cout<< i << " * "<< a << " = "<< total<< endl;
    }
    cout << "\n";

  }

}