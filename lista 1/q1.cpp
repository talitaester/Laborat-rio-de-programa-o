
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int height, i, j, t, dif;
    string pyramid= "#";
    string space = ">";
    cin >> height;
    dif = height -1;
    
    for (int i = 0; i < height; i++) {
        string out = "";
        for (int j = 0; j < dif; j++) {
          out += space;
        }
        for (int t = 0; t <= i; t++) {
          out += pyramid;
        }
        cout << out << endl;
        dif --;
    }
    return 0;
}