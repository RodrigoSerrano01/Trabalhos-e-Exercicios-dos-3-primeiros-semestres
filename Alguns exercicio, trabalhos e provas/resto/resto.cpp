#include <iostream>
using namespace std;

int main() {
  
int a, b, resto, total, total2, hexa = 16, octal =8, bin = 2;
int aux;
cout<<"Digite o numero: ";
cin >> a;
aux = a;
cout << " \n Octal \n\n";
do{
resto = a % octal;
total = a - resto;
total2 = total /octal;
a = total2;
cout<< a << " / " << octal << " = " << total2 <<" Resto: " << resto << endl;
}while(a!=0);
cout << " \n Hexadeximal \n\n";

a = aux;
do{
resto = a % hexa;
total = a - resto;
total2 = total /hexa;
a = total2;
cout<< a << " / " << hexa << " = " << total2 <<" Resto: " << resto << endl;
}while(a!=0);

cout << " \n Binario \n\n";

a = aux;
do{
resto = a % bin;
total = a - resto;
total2 = total /bin;
a = total2;
cout<< a << " / " << bin << " = " << total2 <<" Resto: " << resto << endl;
}while(a!=0);


}