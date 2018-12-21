#include <bits/stdc++.h>

using namespace std;

int n;
vector <int > v;

int main() {
    bool begin = false;
    cin >> n;
    int x;
    int temp = n;
    while (temp --) {
        cin >> x;
        v.push_back(x);
    }
	
    sort(v.begin(), v.end());
    int result = 0;
    for (int i = 0; i < n ; i+=2 ){
        result += v[i+1] - v[i]; 
    }

    cout << result << endl;
}