#include <iostream>
#include <vector>
using namespace std;

struct Orden{
    int revueltas;
    int frijolconqueso;
    int queso;
    bool arroz;
};
typedef struct Orden Ordenn;

Ordenn solicitarOrden(){
    Ordenn p;
    string aux;
    cout << "Revueltas: "; cin >> p.revueltas;
    cout << "Frijol con queso: ";   cin >> p.frijolconqueso;
    cout << "Queso: "; cin >> p.queso;
    cout << "Arroz (s/n): "; cin >> aux;
    if(aux=="s"){
        p.arroz=true;
    }else{
        p.arroz=false;
    }
    return p;
}

void mostrarOrden(Orden p){
    cout << "Revueltas: "<< p.revueltas<<endl;
    cout << "Frijol con queso: " << p.frijolconqueso<<endl;
    cout << "Queso: "<< p.queso<<endl;
    if(p.arroz==true){
        cout << "Arroz"<< endl;
    }else{
        cout << "Maiz"<< endl;
    }
    cout << endl;
}

vector<Orden> lista;

void agregarOrden(){
    Orden p = solicitarOrden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++) 
        mostrarOrden(lista[i]);
}

int main(){
    cout << "Inicializando..." << endl;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Orden\n\t2) Ver ordenes"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarOrden();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}