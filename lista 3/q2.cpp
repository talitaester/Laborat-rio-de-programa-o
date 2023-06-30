#include <iostream>

void calcularPorcentagem(int* utilizados, int* acertos, int N) {
    for (int i = 0; i < N; i++) {
        if (utilizados[i] == 0) {
            std::cout << "0 ";
        } else {
            int porcentagem = (acertos[i] * 100) / utilizados[i];
            std::cout << porcentagem << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int N;
    std::cin >> N;

    int utilizados[N];
    int acertos[N];

    for (int i = 0; i < N; i++) {
        std::cin >> utilizados[i];
    }

    for (int i = 0; i < N; i++) {
        std::cin >> acertos[i];
    }

    calcularPorcentagem(utilizados, acertos, N);

    return 0;
}
