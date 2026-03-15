#include<iostream>
using namespace std;

void returnGrades(int(*arr)[50], int students, int subjects);

int main (){

    int students, subjects;

    cout << "Enter number of students: ";
    cin >> students;

    cout << "Enter number of subjects: ";
    cin >> subjects;
    cout << endl;

    int arr[50][50];

    for (int i=0; i < students; i++){
            cout << "Student " << i+1 << endl;
        for (int j=0; j < subjects; j++){
            cout << "Subject " << j+1 << " : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << endl;

    returnGrades(arr, students, subjects);

return 0;
}

void returnGrades(int(*arr)[50], int students, int subjects){

    int highest = arr[0][0];

    for (int i=0; i < students; i++){
        cout << "Student " << i+1 << "\t";
        int sum = 0;
        for (int j=0; j < subjects; j++){
            cout << arr[i][j] << "\t";
            sum += arr[i][j];

            if (arr[i][j] > highest){
                highest = arr[i][j];
            }
        }
        double average = (double)sum/subjects;
        cout << "Average: " << average << endl;
    }
    cout << "\nHighest grade: " << highest << endl;
}


