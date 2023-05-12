#include <iostream>
#include <vector>
using namespace std;


int main(){
  int i=0, age;
  vector<int> ages;
  for (0; i < 10; i++) {
    cout << "Digite a idade do pesquisador da vez" << endl;
    cin >> age;
    ages.push_back(age);    
  }
  int t=0;
  for (int t = 0; t < ages.size(); t++) {
    cout << ages[t] << " ";
    }
    cout << endl;
}
