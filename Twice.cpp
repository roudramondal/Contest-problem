#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[20], len[21] = {0}; 

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            len[a[i]]++; 
        }

        int score = 0;
        for (int i = 1; i <= 20; i++) { 
            score += len[i] / 2; 
        }

        cout << score << endl;
    }

    return 0;
}
