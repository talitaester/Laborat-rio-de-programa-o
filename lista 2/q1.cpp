#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
    vector <string> playlist;
    string music, word;
    int playlistSize;
    cin >> playlistSize;
    std::cin.ignore();

    for (int i=0; i<playlistSize; i++){
        getline (cin, music);
        playlist.push_back(music);

    }
    std::sort(playlist.begin(), playlist.end());
    for (int t=0; t<playlistSize; t++) {
      cout << playlist[t] << endl;
    }
}
