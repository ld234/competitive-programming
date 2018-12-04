#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
    int arr[n];
    int cnt = 0;
	for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i > 0 && i < n ){
            if (arr[i - 1] == 0 && arr[i-2] == 1 && arr[i] == 1){
                arr[i] = 0;
                ++cnt;
            }
        }
    }
	cout << cnt << endl;
	return 0;
}