#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;

    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> frequencyMap;

    for (int i = 0; i < n; i++) {
        frequencyMap[arr[i]]++;
    }

    int maxFrequency = 0;
    int mostFrequentNumber = arr[0];

    for (auto it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
        if (it->second > maxFrequency) {
            maxFrequency = it->second;
            mostFrequentNumber = it->first;
        }
    }

    cout  << mostFrequentNumber;

    return 0;
}
