#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	int h, min;
	cin >> h >> min;
	
	int hMin, totalMin, minSeg;
	
	hMin = h * 60;
	totalMin = hMin + min;
	minSeg = totalMin * 60;
	
	ofstream saida("saida.txt");
	saida << hMin << endl << totalMin << endl << minSeg << endl;
	
	saida.close();
	
return 0;
}
