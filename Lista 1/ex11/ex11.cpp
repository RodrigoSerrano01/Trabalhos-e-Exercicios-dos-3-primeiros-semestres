#include <iostream>
using namespace std;
float P = 10, M = 12, G = 15;

int main() {

  int camisaP , camisaM, camisaG;
  float  total;

  cout << " Quantidade de camisa Pequenas: ";
  cin >> camisaP;
  cout << " Quantidade de camisa Médias: ";
  cin >> camisaM;
  cout << " Quantidade de camisa Grandes: ";
  cin >> camisaG;

  total = (camisaP * P)+ (camisaM * M) + (camisaG * G);

  cout << "Camisas Pequenas: " << camisaP <<" \n" <<
  "Camisas Médias: " << camisaM << " \n"<<
  "Camisas Grandes: " << camisaG << " \n" <<
  "Total : " << total << " R$";




}