#include <iostream>
using namespace std;


void citire(int a[100][100],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "sir[" << i << "][" << j << "]=" << endl;
			cin >> a[i][j];
		}
	}
}

void produs(int a[100][100],int n){
	int i,j;
	int produs=1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j] < 10 ){
				if ((a[i][j] %2)!=0){
					produs*=a[i][j];
				}
			}
		}
	}
	cout << "Produsul numerelor impare este:" << produs << endl;
}

void main(){
	int n,sir[100][100];
	cout << "Introduceti un nr:" << endl;
	cin >> n;
	citire(sir,n);
	produs(sir,n);

	system("pause");
}
