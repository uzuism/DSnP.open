#include <iostream>
#include <fstream>
#include <iomanip> // For setw and right
using namespace std;

int main() {
    int i = 100;
    fstream iof("ttt"); // Make sure "ttt" exists
    if (!iof) {
        cerr << "Error" << endl;
        exit(1); // Use a non-zero exit code to indicate an error
    }

    iof << hex << i << endl;
    iof.close();

    int j;
    iof.open("ttt");
    iof >> dec >> j;

    if (!iof) {
        cerr << "Error reading from the file" << endl;
        exit(1);
    }

    cout << setw(10) << right << j << endl;

    return 0;
}
