#include <iostream>
using namespace std;

//------ Creacion de nodo y de arbol ------
struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}

int max(int a, int b) {
   return ((a > b) ? a : b);
}
//------ Agregar nodos a un arbol ------
void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a){
    //solicitar informacion (numero a agregar)
    int numero = 0;
    cout << "Numero a agregar: ";
    cin >> numero;
    
    Arbol p = a;
    
    //desplazarse hasta el lugar adecuado
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return;
        }
        else if(numero < p->info){//ir a la izquierda
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{//ir a la derecha
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    
    //agregar el nuevo nodo
    if(numero < p->info)
        asignarIzq(p, numero);
    else
        asignarDer(p, numero);
}



int altura(Arbol a) {
   if (a == NULL)
         return 0;

      int lh = altura(a->izq);
      int rh = altura(a->der);

      return 1 + max(lh,rh);
}

//------ Recorrer un arbol (in, pre y post orden) ------
void preorden(Arbol a){
    if(a != NULL){
        cout << " " << a->info;
        preorden(a->izq);
        preorden(a->der);
    }
}
void inorden(Arbol a){
    if(a != NULL){
        inorden(a->izq);
        cout << " " << a->info;
        inorden(a->der);
    }
}
void postorden(Arbol a){
    if(a != NULL){
        postorden(a->izq);
        postorden(a->der);
        cout << " " << a->info;
    }
}

int par = 0, impar=0;
void Nodos(Arbol a){
    Arbol p=a;
    if(a != NULL){
        if(p->info%2 == 0){
            par++;
        }else{
            impar++;
        }
        Nodos(a->izq);
        Nodos(a->der);
    }
}

int ceros = 0, positivos=0, negativos=0;
void Nodoscpn(Arbol a){
    if(a != NULL){
        if(a->info == 0){
            ceros++;
        }else if(a->info>0){
            positivos++;
        }else{
            negativos++;
        }
        Nodoscpn(a->izq);
        Nodoscpn(a->der);
    }
}


int sumapares = 0;
int sumarPar(Arbol a){
    if(a != NULL){
        if(a->info%2==0){
            sumapares = sumapares + a->info;
          
        }
          sumarPar(a->izq);
            sumarPar(a->der);
        
    }
}


int sumaimpares = 0;
int sumarImPar(Arbol a){
    if(a != NULL){
        if(a->info%2==0){
            sumaimpares = sumaimpares + a->info;
          
        }
        sumarImPar(a->izq);
        sumarImPar(a->der);
        
    }
}
void recorrerArbol(Arbol a){
    cout << "Recorrido PRE orden:"; preorden(a); cout << endl;
    cout << "Recorrido IN orden:"; inorden(a); cout << endl;
    cout << "Recorrido POST orden:"; postorden(a); cout << endl;
}

int main(){
    int variable = 0;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin >> variable;
    
    Arbol arbol = crearArbol(variable);
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar\n\t2) Recorrer"
            << "\n\t3) Cantidad de nodos par  e impar\n\t4) Suma de pares"
            << "\n\t5) Suma de impares\n\t6) Cantidad de ceros, positivos y negativos\n\t7) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: agregarNodo(arbol);
            break;
            case 2: recorrerArbol(arbol);
            break;
            case 3: Nodos(arbol);
                    cout<<"\nPares: "<<par<<" Impares: "<<impar<<endl;
            break;
            case 4: sumarPar(arbol);
                    cout<<"\nSuma par: "<<sumapares<<endl;
            break;
            case 5: sumarImPar(arbol);
                    cout<<"\nSuma impar: "<<sumaimpares<<endl;
            break;
            case 6: Nodoscpn(arbol);
                    cout<<"\nCeros: "<<ceros<<" Positivos: "<<positivos<<" Negativos: "<<negativos<<endl;
            break;
            case 7: continuar = false; 
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
    
    return 0;
}