#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int const n=10000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/mecz.txt");
	string wyniki="";
	int i=0, licznikA=0, licznikB=0;
	
	we>>wyniki;
	
	for(i=0; i<n; i++){
		if(wyniki[i]=='A')
			licznikA++;
		else
			licznikB++;
		
		if(abs(licznikA-licznikB)>=3){
			if(licznikA>=1000 || licznikB>=1000){
				i=n;
			}
		}
	}
	
	if(licznikA>licznikB)
		cout<<"A"<<endl;
	else
		cout<<"B"<<endl;	
	cout<<licznikA<<" "<<licznikB<<endl;

	
	return 0;
}
