#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

bool compararPalavras(const string& palavra1, const string& palavra2) {
    if (palavra1.length() < palavra2.length()) {
        return true;
    } else if (palavra1.length() > palavra2.length()) {
        return false;
    } else {
        return palavra1 < palavra2;
    }
}
string traduzirParaFormiguês(const string& frase) {
    stringstream ss(frase);
    string palavra;
    vector<string> palavras;

    while (ss >> palavra) {
        palavras.push_back(palavra);
    }

    sort(palavras.begin(), palavras.end(), compararPalavras);

    stringstream fraseTraduzida;
    for (const string& p : palavras) {
        fraseTraduzida << p << " ";
    }

    return fraseTraduzida.str();
}

int main() {
    string frase;
    getline(cin, frase);

    string fraseTraduzida = traduzirParaFormiguês(frase);
    cout << fraseTraduzida << endl;

    return 0;
}
