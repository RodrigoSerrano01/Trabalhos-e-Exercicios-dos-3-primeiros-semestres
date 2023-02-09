#include <iostream>
using namespace std;

int main() {

float soma, total =0;

for (int i = 1; i <=64; i++){
if(i ==1){
  soma = 1;
}
else{
soma = soma *2;
}
total += soma;
cout<< "Na casa "<<i << " tem "<< soma << " grãos " << endl;
}

cout << "O total de grãos é: " << total;
  
}