#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	string arquivo1, arquivo2, palavra1, palavra2, arquivo3;
	cin >> arquivo1 >> arquivo2 >> arquivo3;
	
	ifstream entrada1(arquivo1);
	entrada1 >> palavra1;
	
	ifstream entrada2(arquivo2);
	entrada2 >> palavra2;
	
	ofstream saida(arquivo3);
	saida << palavra1 << " " << palavra2 << endl;
	
	entrada1.close();
	entrada2.close();
	saida.close();
	
	return 0;
}
