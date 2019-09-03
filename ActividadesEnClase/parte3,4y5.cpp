//ESTEFANY ELIZABETH AGUIRRE RECINOS 00041319

#include <iostream>

using namespace std;

/*
 * 
 */

struct cont1{
    string nombre;
    string pais[5];
    string capital[5];
    int habitantes[5];
};
struct cont2{
    string nombre;
    string pais[5];
    string capital[5];
    int habitantes[5];
};
struct cont3{
    string nombre;
    string pais[5];
    string capital[5];
    int habitantes[5];
};
struct cont4{
    string nombre;
    string pais[5];
    string capital[5];
    int habitantes[5];
};
struct cont5{
    string nombre;
    string pais[5];
    string capital[5];
    int habitantes[5];
};

int main(int argc, char** argv) {
    int opcion=0, total=0, aux=0, max, x;
    struct cont1 c1;
    struct cont2 c2;
    struct cont3 c3;
    struct cont4 c4;
    struct cont5 c5;
    
    c1.nombre="America";
    c2.nombre="Asia";
    c3.nombre="Africa";
    c4.nombre="Europa";
    c5.nombre="Oceania";
    
    for (int j = 0; j < 5; j++) {
        cout << "Continente numero 1: "<<c1.nombre<<endl; 
        cout<<"Ingrese el nombre del pais: "<<endl;  
        cin >> c1.pais[j];  
        cout<<"Ingrese la capital: "<<endl;  
        cin >> c1.capital[j];  
        cout<<"Ingrese el numero de habitantes: "<<endl;  
        cin >> c1.habitantes[j];  
    }
    for (int j = 0; j < 5; j++) {
        cout << "Continente numero 2: "<<c2.nombre<<endl; 
        cout<<"Ingrese el nombre del pais: "<<endl;  
        cin >> c2.pais[j];  
        cout<<"Ingrese la capital: "<<endl;  
        cin >> c2.capital[j];  
        cout<<"Ingrese el numero de habitantes: "<<endl;  
        cin >> c2.habitantes[j];  
    }
    for (int j = 0; j < 5; j++) {
        cout << "Continente numero 3: "<<c3.nombre<<endl; 
        cout<<"Ingrese el nombre del pais: "<<endl;  
        cin >> c3.pais[j];  
        cout<<"Ingrese la capital: "<<endl;  
        cin >> c3.capital[j];  
        cout<<"Ingrese el numero de habitantes: "<<endl;  
        cin >> c3.habitantes[j];  
    }
    for (int j = 0; j < 5; j++) {
        cout << "Continente numero 4: "<<c4.nombre<<endl; 
        cout<<"Ingrese el nombre del pais: "<<endl;  
        cin >> c4.pais[j];  
        cout<<"Ingrese la capital: "<<endl;  
        cin >> c4.capital[j];  
        cout<<"Ingrese el numero de habitantes: "<<endl;  
        cin >> c4.habitantes[j];  
    }
    for (int j = 0; j < 5; j++) {
        cout << "Continente numero 5: "<<c5.nombre<<endl; 
        cout<<"Ingrese el nombre del pais: "<<endl;  
        cin >> c5.pais[j];  
        cout<<"Ingrese la capital: "<<endl;  
        cin >> c5.capital[j];  
        cout<<"Ingrese el numero de habitantes: "<<endl;  
        cin >> c5.habitantes[j];  
    }
    
    cout<<"Elija un continente para conocer su poblacion total"<<endl;
    cout<<"\t"<< "1. America"<<endl;
    cout<<"\t"<< "2. Asia"<<endl;
    cout<<"\t"<< "3. Africa"<<endl;
    cout<<"\t"<< "4. Europa"<<endl;
    cout<<"\t"<< "5. Oceania"<<endl;
    cout<<"Continente: ";
    cin>>opcion;
            
    switch(opcion){
        case 1: 
            for (int j = 0; j < 5; j++) {
                total=total + c1.habitantes[j];
            }
            cout<<"Total: "<<total<<endl;
            break;
        case 2: 
            for (int j = 0; j < 5; j++) {
                total=total + c2.habitantes[j];
            }
            cout<<"Total: "<<total<<endl;
            break;
        case 3: 
            for (int j = 0; j < 5; j++) {
                total=total + c3.habitantes[j];
            }
            cout<<"Total: "<<total<<endl;
            break;
        case 4: 
            for (int j = 0; j < 5; j++) {
                total=total + c4.habitantes[j];
            }
            cout<<"Total: "<<total<<endl;
            break;
        case 5: 
            for (int j = 0; j < 5; j++) {
                total=total + c5.habitantes[j];
            }
            cout<<"Total: "<<total<<endl;
            break;
        default:
            break;
    }
        
    int max1, max2, max3, max4, max5, x1, x2,x3,x4,x5;
    for (int i = 0; i < 5; i++){
        if(c1.habitantes[i] > max1){
            max1 = c1.habitantes[i];
            x1 = i;
        }
    }
    for (int i = 0; i < 5; i++){
        if(c2.habitantes[i] > max2){
            max2 = c2.habitantes[i];
            x2 = i;
        }
    }
    for (int i = 0; i < 5; i++){
        if(c3.habitantes[i] > max3){
            max3 = c3.habitantes[i];
            x3 = i;
        }
    }
    for (int i = 0; i < 5; i++){
        if(c4.habitantes[i] > max4){
            max4 = c4.habitantes[i];
            x4 = i;
        }
    }
    for (int i = 0; i < 5; i++){
        if(c5.habitantes[i] > max5){
            max5 = c5.habitantes[i];
            x5 = i;
        }
    }
 
    if(max1>max2 && max1>max3 && max1>max4 && max1>max5){
        cout<<"La capital con mayor poblacion es: "<<c1.capital[x1]<<endl;
        cout<<"Poblacion: "<<max1;
    }else if(max2>max1 && max2>max3 && max2>max4 && max2>max5){
        cout<<"La capital con mayor poblacion es: "<<c2.capital[x2]<<endl;
        cout<<"Poblacion: "<<max2;
    }else if(max3>max1 && max3>max2 && max3>max4 && max3>max5){
        cout<<"La capital con mayor poblacion es: "<<c3.capital[x3]<<endl;
        cout<<"Poblacion: "<<max3;
    }else if(max4>max1 && max4>max3 && max4>max2 && max4>max5){
        cout<<"La capital con mayor poblacion es: "<<c4.capital[x4]<<endl;
        cout<<"Poblacion: "<<max4;
    }else if(max5>max1 && max5>max3 && max5>max4 && max5>max2){
        cout<<"La capital con mayor poblacion es: "<<c5.capital[x5]<<endl;
        cout<<"Poblacion: "<<max5;
    }
    
    return 0;
}

