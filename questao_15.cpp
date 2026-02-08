#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int valor_cliente=0, valor_compra=0, troco=0;
    int qntd_20=0, qntd_10=0, qntd_5=0, qntd_2=0, qntd_1=0;
    
    ifstream entrada("entrada.txt");
    entrada >> valor_cliente >> valor_compra;

    troco = (valor_cliente-valor_compra);

    while(troco>0){
        if (troco >= 20){
            qntd_20 = troco/20;
            troco = (troco%20);
        }else if((troco < 20) && (troco>=10)){
            qntd_10 = (troco/10);
            troco = (troco%10);
        }else if((troco < 10) && (troco>=5)){
            qntd_5 = (troco/5);
            troco = (troco%5);
        }else if((troco < 5) && (troco>=2)){
            qntd_2 = (troco/2);
            troco = (troco%2);
        }else if((troco < 2) && (troco>=1)){
            qntd_1 = (troco/1);
            troco = (troco%1);
        }
    }
    
    ofstream saida("saida.txt");
    saida << "Notas de 20: " << qntd_20 << endl;
    saida << "Notas de 10: " << qntd_10 << endl;
    saida << "Notas de 5: " << qntd_5 << endl;
    saida << "Notas de 2: " << qntd_2 << endl;
    saida << "Notas de 1: " << qntd_1 << endl;

    entrada.close();
    saida.close();

    return 0;
}
