/******************************************************************************

   3. Dividir un número por 2 hasta encontrar un valor menor que 0.01

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{   
    int i;
    float num;
        cout<<"Numero: ";
        cin>>num;
    while (num >= 0.01)
    {
        num /= 2;
    }
        cout<<num;
    
    return 0;
}