#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	
	float comp, alt;
	cin >> comp >> alt;
	
	float area;
	area = comp * alt;
	
	float potencia;
	potencia = area * 18;
	
	ofstream saida("potencia.txt");
	saida << fixed << setprecision(1) << area << " m2" << endl;
	saida << fixed << setprecision(1) << potencia << " W" << endl;
	
	saida.close();
	
	return 0;
}
