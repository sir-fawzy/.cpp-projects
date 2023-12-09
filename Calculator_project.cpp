
#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;
// get the two inputs from the user
// Output two lists containing 3 operators 
// get the operator number from the user 
// if it is a division sign and the second input is a zero then output "You cannot divide by Zero"
// Let all these be in a loop so at the end ask if they want to perform another calculation 
// if they do the continu if not the break
int main(){
    float num_1;
    float num_2;
    float Answer;
    float Answer_1;
    float Answer_2;
    int operator_num;
    string response;
    string response2;
    while (response2!="no"){

        cout<<""<<endl;

        cout << "WELCOME TO THEE CALCULATOR"<<endl;

        cout<<""<<endl;

        cout<<"Enter your 1st Number: ";
        cin >> num_1;
        cout << "Enter your 2nd Number: ";
        cin >> num_2;

        cout<<""<<endl;
        
        cout << "----------------------------------------------------"<< endl;
        cout << "[ Addition (1), Subtraction (2), Division (3) ]\n[ Multiplication (4), Exponent (5), Squareroot (6) ]"<<endl;
        cout << "----------------------------------------------------"<< endl;

        cout<<""<<endl;

        cout<< "From the above list, select an operation number: ";
        cin >> operator_num;

        if (operator_num == 1){
            Answer = num_1 + num_2;
        } 
        else if (operator_num == 2){
            Answer = num_1 - num_2;
        } 
        else if (operator_num == 3){
            if (num_2 == 0){
                cout << "You cannot divide by 0"<<endl;
                cout<< "Do you want to run another calculation?(yes/no) ";
                cin >> response2;
                if (response2 == "no"){
                    break;
                }
            }
            else{
                Answer = num_1 / num_2;
            }
        }
        else if (operator_num == 4){
            Answer = num_1 * num_2;
        }
        else if (operator_num == 5){
            Answer = pow(num_1, num_2);
        }
        else if (operator_num == 6){
            Answer = sqrt(num_1);
        }
        cout<<""<<endl;
        if (operator_num != 6){
            cout<< "The answer to the operation of "<<num_1<<" and "<< num_2<<" is "<<Answer<<endl;
        }
        else {
            cout<< "The answer to the squareroot of "<<num_1<<" is "<<Answer_1<<endl;
            cout<< "The answer to the squareroot of "<<num_2<<" is "<<Answer_2<<endl;
        }
        cout<<""<<endl;

        cout<< "Do you want to run another calculation?(yes/no) ";
        cin >> response2;
        


    }
    return 0;
}