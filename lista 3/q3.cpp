#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void printPlaylist(vector<string>* playlist) {
    for (int t = 0; t < playlist->size(); t++) {
        cout << (*playlist)[t] << endl;
    }
}

int main() {
    vector<string> playlist;
    string music, word;
    int playlistSize;
    cin >> playlistSize;
    cin.ignore();

    for (int i = 0; i < playlistSize; i++) {
        getline(cin, music);
        playlist.push_back(music);
    }

    sort(playlist.begin(), playlist.end());
    printPlaylist(&playlist);

    return 0;
}
