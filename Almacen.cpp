#include <iostream>
using namespace std;

int main()
{
    int n;
    int m = 800000;
    int j;
    cout<< "Ingrese el numero de escritorios: ";
    cin>> n;
    if (n<5) {
        j = m*n*0.1;
        cout<< "El valor a pagar es: " << m*n-j <<endl;
    }
    else if (n>=5 && n<10) {
        j = m*n*0.2;
        cout<< "El valor a pagar es: " << m*n-j <<endl;
    }
    else if (n>=10) {
        j = m*n*0.4;
        cout<< "El valor a pagar es: " << m*n-j <<endl;
    }
    return 0;
}