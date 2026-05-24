#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=100;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int i=0, j=0, a=0, r=0;
	int liczby[n], cyfry[16];
	char pom=0;
	
	for(i=0; i<16; i++){
		cyfry[i]=0;
	}
		
	for(i=0; i<n; i++){
		we>>liczby[i];
	}
	
	for(i=0; i<n; i++){
		a=liczby[i];
		while(a>0){
			r=a%16;
			a/=16;
			cyfry[r]++;
		}
	}
	
	for(i=0; i<10; i++){
		cout<<i<<" : "<<cyfry[i]<<endl;
	}
	
	for(i=10; i<16; i++){
		pom=i+'A'-10;
		cout<<pom<<" : "<<cyfry[i]<<endl;
	}
	
	return 0;
}
