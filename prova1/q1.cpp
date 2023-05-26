#include <iostream>
using namespacestd;

int main(){
    int totalquantidade, ocupadosTotal;
    cin >> totalquantidade;
    cin >> ocupadosTotal;
    int ocupados[ocupadosTotal];
    int total[totalquantidade];
    int vaziostotal = totalquantidade - ocupadosTotal;
    for(int i = 0; i < ocupadosTotal; i++){
        cin >> ocupados[i];
    }
    for(i = 0; i < totalquantidade; i++){
        total[i] = i;
    }
    for(i = 0; i < totalquantidade; i++){
        for(int t = 0; t < ocupadosTotal; t++){
            if(total[t] == ocupados[i]){
                total.erase(i)
            }
        }
    }
    for(i = 0; i< vaziostotal; i++){
        cout << total[i] << endl;
    }
    return 0;
}