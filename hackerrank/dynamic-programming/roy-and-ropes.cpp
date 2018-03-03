#include <iostream>

using namespace std; 
int main(){
    int t;
    cin >> t;
    
    for (int i= 0; i < t; i++){
        int n;
        cin >> n;
        int max = 0, minute = 1;
        int ups[n-1];
        int downs[n-1];
        for (int j = 0; j < n - 1; j++){
            cin >> ups[j];
        }
        for (int j = 0; j < n - 1; j++){
            cin >> downs[j];
        }
        int plus;
        for (int j = 0; j < n -1; j++){
            plus = 0;
            if (j != n-1){
                ups[j]--;
                downs[j]--;
                plus = ups[j] > downs[j] ? ups[j] : downs[j];
                if (plus < 0) plus = 0;
            }
            minute++;
            if (minute + plus > max) {
                max = minute + plus;
            }
        }
        
        cout << max << endl;
    }
    return 0;
}
