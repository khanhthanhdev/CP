#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

   
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            count0++;
        } else if (a[i] % 3 == 1) {
            count1++;
        } else if (a[i] % 3 == 2) {
            count2++;
        }
    }
    int count = 0;

   
    count += (count0 * (count0 - 1)) / 2;

   
    count += count1 * count2;

    cout << count << endl;

    return 0;
}
