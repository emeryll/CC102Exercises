#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){

    ofstream file("original.txt");

        if (file.is_open()){
            cout << "File opened successfully" << endl;

            file << "One" << endl;
            file << "Two" << endl;
            file << "Three" << endl;
            file << "Four" << endl;
            file << "Five" << endl;

            file.close();
        } else {

            cout << "Couldn't locate file" << endl;
        }

    ifstream inFile("original.txt");

        if (!inFile.is_open()){
            cout << "Failed to read file " << endl;
        }

        vector<string>words;
        string word;

        while(getline(inFile, word)){
            words.push_back(word);
        }

          sort(words.begin(), words.end());

        inFile.close();


        ofstream sortedFile("sorted.txt");

            if (!inFile.is_open()){
            cout << "Sorting file created successfully" << endl;
            }

            for (auto &w: words){
                sortedFile << w << endl;
            }

        sortedFile.close();

return 0;
}
