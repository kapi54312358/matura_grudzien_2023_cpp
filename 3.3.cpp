#include <iostream>
#include <fstream>

using namespace std;

int const n=100;

void sito_era(bool*A, long long r){
	long i=0, j=0;
	for(i=1; i<r; i++){
		A[i]=1;
	}
	
	A[1]=0;
	
	for(i=2; i<r; i++){
		for(j=i+i; j<r; j+=i){
			A[j]=0;
		}
	}
	
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	long i=0, j=0, r=1000000,  licznik=0, najw=0, najm=10000, imax=0, imin=0, pom=0;
	long liczby[n], rozklady[n];
	bool sito[r];
	
	for(i=0; i<n; i++){
		we>>liczby[i];
	}
	
	sito_era(sito, r);
	
	for(i=0; i<n; i++){
		licznik=0;
		for(j=2; j<=liczby[i]/2; j++){
			if(sito[j]){
				pom=liczby[i]-j;
				if(sito[pom]){
					licznik++;
				}
			}
		}
		rozklady[i]=licznik;
	}
	
	for(i=0; i<n; i++){
		if(rozklady[i]>najw){
			najw=rozklady[i];
			imax=i;
		}
		
		if(rozklady[i]<najm){
			najm=rozklady[i];
			imin=i;
		}			
	}
	
	cout<<liczby[imax]<<" "<<najw<<endl<<liczby[imin]<<" "<<najm;
	
	return 0;
}
