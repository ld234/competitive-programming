#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5;
int n, k;
vector<int> cnt(MAX + 1, 0);
vector<int> t;

bool can(int times) {
	t.clear();
	for(int i = 0; i < MAX + 1; i++){
		int need = min(cnt[i] / times, k - int(t.size()));
		for (int j = 0; j < need; ++j) {
			t.push_back(i);
		}
	}
	return t.size() == k;
}

int main() {
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		++cnt[a[i]];
	}
	int l = 0, r = n;
	while(r - l > 1){
		int mid = (l + r) >> 1;
		if (can(mid)) {
			l = mid;
		} else {
			r = mid;
		}
	}

	if (!can(r)) can(l);
	
	for (auto it : t) 
	    cout << it << " ";
	cout << endl;
	return 0;
}
