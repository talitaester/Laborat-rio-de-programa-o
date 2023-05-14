#include <iostream>
#include <vector>
using namespace std;


int main(){
    int XCoord, YCoord, destinationXCoord, destinationYCoord;;
    cin >> destinationXCoord, destinationYCoord;
    cin >> XCoord, YCoord;
    if ((XCoord == destinationXCoord) && (YCoord == destinationYCoord)){
        cout << "Soltar pacote" << endl;
    }

    return 0;
}