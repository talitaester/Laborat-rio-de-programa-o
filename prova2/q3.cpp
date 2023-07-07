#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int identificador, consultas, fig_id;
    unordered_map<int,int> colecao;
    cin >> identificador;
    vector<int> quantidade(identificador);
    vector<int> figurinhas(identificador);

    for (int i = 0; i < identificador; i++) {
        cin >> figurinhas[i];
    }
    for (int j = 0; j < identificador; j++) {
        cin >> quantidade[j];
    }
    cin >> consultas;

    for (int k = 0; k < identificador; k++) {
        colecao[figurinhas[k]] = quantidade[k];
    }
    for (int i = 0; i < consultas; i++) {
      cin >> fig_id;
      if (colecao.find(fig_id) == colecao.end()) {
        cout << "Quero" << endl;
      }else if (colecao[fig_id] == 1) {
        cout << "Apenas uma" << endl;
      }else {
        cout << "Trocar" << endl;
      }
    }
    return 0;
}
