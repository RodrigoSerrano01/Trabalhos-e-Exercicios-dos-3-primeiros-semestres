#include <iostream>
using namespace std;

int main() {
  int x, y , z;


do{
  
  cout << "Digite o primeiro valor do triangulo: ";
  cin >> x;
  cout << "Digite o segundo valor triangulo: ";
  cin >> y;
  cout << "Digite o terceiro valor triangulo: ";
  cin >> z;
  }while(x ==0 || y ==0 || z ==0);

  if(x == y && x == z){
    cout << "Triângulo equilátero "; 
  }
  else if (x !=y && x !=z && y != z){
    cout << "Triângulo escaleno ";
  }
  else if (x == y || y == z){
    cout << "Triângulo isóscele";
  }
}