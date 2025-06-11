#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	string nomeArquivo;
	string palavra;
	
	cin >> nomeArquivo;
	cin >> palavra;
	
	ofstream arquivo(nomeArquivo);
	arquivo << palavra;
	
	arquivo.close();	
	
	return 0;
}
