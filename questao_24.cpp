#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

    float preco_fabrica=0, percent_lucro=0, percent_imposto=0;
    ifstream entrada("dados.txt");
    entrada >> preco_fabrica >> percent_lucro >> percent_imposto;

    float valor_lucro=0, valor_imposto=0, preco_final=0;

    valor_lucro = (preco_fabrica * percent_lucro);
    valor_imposto = (preco_fabrica * percent_imposto);
    preco_final = (preco_fabrica + valor_lucro + valor_imposto);

    ofstream saida("custo.txt");
    saida << fixed << setprecision(2);
    saida << valor_lucro << endl << valor_imposto << endl << preco_final << endl;

    entrada.close();
    saida.close();

return 0;
}
