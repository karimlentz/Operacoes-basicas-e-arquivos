#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    int valor=0;
    cin >> valor;

    int primo1=0, primo2=0, primo3=0; 
    ifstream entrada("chaves.txt");
    entrada >> primo1 >> primo2 >> primo3;

    int resto1=0, resto2=0, resto3=0;
    resto1= (valor%primo1);
    resto2= (valor%primo2);
    resto3= (valor%primo3);

    ofstream saida("codigo.txt");
    saida << resto1 << endl << resto2 << endl << resto3 << endl;

    entrada.close();
    saida.close();
return 0;
}
