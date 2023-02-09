#include <iostream>
using namespace std;

int main() {
 int dia, mes;
 string signo;

 cout << "Digite o dia do nascimento: ";
 cin >> dia;
 cout << "Digite o mes do nascimento: ";
 cin >> mes;

 if((dia>=21&&mes==3)||(dia<=20&&mes==4)){
       signo = "Áres";
       }
    if((dia>=24&&mes==9)||(dia<=23&&mes==10)){
      signo = "Libra";
      }
    if((dia>=21&&mes==4)||(dia<=21&&mes==5)){
     signo = " Touro";
     }
    if((dia>=24&&mes==10)||(dia<=22&&mes==11)){
     signo = "Escorpião";
     }
    if((dia>=22&&mes==5)||(dia<=21&&mes==6)){
     signo = "Gêmeos";
     }
    if((dia>=23&&mes==11)||(dia<=21&&mes==12)){
     signo = "Sagitario";
     }
    if((dia>=21&&mes==6)||(dia<=23&&mes==7)){
     signo = "Câncer ";
     }
    if((dia>=22&&mes==12)||(dia<=20&&mes==1)){
     signo = "Capricornio";
     }
    if((dia>=24&&mes==7)||(dia<=23&&mes==8)){
     signo = "Leão";
     }
    if((dia>=21&&mes==1)||(dia<=19&&mes==2)){
      signo = "Aquário" ;
      }
    if((dia>=24&&mes==8)||(dia<=23&&mes==9)){
     signo = " Virgem";
     }
    if((dia>=20&&mes==2)||(dia<=20&&mes==3)){
     signo = "Peixes" ;
     }

cout << "Você é do seguinte signo do zodíaco: " << signo;;
}