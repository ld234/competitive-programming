#include <bits/stdc++.h>

using namespace std;

int n, k, t;

int main() {
    bool begin = false;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        char c = 'a';
        while(n--) {
            
            if (c-'a'+ 1 == k || c == 'z'){
                cout << c;
                begin = true;
            } else {
                cout << c++;
            }
            if (begin) {
                c = 'a';
                begin = false;
            }
        }
        cout << endl;
    }
}
