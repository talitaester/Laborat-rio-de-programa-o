#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPerfectMatch(const string& block1, const string& block2) {
    for (int i = 0; i < 3; i++) {
        if (block1[i] == block2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> blocks(N);
    for (int i = 0; i < N; i++) {
        cin >> blocks[i];
    }

    vector<string> tower; 
    int score = 0; 

    for (int i = 0; i < N; i++) {
        bool perfectMatch = false;
        string currentBlock = blocks[i];

        if (!tower.empty()) {
            if (isPerfectMatch(currentBlock, tower.back())) {
                perfectMatch = true;
                tower.pop_back();
                score += 10;
            }
        }

        if (!perfectMatch) {
            if (tower.size() >= M) {
                cout << "game over" << endl;
                return 0;
            }

            tower.push_back(currentBlock);
        }
    }

    if (tower.size() == M) {
        cout << "game over" << endl;
    } else {
        cout << score << endl;
    }

    return 0;
}
