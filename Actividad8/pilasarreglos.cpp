#include <iostream>
using namespace std;

struct Tpila{
	float elements[100];
	int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
	s->top = -1;
}

bool empty(Pila *s){
	return s->top < 0;
}

void push(Pila *s, float e){
	if(s->top < 99){
		(s->top)++;
		s->elements[s->top] = e;
	}
}

void pop(Pila *s, float *e){
	if(s->top >= 0){
		*e = s->elements[s->top];
		(s->top)--;
	}
}

float ultimo_vacio(Pila *s){
    
    while(true){
    float ultimo;
	if(empty(s)){
		return ultimo;
                break;
        }
        pop(s, &ultimo);
    };
     
}
float ultimo_lleno(Pila *s){
    
    while(true){
        
    float ultimo;
	if(empty(s)){
		return ultimo;
                break;
        }
    
        pop(s, &ultimo);
        push(s, ultimo);
    };
     
}

int main()
{
	Pila unaPila;
	initialize(&unaPila);
	
	push(&unaPila, 4.6);
	push(&unaPila, 8.9);
	push(&unaPila, 23.4);
	
	float ultimo = ultimo_vacio(&unaPila);
	cout << "Ultimo dejando la pila vacia: " << ultimo << endl;
       
        float ultimolleno = ultimo_lleno(&unaPila);
	cout << "Ultimo dejando la pila intacta: " << ultimo << endl;
       
        
}