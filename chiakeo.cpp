#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map<int, int> fMap;
    for (int i = 0; i < n; i++) {
        fMap[arr[i]]++;
    }

    ll sum = 0;
    sum = accumulate(fMap.begin(), fMap.end(), 0, [](ll sum, pair<int, int> p) {
        return sum + p.second;
    });
    
    if (sum % 2 != 0) {
        cout << "NO";
    } else cout << "YES";

}