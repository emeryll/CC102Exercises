#include<iostream>
#include<array>
using namespace std;

int main (){

    char chs;

    do {
            system ("cls");

        double sales[5][4] = {0};

        int salesperson, product;
        double amount;
        char more;

        do {
            cout << "Salesperson (1-4): ";
            cin >> salesperson;

            cout << "Product (1-5): ";
            cin >> product;

            cout << "Amount: ";
            cin >> amount;

            sales[product-1][salesperson-1] += amount;

            cout << "Add more?(Y/N): ";
            cin >> more;
            cout << endl;

        } while (more == 'y' || more == 'Y');


        cout << "Product " << " ";

        for (int i=0; i < 4; i++){
            cout << "S" << i+1 << "\t";
        }

        cout << "Total " << endl;

        double TOTAL = 0;

        for (int r=0; r < 5; r++){
            double rowTotal = 0;
            cout << r+1 << "\t";

            for(int j=0; j < 4; j++){
                cout << sales[r][j] << "\t";
                rowTotal += sales[r][j];
            }
            cout << rowTotal << " " << endl;
            TOTAL += rowTotal;
        }

        cout << "Total " << "\t";

        for (int i=0; i < 4; i++){
            double colTotal = 0;

            for (int j=0; j < 5; j++){
                colTotal += sales[j][i];
            }
            cout << colTotal << "\t";
        }
        cout << TOTAL << endl;



    cout << "Run again?(Y/N): ";
    cin >> chs;
    cout << endl;

    } while (chs == 'y' || chs == 'Y');

return 0;
}
