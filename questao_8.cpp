#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
	
	float custo, preco;
	
	ifstream entrada("teatro.txt");
	entrada >> custo >> preco;
	
	int convites;
	convites = ceil(custo / preco);
	
	ofstream saida("convite.txt");
	saida << convites;
	
	entrada.close();
	saida.close();	
	
	return 0;
}
