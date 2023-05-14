#include <iostream>
#include <vector>
using namespace std;


int main(){
  int itensAmount, iten;
  vector<int> reverseItens,itens;
  cin >> itensAmount;
    for(int i=0 ; i<itensAmount ; i++){
      cin >> iten;
      itens.push_back(iten);
    }
  for(int t=itensAmount -1; t > -1; t--) {
    cout << itens[t] << " ";
  }
}