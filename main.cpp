#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	srand(time(0)); //Random generator

	int n, i, p, d, min, max, Imin, Imax;
	
	do {
	cout<<"Inserire il numero elementi del vettore"<<endl;
	cin>>n;
	}
	while (n<0);
	

	vector<int> v(n);
	
	i=0;
	while (i<n) {
		v[i]= rand() % 1001;
		i=i+1;
	}

	i=0;
	p=0;
	d=0;
	while (i<n) {
		if (v[i]%2==0) {
			p=p+1;
		}
		else {
			d=d+1;
		}
		i=i+1;
	}
	
	i=0;
	min=v[0];
	Imin=i;
	while (i<n) {
		if (v[i]<min) {
			min=v[i];
			Imin=i;
		}
		i=i+1;
	}
	
	i=0;
	max=v[0];
	Imax=i;
	while (i<n) {
		if (v[i]<max) {
			min=v[i];
			Imax=i;
		}
		i=i+1;
	}

	cout<<"Sono stati generati "<<p<<" numeri pari"<<endl;
	cout<<"Sono stati generati "<<d<<" numeri dispari"<<endl;

	cout<<"Il numero minore generato è "<<min<<", si trova nella cella "<<Imin<<endl;
	cout<<"Il numero maggiore generato è "<<max<<", si trova nella cella "<<Imax<<endl;

}