#include<iostream>
#include<iomanip>
using namespace std;

void input(struct book b[], int n);
void display(struct book b[], int n);

struct book {
    string barcode;
    string title;
    int year;
    int rating;
};


int main (){

    char chs;

    do {
            system("cls");
    int n;

    cout << "How many books?: ";
    cin >> n;

    book b[n];

    input(b, n);
    display(b, n);

    cout << "Repeat? (Y/N): ";
    cin >> chs;

    } while (chs == 'y' || chs == 'Y');

return 0;
}

void input (struct book b[], int n){

    for (int i=0; i < n; i++){
        cout << "Book " << i+1 << ": " << endl;
        bool duplicate;

        do {
            duplicate = false;
        cout << "Enter barcode: ";
        cin >> b[i].barcode;

        for (int j=0; j < i; j++){
            if (b[i].barcode == b[j].barcode){
                cout << "Barcode exists!" << endl;
                duplicate = true;
                break;
            }
        }
        }while (duplicate);

        cin.ignore();
        cout << "Enter title: ";
        getline(cin, b[i].title);

        cout << "Enter year: ";
        cin >> b[i].year;

        do {
        cout << "Enter rating (0-5): ";
        cin >> b[i].rating;

        if (b[i].rating > 6){
        cout << "Invalid rating" << endl;
        }
        } while (b[i].rating > 6);

    }
}

void display (struct book b[], int n){

     cout << left << setw(15) << "Barcode" << setw(25) << "Title" << setw(10) << "Year" << setw(10) << "Rating" << endl;

    for (int i=0; i < n; i++){

        string category = "";

        if (b[i].rating == 5){
            category = "Excellent";
        } else if (b[i].rating == 4){
           category = "Very Good";
        } else if (b[i].rating == 3){
           category = "Good";
        } else if (b[i].rating == 2){
            category = "Fair";
        } else if (b[i].rating == 1){
            category = "Poor";
        } else {
           category = "No Rating";
        }

       cout << left << setw(15) << b[i].barcode << setw(25) << b[i].title << setw(10) << b[i].year << setw(10) << b[i].rating << category << endl;
    }
}




