#include<iostream>
#include<vector>

using namespace std;

string integer_addition(string i1, string i2) {
    int m = i1.size(), n = i2.size();
    int mem = 0;
    string result = "";
    while (m && n) {
        m--; n--;
        int x = i1[m] - '0' + i2[n] - '0' + mem;
        if (x >= 10) mem = x / 10;
        else mem = 0;
        result = to_string(x%10) + result;
    }
    
    while (m > 0) {
        int x = i1[m-1]-'0' + mem;
        result = to_string(x%10) + result;
        if (x >= 10) mem = x / 10;
        else mem = 0;
        m--;
    }

    while (n > 0) {
        int x = i2[n-1]-'0' + mem;
        result = to_string(x%10) + result;
        if (x >= 10) mem = x / 10;
        else mem = 0;
        n--;
    }
    return mem > 0 ? to_string(mem) + result : result;
}

string get_min(string &left, string &right) {
    string min_str;
    if (right.size() < left.size()){
        min_str = right;
    } else if (right.size() > left.size()){
        min_str = left;
    } else {
        min_str = left.compare(right) < 0 ? left : right;
    }
    return min_str;
}

int main(){
    int l;
    cin >> l;
    string n, m;
    cin >> n;

    int mid = (l-1)/2;
    vector<int> cases;
    if (l % 2 == 0) {
        cases.push_back(mid);
        int i = mid, j = mid + 1;
    } else {
        cases.push_back(mid-1);
        cases.push_back(mid);
    }
    string result = "";
    string min_str = "";

    for (int c = 0; c < cases.size(); c++){
        int i = cases[c];
        string left, right;
        while (n[i+1] == '0') {
            i--;
        }
        left = integer_addition(n.substr(0,i+1),n.substr(i+1));
        i = cases[c];
        while (n[i+1] == '0') {
            i++;
        }
        right = integer_addition(n.substr(0,i+1),n.substr(i+1));
        if (min_str != "")
            min_str = get_min(min_str, get_min(left,right));
        else {
            min_str = get_min(left,right);
        }
        
    }
    cout << min_str << endl;
    
    return 0;
}
