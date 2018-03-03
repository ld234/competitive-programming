#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t,n;
    /* Choose the larger between two cases for each i from 2 to n:
     * The solution to i - 1
     * The solution to i - 2 + the point of the current judge 
     */
    cin >> t;
    for (int j = 1; j <= t; j++){
        cout << "Case " << j << ": ";
        cin >> n;
        unsigned long long maxPoints[n+1];
        unsigned long long points[n+1];
        maxPoints[0]=0;
        cin >> points[1];
        maxPoints[1] = points[1];
        for (int i = 2; i <= n; i++){
            maxPoints[i] = 0;
            cin >> points[i];
            maxPoints[i] = max(maxPoints[i-1], maxPoints[i-2] + points[i] );
        }
        
        cout << maxPoints[n] << endl;
    }
    return 0;
}
