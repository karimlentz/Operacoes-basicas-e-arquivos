#include <iostream>
#include <fstream>
#include <iomanip> //para setprecision

using namespace std;

int main(){

    ifstream entrada("valor.txt");
    float preco=0;
    entrada >> preco;

    float avista=0, parcela4x=0, parcela10x=0;

    avista = (preco - (preco*0.08));
    parcela4x = (preco/4);
    parcela10x = ((preco+(preco*0.10))/10);

    ofstream saida("opcoes.txt");
    saida << fixed << setprecision(2); //garante que os valores sejam impressos em duas casas decimais
    saida << "Pagamento à vista com 8% de desconto:" << avista << endl;
    saida << "Parcela em 4x sem juros: " << parcela4x << endl;
    saida << "Parcela em 10x com 10% de juros: " << parcela10x << endl;

    entrada.close();
    saida.close();

    return 0;
}
