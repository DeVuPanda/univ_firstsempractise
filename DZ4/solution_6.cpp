/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input_1, input_2, input_3, help_number, stop_program = "finish";
    bool sequence_decrease = true;
    cout<<"Enter number: ";
    getline(cin, input_1);
    cout<<"Enter number: ";
    getline(cin, input_2);
    if(input_1.length() > input_2.length()){
        help_number = input_2;
    }
    else if(input_1.length() <= input_2.length()){
        help_number = input_1;
        sequence_decrease = false;
    }
    while(true){
        cout<<"Enter number: ";
        getline(cin, input_3);
        if(input_3 == stop_program){
            if(sequence_decrease){
                cout<<"The sequence decreases.";
            }
            else {
                cout << "The sequence doesn't decrease.";
            }
            break;
        }
        if(help_number.length() <= input_3.length()){
            sequence_decrease = false;
        }
        help_number = input_3;
    }
    return 0;

}








*/
