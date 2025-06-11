#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	int num;
	cin >> num;
	
	int cen, dez, un;
	cen = num / 100;
	dez = (num % 100) / 10;
	un = num % 10;
	
	int soma;
	soma = cen + dez + un;
	cout << soma << endl;
	
	int produto;
	produto = cen * dez * un;
	
	ofstream saida("saida.txt");
	saida << produto;
	
	saida.close();
	
	return 0;
}
