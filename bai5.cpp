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

    map<ll, ll> sumMap;
    for (int i = 0; i < n; i++) {
        sumMap[fMap[arr[i]]] += arr[i];
    }

    ll maxSum = 0;
    for (auto &pair : sumMap) {
        if (pair.second > maxSum) {
            maxSum = pair.second;
        }
    }
    cout << maxSum;

}