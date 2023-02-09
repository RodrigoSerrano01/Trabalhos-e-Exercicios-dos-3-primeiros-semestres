#include <iostream>

using namespace std;

int main()
{
    int c, f;
    cout << "Digite a temperatura em Graus Celsius: ";
    cin >> c;
    
    f = (9 * c + 160) / 5;
    
    cout << "Temperatura em Fahrenheit é: "<< f;
return 0;
    
}