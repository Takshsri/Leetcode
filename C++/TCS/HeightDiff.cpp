#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

string Height(vector<int> &a) {
    if (a.empty()) return "-1";  // Edge case

    // Check for negative elements
    for (int x : a) {
        if (x < 0) return "-1";
    }

    unordered_map<int, int> freq;
    int mostFreqDiff = 0;
    int maxFreq = 0;

    // Calculate consecutive differences and track frequency
    for (int i = 1; i < a.size(); i++) {
        int diff = a[i] - a[i-1];
        freq[diff]++;
        if (freq[diff] > maxFreq) {
            maxFreq = freq[diff];
            mostFreqDiff = diff;
        }
    }

    // If all differences are unique
    if (maxFreq == 1) return "none";

    return to_string(mostFreqDiff);
}

int main() {
    vector<int> a = {2, 4, 6, 7};  // Differences: {2, 2, 1}
    cout << Height(a);
}
