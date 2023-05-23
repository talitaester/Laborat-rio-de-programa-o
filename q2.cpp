#include <iostream>
using namespace std;


int main(){
    int passport;
    std:: cin >> passport;
    int resto = passport % 42;
    if(resto == 0){
        cout << "Sim" << endl;

    }else{
        cout << "Nao" << endl;
    }
}

