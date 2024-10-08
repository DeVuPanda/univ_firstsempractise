/*
#include <iostream>
using namespace std;

int main() {
    int input_1, input_2, input_3, help_number, stop_program = 0;
    bool sequence_decrease = true;
    cout<<"Enter number: ";
    cin>>input_1;
    cout<<"Enter number: ";
    cin>>input_2;
    if(input_1 > input_2){
        help_number = input_2;
    }
    else if(input_1 <= input_2){
        help_number = input_1;
        sequence_decrease = false;
    }
    while(true){
        cout<<"Enter number: ";
        cin>>input_3;
        if(input_3 == stop_program){
            if(sequence_decrease){
                cout<<"The sequence decreases.";
            }
            else {
                cout << "The sequence doesn't decrease.";
            }
            break;
        }
        if(help_number <= input_3){
            sequence_decrease = false;
        }
        help_number = input_3;
    }
    return 0;

}




*/
