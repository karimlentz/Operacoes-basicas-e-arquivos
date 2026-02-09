#include <iostream>
#include <fstream>

using namespace std;

// 100 000 <= N <= 999 999

int main(){

    int N=0;
    ifstream entrada("entrada.txt");
    entrada >> N;

    int M=0;
    int nalg1=0, nalg2=0, nalg3=0, nalg4=0, nalg5=0, nalg6;

    nalg1= (N/100000);
    nalg2= ((N%100000)/10000);
    nalg3= ((N%10000)/1000);
    nalg4= ((N%1000)/100);
    nalg5= ((N%100)/10);
    nalg6= (N%10);

    int malg1=0, malg2=0, malg3=0, malg4=0, malg5=0;

    malg1= (nalg1/nalg2);
    malg2= (nalg2/nalg3);
    malg3= (nalg3/nalg4);
    malg4= (nalg4/nalg5);
    malg5= (nalg5/nalg6);

    M= ((malg1*10000)+(malg2*1000)+(malg3*100)+(malg4*10)+malg5);

    ofstream saida("saida.txt");
    saida << M << endl;

    entrada.close();
    saida.close();

return 0;
}
