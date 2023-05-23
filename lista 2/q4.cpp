#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int partsAmount, multiple, part;
    cin >> partsAmount;
    vector <int> parts(partsAmount);
    vector <int> partsM(partsAmount);
    for (int i = 0; i < partsAmount; i++) {
        cin >> parts[i];
    }
    cin >> multiple;
    for (int t=0; t<partsAmount; t++) {
       partsM[t] = parts[t]*multiple;
       cout << partsM[t] << " ";
    }
    cout << endl;

}