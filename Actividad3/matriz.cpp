#include <iostream>
using namespace std;


int main(){
    	
    int m[10][20];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 20; j++){
            m[i][j]=0;
        }
    }
        m[0][0]=3;
        m[2][1]=4;
        m[5][1]=33;
        m[1][10]=5;
        m[2][10]=22;
        m[5][3]=45;
        m[9][19]=78;

	cout << "Direcciones" << endl;
	cout << (*(m+0)+0) << endl;
	cout << (*(m+2)+1) << endl;
	cout << (*(m+5)+1) << endl;
	cout << (*(m+1)+10) << endl;
	cout << (*(m+2)+10) << endl;
	cout << (*(m+5)+3) << endl;
        cout << (*(m+9)+19) << endl;
        
        cout << "Valores" << endl;
	cout << *(*(m+0)+0) << endl;
	cout << *(*(m+2)+1) << endl;
	cout << *(*(m+5)+1) << endl;
	cout << *(*(m+1)+10) << endl;
	cout << *(*(m+2)+10) << endl;
	cout << *(*(m+5)+3) << endl;
        cout << *(*(m+9)+19) << endl;
        
}