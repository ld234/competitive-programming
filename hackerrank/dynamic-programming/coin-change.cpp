#include <bits/stdc++.h>

using namespace std;

long getWays(long n, vector < long > c){
    long ways[n+1];
    for (int i = 0; i <= n; i++){
        ways[i]=0;
    }
    ways[0] = 1;
    for (int i = 0; i < c.size(); i++){
        for (int j = 1; j <= n ; j++){
            if (j >= c[i]){
                ways[j] += ways[j-c[i]];
            }
        }
    }    
    return ways[n];
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<long> c(m);
    for(int c_i = 0; c_i < m; c_i++){
       cin >> c[c_i];
    }
    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'
    long ways = getWays(n, c);
    cout << ways << endl;
    return 0;
}
