/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string first_str, second_str, third_str, help_str, stop_program = "finish";
    cout<<"Enter the string: ";
//   cin>>first_str;
    getline(cin,first_str);
    cout<<"Enter the string: ";
//   cin>>second_str;
    getline(cin, second_str);
    if (first_str.length() > second_str.length()){
        help_str = first_str;
    }
    else {
        help_str = second_str;
    }
    while(true){
        cout<<"Enter the string: ";
//        cin>>third_str;
        getline(cin, third_str);
        if (third_str == stop_program){
            cout<<"The longest string you have entered has"<<" "<<help_str.length()<<" "<<"symbols";
            break;
        }
        if (third_str.length() > help_str.length()){
            help_str = third_str;
        }

    }
    return 0;

}



*/
