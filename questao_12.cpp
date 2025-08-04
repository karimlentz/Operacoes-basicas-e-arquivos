#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	float profundidade, altura, largura, densidade;
	
	ifstream entrada ("entrada.txt");
	entrada >> profundidade >> altura >> largura >> densidade;
	
	float peso;
	peso = (profundidade * altura * largura * densidade);
	cout << peso << endl;
	
return 0;
}
