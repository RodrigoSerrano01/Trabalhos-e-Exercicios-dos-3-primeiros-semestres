#include <iostream>
using namespace std;

int main() {
 int a, b, c;
do{
 cout << "Digite o primeiro número: ";
 cin >> a;
 cout << "Digite o segundo número: ";
 cin >> b;
 cout << "Digite o terceiro número: ";
 cin >> c;

 if ( a < b && a < c){
      if(b<c){
        cout << "ordem crescente: " << a <<", "<< b <<", "<< c;
        }
      else{
        cout << "ordem crescente: " << a <<", "<< c <<", "<< b;
      
      }
    }
    if ( b < a && b < c){
      if(a<c){
        cout << "ordem crescente: " << b <<", "<< a <<", "<< c;
        }
      else{
        cout << "ordem crescente: " << b <<", "<< c <<", "<< a;
      
      }
    }
     if ( c < a && c < b){
      if(a<b){
        cout << "ordem crescente: " << c <<", "<< a <<", "<< b;
        }
      else{
        cout << "ordem crescente: " << c <<", "<< b <<", "<< a;
      
      }
      }
      cout << endl;
      }while(a != b && a != c && b !=c);

      cout << "FIM";

 
}