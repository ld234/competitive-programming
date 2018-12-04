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
	int a[n];
	int cnt[MAX + 1];
    long long sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		++cnt[a[i]];
        sum += a[i];
	}
	//long long sum = accumulate(a.begin(), a.end(), 0ll);
	
	int ans[n];
    int size = 0;
	for (int i = 0; i < n; ++i) {
		sum -= a[i];
		--cnt[a[i]];
		if (sum % 2 == 0 && sum / 2 <= MAX && cnt[sum / 2] > 0) {
			ans[size++] = i + 1;
		}
		sum += a[i];
		++cnt[a[i]];
	}
	
	cout << size << endl;
	for (int i = 0; i < size; i++ ) cout << ans[i] << " ";
	cout << endl;
	
	return 0;
}