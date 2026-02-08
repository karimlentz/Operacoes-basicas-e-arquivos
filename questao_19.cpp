#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int milissegundos=0;
    ifstream entrada("tempo.txt");
    entrada >> milissegundos;

    int horas=0, minutos=0;
    float segundos=0;
    
    //1h tem 3 600 000 milissegundos, 1 minuto tem 60 000 milissegundos, 1 segundo tem 1 000 milissegundos;
    milissegundos = (milissegundos%3600000);
    
    minutos = (milissegundos/60000);
    milissegundos = (milissegundos%60000);

    segundos = (milissegundos/1000.00);
    milissegundos = (milissegundos%1000);

    ofstream saida("horario.txt");
    saida << horas << ":" << minutos << ":" << segundos << endl;

    entrada.close();
    saida.close();
    
return 0;
}
