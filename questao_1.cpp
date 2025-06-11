#include <iostream>
#include <fstream>

using namespace std;

int main(){

string nomearquivo;
cin >> nomearquivo;

string palavra;
ifstream arquivo(nomearquivo);
arquivo >> palavra;

cout << palavra << endl;

arquivo.close();

return 0;
}
