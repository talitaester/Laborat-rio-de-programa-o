#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){
    string stopornot = "continue"; 
    string clasS = "continue";
    int students = 0, min = 10, max = 1, gradeSum = 0, media = 0, grade = 0;
    string input = "void";
    string lastInput = "void";
    while (true){
        
        if(stopornot == "FIM"){
          break;
        }
        while(true){
            lastInput = input;
            cin >> input;
            if(input == "FIM"){
                if(lastInput == "FIM"){
                  stopornot = "FIM";
                  break;
                }
                if(students == 1){
                    media = grade;
                } 
                if(students == 2){
                    media = gradeSum / 2;
                }
                if(students > 2){
                    media = (gradeSum - min - max) / (students - 2);
                }
                cout << media << endl;
                students = 0;
                gradeSum = 0;
                min = 10;
                max = 1;
                break;
            }else{
                grade = std::stoi(input);
                if(grade < min){
                min = grade;
                }
                if(grade > max){
                max = grade;
                }
                gradeSum = gradeSum + grade;

                students ++;
            
            }   
        }
    }

}

