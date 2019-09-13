#include <iostream>

using namespace std;


struct complejo{
        int preal;
        int pimaginaria;
    };
    
int main()
{
    struct complejo c1;
    struct complejo c2;
    struct complejo c3;
    struct complejo c4;

    int partereal, parteimaginaria;
    cout<<"Ingrese la parte real del primer numero: ";
    cin>> c1.preal;
    cout<<"Ingrese la parte imaginaria del primer numero (Numero Entero): ";
    cin>> c2.pimaginaria;
    cout<<"Ingrese la parte real del segundo numero: ";
    cin>> c3.preal;
    cout<<"Ingrese la parte imaginaria del segundo numero(Numero Entero): ";
    cin>> c4.pimaginaria;
    
    partereal=c1.preal + c3.preal;
    parteimaginaria = c2.pimaginaria + c4.pimaginaria;
    if(parteimaginaria<0){
        cout<<"Resultado: "<<partereal<<parteimaginaria<<"j";   
    }else{
        cout<<"Resultado: "<<partereal<<"+"<<parteimaginaria<<"j";   
    }
}