#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


int main(){
    float area, bigSide, smallSide, height;
    cout << fixed << setprecision(1); 
    cin >> bigSide;
    cin >> smallSide;
    cin >> height;
    area = ((bigSide + smallSide) * height) / 2;
    cout << "A=" << area << endl;
}