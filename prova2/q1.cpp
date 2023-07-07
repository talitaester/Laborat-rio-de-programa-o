#include <iostream>
#include <vector>

using namespace std;

int buscaBinaria(const vector<string>& vetor, const string& valorProcurado) {
  int esquerda = 0;
  int direita = vetor.size() - 1;

  while (esquerda <= direita) {
    int meio = esquerda + (direita - esquerda) / 2;
    if (vetor[meio] == valorProcurado)
      return meio;
    if (vetor[meio] < valorProcurado)
      esquerda = meio + 1;
    else
      direita = meio - 1;
    }
    return -1;
}
int main() {
    int quant;
    cin >> quant;

    vector<string> catalogo(quant);
    for (int i = 0; i < quant; i++){
      cin >> catalogo[i];
    }
    int busca;
    cin >> busca;
    vector<string> prabusca(busca);
    for (int j = 0; j < busca; j++){
      cin >> prabusca[j];
    }
    for (int j = 0; j < busca; j++) {
      int indice = buscaBinaria(catalogo, prabusca[j]);
      cout << prabusca[j];
      if (indice != -1)
        cout << " vive!";
      else
        cout << " foi extinto :(";
      cout << endl;
    }
    return 0;
}
