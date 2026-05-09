#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> letterCombinations(string digits) {
    if (digits.empty()) return {};
    vector<string> result = {""};
    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    for (char d : digits) {
        vector<string> newResult;
        for (string prefix : result) {
            for (char c : mapping[d - '0']) {
                newResult.push_back(prefix + c);
            }
        }
        result = std::move(newResult);
    }
    return result;
}

int main(){
    string str;
    cin >> str;
    letterCombinations(str);
    return 0;
}