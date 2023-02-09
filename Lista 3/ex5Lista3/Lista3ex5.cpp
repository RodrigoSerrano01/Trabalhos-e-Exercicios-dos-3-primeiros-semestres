#include <iostream>
using namespace std;

int main() {
  int i ;
  float   a, b, c, maior;

  cout << "Digite o valor de I: ";
  cin >> i;
  cout << "Digite o valor de A: ";
  cin >> a;
  cout << "Digite o valor de B: ";
  cin >> b;
  cout << "Digite o valor de C: ";
  cin >> c;

  if(i == 1){
  
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


  }else if( i == 2){
    if ( a > b && a > c){
      if(b>c){
        cout << "ordem decrescente: " << a <<", "<< b <<", "<< c;
        }
      else{
        cout << "ordem decrescente: " << a <<", "<< c <<", "<< b;
      
      }
    }
    if ( b > a && b > c){
      if(a>c){
        cout << "ordem decrescente: " << b <<", "<< a <<", "<< c;
        }
      else{
        cout << "ordem decrescente: " << b <<", "<< c <<", "<< a;
      
      }
    }
     if ( c > a && c > b){
      if(a>b){
        cout << "ordem decrescente: " << c <<", "<< a <<", "<< b;
        }
      else{
        cout << "ordem decrescente: " << c <<", "<< b <<", "<< a;
      
      }
    }

  }
  else if( i == 3){

    if ( a > b && a > c){
      if(b>c){
        cout << "O maior no meio: " << c <<", " << a <<", " << b ;
      }
      else{
        cout << "O maior no meio: " << b <<", " << a <<", " << c ;
      }

    }
    if ( b > a && b > c){
      if(a>c){
        cout << "O maior no meio: " << a <<", " << b <<", " << c ;
      }
      else{
        cout << "O maior no meio: " << c <<", " << b <<", " << a ;
      }

    }
    if ( c > b && c > a){
      if(b>a){
        cout << "O maior no meio: " << a <<", " << c <<", " << b ;
      }
      else{
        cout << "O maior no meio: " << b <<", " << c <<", " << a ;
      }

    }
    
    
  }


}