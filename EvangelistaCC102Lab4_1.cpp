#include<iostream>
#include<array>
using namespace std;

int main (){

    char chs;

    do {
            system ("cls");

    int students, quiz;

    cout << "Enter number of students: ";
    cin >> students;

    cout << "Enter number of quizzes: ";
    cin >> quiz;

     int scores[students][quiz];
     int average;

        for (int i=0; i < students; i++){

        int score = 0;
        cout << "Student " << i + 1 << " scores: ";

        for (int j=0; j < quiz; j++){
            cin >> scores[i][j];
        }

    }

    cout << endl;


   cout << "Student ";
   for (int i=0; i < quiz; i++){
    cout << "Q" << i+1 << " ";
   }

   cout << " Average" << endl;

   cout << "----------------------------" << endl;

   for (int i=0; i < students; i++){

        cout << i+1 << "\t";
        double sum=0;

    for (int j=0; j < quiz; j++){

        cout << scores[i][j] << " " << " ";
        sum += scores[i][j];
    }
        double average = sum / quiz;

        cout << average << " " << endl;
   }

   cout << "Run again?(Y/N):";
   cin >> chs;

    } while (chs == 'y' || chs == 'Y');

return 0;
}
