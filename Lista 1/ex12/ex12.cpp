#include <iostream>
using namespace std;
#include <math.h>

int main() {

  int x1, x2 , y1 , y2;
  float dist;

  cout << "Digite o primeiro ponto: x e y ";
  cin >> x1 ;
  cin >> y1;

  cout << "Digite o segundo ponto: x e y ";
  cin >> x2 ;
  cin >> y2;

  dist = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2)); 

  cout<< "A distancia: "<< dist;



  
  



}