#include <iostream>
#include <vector>
using namespace std;


int main(){
    int XCoord, YCoord, destinationXCoord, destinationYCoord;
    cin >> destinationXCoord >> destinationYCoord;
    cin >> XCoord >> YCoord;
    if (XCoord == destinationXCoord){
      if (YCoord == destinationYCoord) {
        cout << "Soltar pacote" << endl;
      }
      else{
        cout << "Nao soltar pacote" << endl;
      }
    }
    else{
      cout << "Nao soltar pacote" << endl;
    }
}