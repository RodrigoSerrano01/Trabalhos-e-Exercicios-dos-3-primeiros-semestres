#include <iostream>
using namespace std;

int main() {
 int num, aux =0, total=0;
 float media;

 cout <<"Digite um numero: ";
 cin >> num;
//total = num;
 do{
   aux ++;
   total = total + aux;

 }while (aux != num);

media = float(total) / float(num);

cout<<"A media é: " <<media  ;



}