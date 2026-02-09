#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double avista=0.0;
    int prestacoes=0;

    ifstream entrada("venda.txt");
    entrada >> avista >> prestacoes;

    double total_antes=0.0, prestacao_antes=0.0, prestacao_atual=0.0, total_final=0.0;

    total_antes = avista * 1.10;
    prestacao_antes = ceil((total_antes / prestacoes) * 100) / 100;

    prestacao_atual = prestacao_antes * 0.90;
    total_final = prestacao_atual * prestacoes;

    ofstream saida("cliente.txt");
    saida << fixed << setprecision(2);

    saida << total_antes << endl << prestacao_antes << endl << prestacao_atual << endl << total_final << endl;

    entrada.close();
    saida.close();

    return 0;
}
