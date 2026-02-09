#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

    double caixa=13.30, trufa=2.50, jujuba=1.50, drops=1.00, bala=0.25;
    double dinheiro=0, gasto=0;

    cout << "Quanto de dinheiro você possui? " << endl;
    cin >> dinheiro;

    int qntd_caixa=0, qntd_trufa=0, qntd_jujuba=0, qntd_drops=0, qntd_bala=0;
    
    if(dinheiro >= caixa){
        qntd_caixa = (dinheiro/caixa);
        gasto += (qntd_caixa *caixa);
        dinheiro -= (qntd_caixa *caixa);
    }
    if (dinheiro >= trufa){
        qntd_trufa = (dinheiro/trufa);
        gasto += (qntd_trufa * trufa);
        dinheiro -= (qntd_trufa * trufa);
    }
    if (dinheiro >= jujuba){
        qntd_jujuba = (dinheiro/jujuba);
        gasto += (qntd_jujuba * jujuba);
        dinheiro -= (qntd_jujuba * jujuba);
    }
    if (dinheiro >= drops){
        qntd_drops = (dinheiro/drops);
        gasto += (qntd_drops * drops);
        dinheiro -= (qntd_drops * drops);
    }
    if (dinheiro >= bala){
        qntd_bala = (dinheiro/bala);
        gasto += (qntd_bala * bala);
        dinheiro -= (qntd_bala * bala);
    }
    
    ofstream saida("doces.txt");
    saida << fixed << setprecision(2);
    saida << "Valor gasto: " << gasto << endl;
    saida << "Caixas: " << qntd_caixa << endl << "Trufas: " << qntd_trufa << endl;
    saida << "Jujubas: " << qntd_jujuba << endl << "Drops: " << qntd_drops << endl;
    saida << "Balas: " << qntd_bala << endl << "Valor restante: " << dinheiro << endl;

    saida.close();

return 0;
}
