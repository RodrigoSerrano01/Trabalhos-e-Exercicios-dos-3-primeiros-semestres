#include <iostream>
using namespace std;
float limiteSalario= 1000, aumentoAcima = 0.05, aumentoAbaixo = 0.07;

float aumento (float sal){
float total;
if (sal > limiteSalario){
    total = (sal * aumentoAcima);

  }
  else{

    total = (sal * aumentoAbaixo);

  }

return total;
  
}

int main() {
  
  float total, salario;

  cout<< "Digite o salario: ";
  cin >> salario;

 cout << "O salario é : "<< salario<< "\n O aumento é " << aumento(salario)<< "\n total : "<<salario + aumento(salario);

}

