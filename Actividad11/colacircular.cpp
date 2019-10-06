#include <iostream>
using namespace std;

void ver(int cola[]){
    int i;
    for(i=0;i<3;i++){
        cout<<cola[i]<<" ";
    }
}


int main()
{
    int cola[3];
    int frente=0;
    int atras=0;
    int band=0;
    int opc;
    int num;
 
    do{
        cout<<"\n Menu Cola cicular: ";
        cout<<"\n 1.Insertar:";
        cout<<"\n 2.Eliminar:";
        cout<<"\n 3.Ver:";
        cout<<"\n 4.Salir:";
        cout<<"\n Seleccione opcion: ";
        cin>>opc;
 
        switch(opc){
        case 1:
            if(frente==atras && band==1){
                cout<<"Cola llena"<<endl;
            }else{          
                cout<<"Inserte un numero: ";
                cin>>num;
                cola[atras]=num;
                cout<<"Numero ingresado "<<cola[atras]<<endl;
                atras=(atras+1)%3;
                band=1;
            }
            break;
 
        case 2:
            if(frente==atras && band==0){
                cout<<"Cola vacia"<<endl;
            }
            else{
                num=cola[frente];
                cout<<"Dato eliminado "<<num<<endl;
                band=0;
                cola[frente]= 0;
                frente=(frente+1)%3;
            }
            break;

        case 3:
            ver(cola);
            break;
        }
    }while(opc!=4);
    
    return 0;       
}