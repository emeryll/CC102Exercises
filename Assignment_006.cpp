#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


int countPrimes(string filename) {
    ifstream file(filename);
    int num, count = 0;

    if (file.is_open()) {
        while (file >> num) {
            if (isPrime(num)) {
                count++;
            }
        }
        file.close();
    } else {
        cout << "Error opening file." << endl;
    }

    return count;
}

int main() {
    ofstream outFile("NUMS.TXT");

    int n, value;

    cout << "How many numbers do you want to enter? ";
    cin >> n;

    if (outFile.is_open()) {
        for (int i = 0; i < n; i++) {
            cout << "Enter number " << i + 1 << ": ";
            cin >> value;
            outFile << value << endl;
        }
        outFile.close();
    } else {
        cout << "Error creating file." << endl;
        return 1;
    }

    int result = countPrimes("NUMS.TXT");

    cout << "\nNumber of prime numbers: " << result << endl;

    return 0;
}
