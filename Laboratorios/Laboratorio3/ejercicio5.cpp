#include <iostream>
using namespace std;

struct nodo{
    int dato;
    nodo *sig;
};

class Lista{
private:
    nodo *pInicio;
    
public:
    Lista(void);
    void mostrarLista(void);
    void mostrarListaInverso(void);
    void mostrarListaInverso(nodo *);
    void agregar(int);
};

Lista::Lista(void) {
    pInicio = NULL;
}

void Lista::agregar(int dato) {
    nodo *p, *q;

    nodo *nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = NULL;
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        p = pInicio;
        q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void Lista::mostrarLista(void) {
    nodo *s = pInicio;
    while (s != NULL) {
        cout << s->dato << " ";
        s = s->sig;
    }
}

void Lista::mostrarListaInverso(void) {
    mostrarListaInverso(pInicio);
}

void Lista::mostrarListaInverso(nodo *s) {
    if (s != NULL) {
        mostrarListaInverso(s->sig);
        cout << s->dato << " ";
    }
}


int main(void)
{
    Lista miLista;
    //agregando items a la lista
    miLista.agregar(32);
    miLista.agregar(23);
    miLista.agregar(65);
    miLista.agregar(24);
    miLista.agregar(79);
    
    cout << "Contenido de la lista:" << endl;
    miLista.mostrarLista();
    cout << endl << "Lista en orden inverso:" << endl;
    miLista.mostrarListaInverso();

    return 0;
}