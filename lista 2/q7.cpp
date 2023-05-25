#include <iostream>
using namespace std;

int main(){
    int phasesAmount, life, currentLife, damage;
    cin >> phasesAmount;
    int phases[phasesAmount];
    for(int t = 0; t < phasesAmount; t++){
      cin >> phases[t];
    }
    cin >> life;
    currentLife = life;
    for(int i = 0; i < phasesAmount; i++){
        if (currentLife > 0){
            damage = phases[i];
            if(damage == 1){
                currentLife = life;
            } else if(damage > currentLife){
                currentLife = 0;
                break;
            } else{
                currentLife -= damage;
            }
        } else{
            break;
        }
    }
  
    if(currentLife > 0){
        cout << "Yes, you can" << endl;
    } else{
        cout << "You Died" << endl;
    }
    return 0;
}
