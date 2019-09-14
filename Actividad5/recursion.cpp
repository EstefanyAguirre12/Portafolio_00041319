#include <iostream>
using namespace std;

int mult(int a, int b){
	if(b==1){
		cout << "n=" << mult << " caso base" << endl;
		return a;
	}else{
		return a+mult(a,b-1);
	}
}



int main()
{
	cout << "multiplicacion"<<endl;
	int r = mult(5,6);
	cout << "Resultado: " << r << endl;
	
	
}