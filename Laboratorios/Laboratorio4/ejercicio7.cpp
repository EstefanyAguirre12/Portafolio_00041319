#include <iostream>

using namespace std;

struct nodo
{
    int dato;
    nodo *sig;
};

class ListaSimple
{
private:
    nodo *inicio;

public:
    ListaSimple();
    nodo *CrearNodo(int);
    void insertarFinal(int);
    bool eliminar(int);
    void mostrar();
    int contador(int);
};
ListaSimple::ListaSimple()
{
    this->inicio = NULL;
}

nodo *ListaSimple::CrearNodo(int dato)
{
    /*Aca creamos el nodo para despues poder insertarlo*/
    nodo *nuevo = new (nodo);
    nuevo->dato = dato; //
    nuevo->sig = NULL;
    return nuevo;
}



void ListaSimple::insertarFinal(int dato)
{
    //primero creamos el nodos
    nodo *nuevo = ListaSimple::CrearNodo(dato);
    //crearemos un punetero auxiliar
    nodo *aux;
    //primero validaremos si hay algo en nuestra lista
    if (this->inicio)
    {
        aux = this->inicio; //creamos una copia del puntero para no perder la referencia
        //recorreremos la lista hasta el ultimo elemento
        while (aux->sig)
        {
            aux = aux->sig;
        }

        //cuando encontremos el final de lista
        aux->sig = nuevo;  //agregamo al final de la lista
        nuevo->sig = NULL; //le decimos que es el final de la lista
    }
    else
    {
        // si la lista se encuentra vacia
        nuevo->sig = this->inicio; // su sig tiene que ser el inicio de la lista
        this->inicio = nuevo;      // cambiamos la referencia
    }
}

bool ListaSimple::eliminar(int dato)
{
    //creamos los punetero que nos serviran para borrar
    nodo *aux = this->inicio; // para buscar el nodo
    nodo *saltarin;           // estara una posicion adelante del nodo buscado
    nodo *salto;              //estara un nodo antes
    int cont = 0;             // si esta en uno significa que es el primer elemento de la lista

    while (aux && aux->dato != dato)
    {
        aux = aux->sig;
        cont++;
    }

    //validamos si encontro el numero
    if (aux)
    {
        //preguntamos si el primer elemento es para eliminar
        if (cont == 0)
        {
            saltarin = aux->sig;
            aux->sig = NULL;         //desenlazamos el nodo
            this->inicio = saltarin; //cambiamos el inicio de la lista
            delete (aux);            //eliminamos el nodo
        }
        else
        {
            salto = this->inicio;
            saltarin = aux->sig; // le agreamos la estructura que esta adelante de aux
            //tendremos que llegara una estructura antes
            while (salto->sig->dato != dato)
            {
                salto = salto->sig;
            }
            //nos situamos detras procederemos hacer la elminacion
            aux->sig = NULL; //desenlazamos el nodo buscado
            //luego volemos a enlazara para no afectar la lista
            salto->sig = saltarin;
            delete (aux); // elimino el nodo
        }
        return true;
    }
    else
    {
        return false; //retornamos false si no se encontro el nodo
    }
}

void ListaSimple::mostrar()
{
    nodo *salto = this->inicio;
    while (salto)
    {
        cout << salto->dato << " ";
        salto = salto->sig;
    }
    cout << "\n";
}

int ListaSimple::contador(int dato)
{
    int cont=0;
    nodo *salto = this->inicio;
    while (salto)
    {
        if(dato==salto->dato){
            cont++;
        }
        salto = salto->sig;
        
    }
    return cont;
}



int main(){
    ListaSimple l;
    int cont, dato, eliminar;
    
    do{
        
        cout<<"Llenar lista (0 para detener): ";
        cin>>dato;
        l.insertarFinal(dato);
    
    }while(dato>0);
    
    cout<<"Que dato desea eliminar? ";
    cin>>eliminar;
    cont = l.contador(eliminar);
    cout<<"Lista original"<<endl;
    l.mostrar();
    while(cont>0){
         l.eliminar(eliminar);
         cont--;
    }
    cout<<"Resultado"<<endl;
    l.mostrar();
    return 0;
}