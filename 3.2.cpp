#include <iostream>
#include <fstream>

using namespace std;

int const n=100;

sito_era(bool*A, long long r){
	long long i=0, j=0;
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
	long long i=0, r=1000000,  licznik=0;
	long long liczby[n];
	bool sito[r];
	
	for(i=0; i<n; i++){
		we>>liczby[i];
	}
	
	sito_era(sito, r);
	
	for(i=0; i<n; i++){
		if(sito[liczby[i]-1])
			licznik++;
	}
	
	cout<<licznik;
	
	return 0;
}
