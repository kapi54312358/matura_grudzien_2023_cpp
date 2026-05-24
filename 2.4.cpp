#include <iostream>
#include <fstream>

using namespace std;

int const n=1000;

bool przejscie(int a, int b){
	int i=0;
	
	while(a<=b){
		if(a==b)
			return true;
		b/=2;
	}
	
	return false;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/pary.txt");
	int i=0;
	int liczba1[n], liczba2[n];
	
	for(i=0; i<n; i++){
		we>>liczba1[i];
		we>>liczba2[i];
	}
	
	for(i=0; i<n; i++){
		if(przejscie(liczba1[i], liczba2[i]))
			cout<<liczba1[i]<<" "<<liczba2[i]<<endl;
	}
	
	return 0;
}
