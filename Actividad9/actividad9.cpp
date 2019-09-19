#include <iostream>
#include <stack>
using namespace std;

float ultimo_vacio(stack<float> *s){
    float ultimo=0;
    while(true){
	if(s->empty()){
		return ultimo;
                break;
        }
    ultimo = s->top();
    s->pop();
    };
     
}


int main()
{
        stack<float> s;
        s.push(4.6);
        s.push(5.3);
        s.push(2.8);

	
	
	float ultimo = ultimo_vacio(&s);
       
	cout << "utimo: " <<ultimo  << endl;
        
}