#include <iostream>
using namespace std;

int main() {
  float altChico= 1.50, altZe = 1.10;
  int ano =0;


  do{

    ano ++;

    altChico += 0.02;
    altZe += 0.03;


  }while (altChico > altZe);

  cout << "Vai demorar " << ano << " anos para Zé ser maior que Chico. ";
}