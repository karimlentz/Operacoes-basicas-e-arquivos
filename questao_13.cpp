#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	int valor;
	cin >> valor;
	
	int cem, cinquenta, dez;
	
	cem = valor / 100;
	valor -= (cem * 100);
	
	cinquenta = valor / 50;
	valor -= (cinquenta * 50);
	
	dez = valor / 10;
	
	ofstream saida("saque.txt");
	saida << cem << endl << cinquenta << endl << dez << endl;
		
	saida.close();
	
return 0;
}
