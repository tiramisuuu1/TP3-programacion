/******************************************************************************

  4. Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No
se ingresan valores por teclado)

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{   
    for (int i = 1; i <= 25; i++) 
    {
        cout << i * 11 << " ";
    }
    
    return 0;
}