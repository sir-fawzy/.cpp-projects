// Olayiwola Ajibode 
// ROT13 project
// Cs 102 
// Jada Gray(instructor)
#include <iostream>
#include <string>
using namespace std;
/*
create to strings 
the user inputs the first string, the second string starts off as an empty string
loop through each element of the inputted string change the necessary 
add that change to the second string 

if it is a space then add it that wat
increae the counter by 1
*/

int main(){
    int counter = 0;
    string string1;
    string string2 = "";
    cout << "Enter Word to be encrypted: ";
    getline(cin, string1);
    
    while (counter < string1.length() ){
    
        char letter;
        letter = string1.at(counter);

        if (letter == 'A'){
            string2 = string2 + "N";
        }
        else if (letter == 'B'){
            string2 += "O";
        }
        else if (letter == 'C'){
            string2 += "P";
        }
        else if (letter == 'D'){
            string2 = string2 + "Q";
        }
        else if (letter == 'E'){
            string2 += "R";
        }
        else if (letter == 'F'){
            string2 += "S";
        }
        else if (letter == 'G'){
            string2 += "T";
        }
        else if (letter == 'H'){
            string2 += "U";
        }
        else if (letter == 'I'){
            string2 += "V";
        }
        else if (letter == 'J'){
            string2 = string2 + "W";
        }
        else if (letter == 'K'){
            string2 += "X";
        }
        else if (letter == 'L'){
            string2 += "Y";
        }
        else if (letter == 'M'){
            string2 += "Z";
        }
        else if (letter == 'N'){
            string2 += "A";
        }
        else if (letter == 'O'){
            string2 += "B";
        }
        else if (letter == 'P'){
            string2 += "C";
        }
        else if (letter == 'Q'){
            string2 += "D";
        }
        else if (letter == 'R'){
            string2 += "E";
        }
        else if (letter == 'S'){
            string2 += "F";
        }
        else if (letter == 'T'){
            string2 += "G";
        }
        else if (letter == 'U'){
            string2 += "H";
        }
        else if (letter == 'V'){
            string2 += "I";
        }
        else if (letter == 'W'){
            string2 += "J";
        }
        else if (letter == 'X'){
            string2 += "K";
        }
        else if (letter == 'Y'){
            string2 += "L";
        }
        else if (letter == 'Z'){
            string2 += "M";
        }
        else {
            string2 += letter;
        }
        counter++;
    }
    
    cout<< string2<< endl;
    return 0;

}