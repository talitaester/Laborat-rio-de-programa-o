#include <iostream>
#include <vector>

using namespace std;

int main(){
  int corridas, cavalos, encontrar_cavalo;
  cin >> corridas;
  
  for (int i = 0; i < corridas; i++){
    cin >> cavalos;
    int cavalo_posicao;
    vector<int> cavalos_id(cavalos);
    for (int j = 0; j < cavalos; j++){
      cin >> cavalos_id[j];
    }
    cin >> encontrar_cavalo;
    for (int k = 0; k < cavalos; k++){
      if (cavalos_id[k] == encontrar_cavalo){
        cavalo_posicao = k;
        cout << cavalo_posicao << endl;
        break;
      }
    }
  }
  return 0;
}
