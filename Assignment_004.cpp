#include<iostream>
#include<fstream>
using namespace std;

int main (){

    ofstream myFile("color.txt");
    {
        if(!myFile.is_open()){
            cout << "Failed opening the file" << endl;
        }
        myFile << "Red" << endl;
        myFile << "Blue" << endl;
        myFile << "Gray" << endl;
        myFile << "Yellow" << endl;
        myFile << "Black" << endl;

        myFile.close();
    }

    ifstream inFile("color.txt");
    {
        if(!inFile.is_open()){
            cout << "Failed to read the file" << endl;
        }
    }

    ofstream copyFile("copy_color.txt");
    {
        if(!copyFile.is_open()){
            cout << "Coudln't create a copy for color.txt file" << endl;
            return -1;
        }
        string colors;
        while(getline(inFile,colors)){
            copyFile << colors << endl;
        }
    }

    inFile.close();
    copyFile.close();

    return 0;
}
