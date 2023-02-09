#include <iostream>

using namespace std;


int main ()
{

  int hora, minuto, segundo, segundosTotal;

  cout << "Digite a hora: ";
  cin >> hora;
  cout << "Digite a minuto: ";
  cin >> minuto;
  cout << "Digite a segundo: ";
  cin >> segundo;
  
  segundosTotal = hora * 3600;
  segundosTotal = segundosTotal + (minuto *60);
  segundosTotal = segundosTotal + segundo;
  
  
  cout << hora << " horas, " <<minuto<<" Minutos e " <<segundo <<" segundos" ;
  cout << "\nTotal em segundos desde o começo do dia: "<<segundosTotal <<" segundos ";

return 0;


}
