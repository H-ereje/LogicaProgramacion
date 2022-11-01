#include <iostream>
using namespace std;

int main()
{
   int vCreditos, nCreditos;
   float Prom, pDescuento;
   char g;
   cout << "Ingrese su promedio: ";
   cin >> Prom;
  
   cout << "Ingresa el NUMERO  si es pregrado(1) o posgrado(2): ";
   cin >> g;
   if (g == 1 && Prom >= 4.5){
       nCreditos = 28;
       pDescuento = 0.25;
       cout << "El monto a pagar es de: " << (nCreditos * 50000) - ((nCreditos * 50000) * pDescuento);
   }
   else if (g == 1 && Prom < 4.5 && Prom >= 4.0){
       nCreditos = 25;
       pDescuento = 0.1;
       cout << "El monto a pagar es de: " << (nCreditos * 50000) - ((nCreditos * 50000) * pDescuento);
   }
   else if (g == 1 && Prom < 4.0 && Prom >= 3.5){
       nCreditos = 20;
       pDescuento = 0;
       cout << "El monto a pagar es de: " << (nCreditos * 50000) - ((nCreditos * 50000) * pDescuento);
   }
   else if (g == 1 && Prom < 3.5 && Prom >= 2.5){
       nCreditos = 15;
       pDescuento = 0;
       cout << "El monto a pagar es de: " << (nCreditos * 50000) - ((nCreditos * 50000) * pDescuento);
   }
   else if (g == 1 && Prom < 2.5){
       cout << "No se puede matricular";
   }
   else if (g == 2 && Prom >= 4.5){
       nCreditos = 20;
       pDescuento = 0.2;
       cout << "El monto a pagar es de: " << (nCreditos * 300000) - ((nCreditos * 300000) * pDescuento);
   }
   else if (g == 2 && Prom < 4.5){
       nCreditos = 10;
       pDescuento = 0;
       cout << "El monto a pagar es de: " << (nCreditos * 50000) - ((nCreditos * 50000) * pDescuento);
   }
}