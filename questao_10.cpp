#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
	
	float altDegrau, altAlcan;
	int degraus;
	
	ifstream entrada("entrada.txt");
	entrada >> altDegrau >> altAlcan;
	
	degraus =  ceil(altAlcan * 100 / (altDegrau));
	
	ofstream saida("degraus.txt");
	saida << degraus << endl;
	
	entrada.close();
	saida.close();
	
return 0;
}
