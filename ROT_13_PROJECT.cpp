// Olayiwola Ajibode 
// ROT13 project
// Cs 102 
// Jada Gray(instructor)
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
/*
create to strings 
the user inputs the first string, the second string starts off as an empty string
loop through each element of the inputted string change the necessary 
add that change to the second string 

if it is a space then add it that wat
increae the counter by 1
*/




// read from a file 
int main(){
    string filename;
    cout << "Enter the name of the file to read from: ";
    cin >> filename;

    filename += ".txt";



    ofstream MyWriterFile;
    MyWriterFile.open("rot_out.rot13");
    ifstream MyReaderFile;
    MyReaderFile.open(filename);
    int counter = 0;
    string string1;
    
    
    
    
    while (getline(MyReaderFile, string1)){
        counter = 0;
        while (counter < string1.length())
        {   char letter;
            letter = string1.at(counter);

            if (letter == 'A'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "N"<<endl;
                else
                    MyWriterFile<< "N";
            }
            else if (letter == 'B'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "O"<<endl;
                else
                    MyWriterFile<< "O";
            }
            else if (letter == 'C'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "P"<<endl;
                else
                    MyWriterFile<< "P";
                
            }
            else if (letter == 'D'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "Q"<<endl;
                else
                    MyWriterFile<< "Q";
            }
            else if (letter == 'E'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "R"<<endl;
                else
                    MyWriterFile<< "R";
            }
            else if (letter == 'F'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "S"<<endl;
                else
                    MyWriterFile<< "S";
            }
            else if (letter == 'G'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "T"<<endl;
                else
                    MyWriterFile<< "T";
            }
            else if (letter == 'H'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "U"<<endl;
                else
                    MyWriterFile<< "U";
            }
            else if (letter == 'I'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "V"<<endl;
                else
                    MyWriterFile<< "V";
            }
            else if (letter == 'J'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "W"<<endl;
                else
                    MyWriterFile<< "W";
            }
            else if (letter == 'K'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "X"<<endl;
                else
                    MyWriterFile<< "X";
            }
            else if (letter == 'L'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "Y"<<endl;
                else
                    MyWriterFile<< "Y";
            }
            else if (letter == 'M'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "Z"<<endl;
                else
                    MyWriterFile<< "Z";
            }
            else if (letter == 'N'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "A"<<endl;
                else
                    MyWriterFile<< "A";
            }
            else if (letter == 'O'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "B"<<endl;
                else
                    MyWriterFile<< "B";
            }
            else if (letter == 'P'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "C"<<endl;
                else
                    MyWriterFile<< "C";
            }
            else if (letter == 'Q'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "D"<<endl;
                else
                    MyWriterFile<< "D";
            }
            else if (letter == 'R'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "E"<<endl;
                else
                    MyWriterFile<< "E";
            }
            else if (letter == 'S'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "F"<<endl;
                else
                    MyWriterFile<< "F";
            }
            else if (letter == 'T'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "G"<<endl;
                else
                    MyWriterFile<< "G";
            }
            else if (letter == 'U'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "H"<<endl;
                else
                    MyWriterFile<< "H";
            }
            else if (letter == 'V'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "I"<<endl;
                else
                    MyWriterFile<< "I";
            }
            else if (letter == 'W'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "J"<<endl;
                else
                    MyWriterFile<< "J";
            }
            else if (letter == 'X'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "K"<<endl;
                else
                    MyWriterFile<< "K";
            }
            else if (letter == 'Y'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "L"<<endl;
                else
                    MyWriterFile<< "L";
            }
            else if (letter == 'Z'){
                if (counter == string1.length()-1)
                    MyWriterFile<< "M"<<endl;
                else
                    MyWriterFile<< "M";
            }
            else {
                if (counter == string1.length()-1)
                    MyWriterFile<< letter <<endl;
                else
                    MyWriterFile<< letter;
            }
            counter++;
        }
        
    }
    MyReaderFile.close();
    MyWriterFile.close();
    
    return 0;

}