#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, S;
    cin >> n >> S;
    
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<ll, ll> map;

    int count = 0;
    for (ll i = 0; i < n; i++) {
        ll needed = S - a[i]; 
        if (map.find(needed) != map.end()) {
            count += map[needed];
        }
        map[a[i]] = i;
    }

    cout << count;

    return 0;
}