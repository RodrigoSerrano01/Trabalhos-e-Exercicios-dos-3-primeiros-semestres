#include <iostream>
using namespace std;


int main() {
  int umCent, cincoCent, dezCent, vinteCincoCent, fiftyCent, real;
  float  total;

  cout << "Quantidade de moedas de 1 Centavo: ";
  cin >> umCent;
  cout << "Quantidade de moedas de 5 Centavos: ";
  cin >> cincoCent;
  cout << "Quantidade de moedas de 10 Centavos: ";
  cin >> dezCent;
  cout << "Quantidade de moedas de 25 Centavos: ";
  cin >> vinteCincoCent;
  cout << "Quantidade de moedas de 50 Centavos: ";
  cin >> fiftyCent;
  cout << "Quantidade de moedas de 1 Real: ";
  cin >> real;

  total = (umCent*0.01) + (cincoCent * 0.05)+ (dezCent*0.10)+ (vinteCincoCent*0.25)+ (fiftyCent*0.50)+ (real * 1);


  cout << "Total: "<<total<<"R$";

}