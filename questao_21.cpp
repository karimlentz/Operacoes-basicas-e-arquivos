#include <iostream>
#include <fstream>

using namespace std;

int main(){

    float grau_decimal=0;
    cout << "Grau em notação decimal:" << endl;
    cin >> grau_decimal;

    int grau_sexagesimal=0, minuto=0, segundo=0;
    float fracionaria=0;
    
    grau_sexagesimal = grau_decimal;

    fracionaria = (grau_decimal - grau_sexagesimal);
    fracionaria *= 60;
    minuto = fracionaria;

    fracionaria -= minuto;
    fracionaria *= 60;
    segundo =  fracionaria;

    ofstream saida("coordenadas.txt");
    saida << "Grau em notação sexagesimal (grau, minuto, segundo): " << endl;
    saida << grau_sexagesimal << endl << minuto << endl << segundo << endl;

    saida.close();
    
return 0;
}
