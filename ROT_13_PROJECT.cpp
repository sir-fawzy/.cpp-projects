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
        else {
            string2 += letter;
        }
        counter++;
    }
    
    cout<< string2<< endl;
    return 0;

}