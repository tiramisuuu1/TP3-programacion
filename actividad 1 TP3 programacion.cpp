#include <iostream>
using namespace std;
int main()
{
    int aprobados=0, reprobados=0, nota, f;
        for(f=1;f<=10;f++)
    {
    cout<<"Ingrese la nota del alumno: ";
        cin>>nota;
   
    if (nota>=7)
    {
        aprobados=aprobados +1;
    }
    else
    {
       reprobados=reprobados +1;
    }
    

   } 
    cout<<"Aprobados: "<<aprobados<<endl;
    cout<<"Desaprobados: "<<reprobados;
 
 
    return 0;
}