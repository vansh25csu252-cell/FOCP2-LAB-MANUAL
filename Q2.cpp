#include<iostream>
using namespace std;
#include<string>
int main(){
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - ('a' - 'A');
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + ('a' - 'A');
        }
    }

    cout << str << endl;
    return 0;
}