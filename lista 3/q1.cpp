#include <iostream>
#include <cmath>

bool isPrime(int* num) {
    if (*num <= 1) {
        return false;
    }
    
    for (int i = 2; i <= sqrt(*num); i++) {
        if (*num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int chairs;
    
    while (true) {
        std::cin >> chairs;
        
        if (chairs == 0) {
            break;
        }
        
        if (isPrime(&chairs)) {
            std::cout << "O numero de cadeiras eh primo!" << std::endl;
        } else {
            std::cout << "O numero de cadeiras nao eh primo!" << std::endl;
        }
    }
    
    return 0;
}
