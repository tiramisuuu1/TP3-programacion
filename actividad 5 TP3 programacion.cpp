/******************************************************************************

  5. Desarrollar un programa que permita cargar n números enteros y luego nos informe
cuántos valores fueron pares y cuántos impares. Emplear el operador “%” en la
condición de la estructura condicional (este operador retorna el resto de la división de
dos valores, por ejemplo 11%2 retorna un 1):
if (valor%2==0) //Si el if da verdadero luego es par.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int cantidad, valor;
    int par=0, impar=0;

    cout<<"Cuantos numeros queres ingresar?: ";
    cin>>cantidad;

    for (int i = 1; i <= cantidad; i++) {
        cout<<"Ingrese un numero "<<i<<": ";
        cin>>valor;

        if (valor % 2 == 0) 
        {
            par++;
        } else {
            impar++;
               }
                                        }

    cout<<"Los numeros pares en total son: "<<par<<endl;
    cout<<"Los numeros impares en total son: "<<impar;

    return 0;
}