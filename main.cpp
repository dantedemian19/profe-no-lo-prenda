#include <iostream>
#include <windows.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

    const int l=3,c=2;// l=numero de lineas y c= numero de coches por linea

void rectotal(int L[l][c],int r[]){
for(int i;i<l;i=i+1){
    for(int j;j<c;j=j+1){
    r[i]=r[i]+L[i][j];
}
cout<<"la recaudacion de la linea "<<i<<" es: "<<r[i]<<" \n";
}
};

void mostrar(int L[l][c]) {



};

void mayorymenor(int L[l][c],int max[l],int min[l]) {
	for (int i; i < l; i = i + 1) {
		max[i] = L[i][1];
		min[i] = L[i][1];
	}
	int a[l], b[l];
	for (int i; i < l; i = i + 1) {
		for (int j; j < c; j = j + 1) {
			if (L[i][j] > max[i]) {
				a[i] = j;
				max[i] = L[i][j];
			}
		}
		max[i] = L[i][a[i]];
	}
	for (int i; i < l; i = i + 1) {
		for (int j; j < c; j = j + 1) {
			if (L[i][j] < min[i]) {
				b[i] = j;
				min[i] = L[i][j];
			}
		}
		min[i] = L[i][b[i]];
	}
	for (int i; i < l; i = i + 1) { 
		cout << "el que mas recaudo de la linea " << i << " es: " << a[i] <<max[i]<< " \n";
		cout << "el que menos recaudo de la linea " << i << " es: " << b[i] <<"con : "<<min[i]<< " \n";
	}
};

int main(){
int u=0;
int x,y;
int L[l][c];
int r[l];
int max[l];
int min[l];

    for(int i;i<l;i=i+1){
    for(int j;j<c;j=j+1){
    L[i][j]=0;
}}
while(u!=6){
        u=u+1;
        cout<< "|" << " Cantidad de lineas: " << l << "\n" <<"| Cantidad de coches: " << c <<"\n";

        cout<<"ingrese numero de linea: ";
        cin>>x;
        cout<<"ingrese numero de coche: ";
        cin>>y;
		
        if(x<=l&&y<=c&&x>0&&y>0){
			if (L[i][j] = 0) {
        cout<<"ingrese recaudacion del coche: ";
        cin>> L[x][y];
		system("cls");
			}
			else {
				cout<<"Este coche ya ha sido ingresado \n"
			}

        
        }else{
        system("cls");
        cout<<"ingrese un valor existente"<<"\n";
        }
            for(int i;i<l;i=i+1){
    for(int j;j<c;j=j+1){
    if(L[i][j]!=0){
        u=u+1;
    }
}
        }
        }
rectotal(L,r);
mostrar(L);
mayorymenor(L, max, min);

}


