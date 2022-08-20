#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789 ";
    string password;
    int length, rNum;

    ofstream out_file;
    out_file.open("Password.txt");
    cout << "Enter the lenght of your password. " << endl;
    cin >> length;

    srand(time(NULL));

    for(int i = 1; i <= length; i++) {
        rNum = rand() % 63 + 1;

        out_file << characters[rNum];
    }

    cout << "Done\n";

    return 0;
}