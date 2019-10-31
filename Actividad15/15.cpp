#include<iostream>
using namespace std;

int max(int a, int b) {
   return ((a > b) ? a : b);
}

typedef struct arbol {
   int info;
   struct arbol *izq, *der;
}arbol;

arbol *nuevonodo(int info) {
   arbol *p = new arbol;
   p->info = info;
   p->izq = NULL;
   p->der = NULL;
   return p;
}

int altura(arbol *raiz) {
   if (raiz == NULL)
         return 0;

      int lh = altura(raiz->izq);
      int rh = altura(raiz->der);

      return 1 + max(lh,rh);
}

arbol *llenar() {
   arbol *raiz = nuevonodo(31);
   raiz->izq = nuevonodo(16);
   raiz->der = nuevonodo(52);
   raiz->izq->izq = nuevonodo(7);
   raiz->izq->der = nuevonodo(24);
   raiz->izq->der->izq = nuevonodo(19);
   raiz->izq->der->izq->izq = nuevonodo(25);
   raiz->izq->der->der = nuevonodo(29);
   return raiz;
}

int main() {
   arbol *raiz = llenar();
   cout<<"\nAlrura del arbol: "<<altura(raiz);
   cout<<endl;
   return 0;
}