#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	int horas, min;
	cin >> horas >> min;
	
	int horasMin, totalMin, minSeg;
	horasMin = horas * 60;
	totalMin = horasMin + min;
	minSeg = totalMin * 60;
	
	ofstream saida("saida.txt");
	saida << horasMin << endl << totalMin << endl << minSeg << endl;
	
	saida.close();
	
return 0;
}
