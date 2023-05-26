#include <iostream>
using namespace std;

int main() {
    long long n1, n2;
    cin >> n1 >> n2;
    long long total = n2;

    for (int i = 0; i < n1; i++) {
        total = total * 2;
    }

    cout << (total - n2) << endl;

    return 0;
}