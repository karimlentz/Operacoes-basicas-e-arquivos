#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	
	float x1, x2, x3, x4, x5, x6, x7, x8;
	
	ifstream entrada("dados.txt");
	entrada >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >> x7 >> x8;
	
	float media;
	media = (x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8)/8;
	
	ofstream saida("saida.txt");
	saida << fixed << setprecision(3) << media;
	
	return 0;
}
