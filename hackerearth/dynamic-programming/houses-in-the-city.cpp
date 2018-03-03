#include <iostream>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin >> t;
    while (t--){
        cin >> n;
        long long a[n+1];
        int temp;
        a[0] = 0;
        for (int i = 1; i <= n; i++){
            cin >> temp;
            a[i] = a[i-1]+temp;
        }
        int q;
        cin >> q;
        int l,r;
        while (q--){
            cin >> l >> r;
            cout << a[r] - a[l-1]<<endl;
        }
    }
    return 0;
}
