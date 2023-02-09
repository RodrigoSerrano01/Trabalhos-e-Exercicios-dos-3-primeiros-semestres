#include <iostream>

using namespace std;
int MEDIACOMBUSTIVEL = 12;

int
main ()
{
  float mediaVelocidade, tempo, resultado;

  cout << "Quanto tempo Dirigil em horas: ";
    cin >> tempo;
    
    cout << "Media de velocidade: ";
    cin >> mediaVelocidade;
    
    resultado = (tempo * mediaVelocidade) / MEDIACOMBUSTIVEL;
    

  cout << " Tempo dirigindo: " << tempo <<"h";
  cout << "\n Velocidade media:" << mediaVelocidade <<"Km/h";
  cout << "\n Media de combustivel " << MEDIACOMBUSTIVEL <<"Km";
  cout << "\n O carro consumiu em media  " << resultado <<" litro (s) de gasolina";


}