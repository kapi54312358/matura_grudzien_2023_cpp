#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int const n=10000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/mecz.txt");
	string wyniki="";
	int i=0, A=0, B=0, passaA=0, passaB=0, najdlA=0, najdlB=0;
	
	we>>wyniki;
	
	for(i=0; i<n-1; i++){
		if(wyniki[i]=='A')
			A++;
		else
			B++;
		
		if(wyniki[i]!=wyniki[i-1] && wyniki[i]=='B'){
			if(A>=10){
				passaA++;
			}
			
			if(B>=10){
				passaB++;
			}
			
			if(A>najdlA)
				najdlA=A;
			
			if(B>najdlB)
				najdlB=B;
			
			A=0;
			B=0;
		}		
	}
	
	cout<<passaA+passaB;
	if(najdlA>najdlB)
		cout<<" A "<<najdlA;
	else
		cout<<" B "<<najdlB;
	
	return 0;
}
