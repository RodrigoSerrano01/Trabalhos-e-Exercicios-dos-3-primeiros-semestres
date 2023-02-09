#include <iostream>
using namespace std;

int main() {

  int seg, hora, minuto, segundo, resto;

 cout << "Digite a quantidade de segundos: ";
 cin >> seg;

 hora = seg / 3600;
 resto = seg % 3600;
 minuto = resto /60;
 segundo = resto % 60;
 

 cout << seg << " Segundos são : \n";
 cout << hora << " horas \n";
 cout << minuto << " minutos \n";
 cout << segundo << " segundos \n";

  


}