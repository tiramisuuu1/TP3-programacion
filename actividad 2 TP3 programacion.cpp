/******************************************************************************

   2. Desarrollar un programa que solicite la carga de 10 valores por teclado y nos
muestre posteriormente la suma de los valores ingresados, el valor máximo, el mínimo
y su promedio.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int i;
    float n, suma=0, max, min, promedio;
    
    cout<<"Ingrese 10 valores distintos. "<<endl;
    for (i = 1; i <= 10; i++) {
        cin>>n;
        suma = suma + n;
        promedio = suma/10;
        
    if (n>max) max = n;
    if (n<min) min = n;
                              }
    
    cout<<"La suma de los valores es: "<<suma<<endl;
    cout<<"El numero mayor en los valores es: "<<max<<endl;
    cout<<"El numero menor en los valores es: "<<min<<endl;
    cout<<"El promedio de los valores es: "<<promedio;
   
    return 0;
}