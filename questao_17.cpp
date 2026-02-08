#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    
    float salario_base=0, gratificacao=0, percentual=0;
    cout << "Salário base: " << endl;
    cin >> salario_base;
    cout << "Gratificação: " << endl;
    cin >> gratificacao;
    cout << "Pencentual do imposto: " << endl;
    cin >> percentual;

    float salario_bruto=0, desconto=0, salario_liquido=0;
    salario_bruto = (salario_base + gratificacao);
    desconto = ((percentual/100)*salario_bruto);
    salario_liquido = (salario_bruto - desconto);
    
    ofstream saida("holerite.txt");
    saida << fixed << setprecision(2);
    saida << "Salário final bruto: " << salario_bruto << endl;
    saida << "Valor do desconto com imposto: " << desconto << endl;
    saida << "Salário final líquido: " << salario_liquido << endl;

    saida.close();
return 0;
}
