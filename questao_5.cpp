#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	
	int n1, p1, n2, p2, n3, p3;
	
	ifstream entrada("notas.txt");
	entrada >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;
	
	float media;
	media = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
	
	ofstream saida("final.txt");
	saida << fixed << setprecision(2) << media << endl;
	
	entrada.close();
	saida.close():
	
	return 0;
}
