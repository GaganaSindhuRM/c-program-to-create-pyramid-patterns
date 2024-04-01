#include <iostream>
#include <conio.h>
using namespace std;

void printPyramid(int rows) {
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int numRows;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> numRows;
    printPyramid(numRows);
    return 0;
}
