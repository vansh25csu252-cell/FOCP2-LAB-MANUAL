#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int freq[1001] = {0};   // initialize

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
    }

    int maxCount = 0, answer = 0;

    for (int i = 0; i < 1001; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            cout << "maxCount: " << maxCount << endl;
        }
    }

    for (int i = 0; i < 1001; i++) {
        if (freq[i] == maxCount) {
            answer++;
        }
    }

    cout << answer;
    return 0;
}