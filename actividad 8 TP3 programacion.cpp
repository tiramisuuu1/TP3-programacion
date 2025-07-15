#include <iostream>
using namespace std;
int main()
{
   int valor, resultado = 1;

    cout<<"Ingrese un numero: ";
    cin>>valor;

    for (int i = 1; i <= 5; i++) {
        resultado*=valor;
    }

    cout<<valor<<" elevado a la quinta es igual a " <<resultado<<endl;
  
   return 0;
}