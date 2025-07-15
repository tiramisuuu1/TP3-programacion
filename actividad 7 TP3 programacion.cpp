/******************************************************************************

       7. Desarrolle un algoritmo que lea los primeros 300 números enteros y determine
cuántos de ellos son impares; al final deberá indicar su sumatoria.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
   int i, suma=0, contador=0;
   
   for (i=1; i<=300; i++)
   {
    if (i%2!=0)
    {
        cout<<i<<" ";
        suma+=i;
        contador++;
    }
   } 
        cout<<endl<<"La cantidad de numeros impares que hay son de "<<contador<<"."<<endl;
        cout<<"La sumatoria total es "<<suma<<".";
  
  
   return 0;
}