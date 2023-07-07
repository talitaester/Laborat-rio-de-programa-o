#include <iostream>
using namespace std;

int main(){
  int fileira, cadeira;
  int fileira_final = 0;
  int cadeira_final = 0;
  
  cin >> fileira >> cadeira;
  int mat2D[fileira][cadeira];

  for (int i = 0; i < fileira; i++){
    for (int j = 0; j < cadeira; j++){
      cin >> mat2D[i][j];
    }
  }
  for (int i = 0; i < fileira; i++){
    for (int j = 0; j < cadeira - 1; j++){
      if (mat2D[i][j] == 0 && mat2D[i][j + 1] == 0){
        fileira_final = i;
        cadeira_final = j;
        break;
      }
    }
      if (fileira_final > 0){
        break;
      }
  }
  int cadeira_final2 = cadeira_final + 2;
    cout << "Fileira: " << fileira_final +1 << endl;
    cout << "Assentos: " << cadeira_final + 1 << " e " << cadeira_final2<< endl;
    return 0;
}
