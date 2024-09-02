#include <iostream>
#include <vector>
#include <map>

using namespace std;
typedef long long ll;

int main() {
    ll n, m , h;

    cin >> n >> m >> h;
    vector<ll> arr(n);
    vector<ll> brr(m);
    vector<ll> crr(h);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }
    for (int i = 0; i < h; i++) {
        cin >> crr[i];
    }
    map<ll, ll> sumMap;

    for (int i = 0; i < n; i++) {
        sumMap[arr[i]]++;
    }

    for (int i = 0; i < m; i++) {
        sumMap[brr[i]]++;
    }

    for (int i = 0; i < h; i++) {
        sumMap[crr[i]]++;
    }

    for (auto &pair : sumMap) {
        if (pair.second > 2) {
            cout << pair.first << " ";
        }
    }
    return 0;
}
