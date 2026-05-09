#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    ofstream file1("test.txt");
    file1 << "Writing in a File";
    file1.close();

    ifstream file2("test.txt");
    string text;
    while (getline(file2, text)) {
        cout << text << endl;
    }
    file2.close();
    return 0;
}