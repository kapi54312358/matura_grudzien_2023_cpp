#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=10000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/mecz.txt");
	string wyniki="";
	int i=0, licznik=0;
	
	we>>wyniki;
	
	for(i=1; i<n; i++){
		if(wyniki[i]!=wyniki[i-1])
			licznik++;
	}
	
	cout<<licznik;
	
	return 0;
}
