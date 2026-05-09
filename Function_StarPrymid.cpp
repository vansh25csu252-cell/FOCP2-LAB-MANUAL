#include "iostream"
using namespace std;

int main(){
    int a,b;
    cout << "enter two numbers";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw "Division by zero is not allowed";
        }
        cout << "Result = " << a / b << endl;
    } catch (char* msg) {
        cout << "Exception caught: " << msg << endl;
    }
    cout << "End of program" << endl;
    
    return 0;   
}