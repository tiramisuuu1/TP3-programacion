/******************************************************************************

        6. Desarrolle un programa que realice la sumatoria de los números enteros pares
comprendidos entre el 1 y el 100, es decir, 2 + 4 + 6 +.... + 100. El programa deberá
imprimir los números en cuestión y finalmente su sumatoria

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int i, suma=0;
        cout<<"A continuacion apareceran numeros pares entre 1 y 100:"<<endl;
    
    for (i=2; i<=100; i+=2)
    {
       cout<<i<<" ";
       suma+=i;
    }
        cout<<endl<<"La sumatoria de los pares es: "<<suma;

    

    return 0;
}