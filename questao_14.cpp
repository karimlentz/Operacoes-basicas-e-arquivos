#include <iostream>
#include <fstream>

using namespace std;

int main(){

    float salario=0, cheque1=0, cheque2=0;

    ifstream entrada("entrada.txt");

    if (!entrada){
        cout << "Erro ao abrir o arquivo";
        return 1;
    }

    entrada >> salario >> cheque1 >> cheque2;

    float saldo=0;
    saldo = (salario - (cheque1+cheque2));

    cout << "SALDO FINAL: " << saldo << endl;
    
    entrada.close();
    
return 0;
}
