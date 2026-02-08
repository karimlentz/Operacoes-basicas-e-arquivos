#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

//1 litro para cada 3 metros quadrados, lata de 18 litros

int main(){

    int area=0, qntd_latas;
    float valor_galao=0, valor_pago;


    ifstream entrada("entrada.txt");
    entrada >> area >> valor_galao;

    qntd_latas = ((area*3)/18);
    valor_pago = (qntd_latas*valor_galao);

    ofstream saida("saida.txt");
    saida << "Quantidade de latas: " << ceil(qntd_latas) << endl;
    saida << fixed << setprecision(2);
    saida << "Valor a ser pago pela tinta: " << valor_pago;
    
    entrada.close();
    saida.close();

return 0;
}
