#include <iostream>
using namespace std;

int main(){
    int missions, xp, yoda, luke, ahsoka;
    cin >> missions >> xp;
    cin >> yoda >> luke >> ahsoka;
    xp = xp * missions;
    yoda += xp;
    luke += xp;
    ahsoka += xp;
    cout << "Yoda " << yoda << endl;
    cout << "Luke " << luke << endl;
    cout << "Ahsoka " << ahsoka << endl;
    return 0;
}