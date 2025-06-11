#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	int alt, total, degraus;
	
	ifstream entrada("entrada.txt");
	entrada >> alt >> total;
	
	degraus = (total*100) / alt;
	
	ofstream saida("degraus.txt");
	saida << degraus << endl;
	
	entrada.close();
	saida.close();
	
	return 0;
}
