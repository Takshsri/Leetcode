#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> SubArray(vector<int> &a, int k) {
    unordered_map<int, int> remIndex;
    remIndex[0] = -1; // remainder 0 at index -1

    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
        int rem = sum % k;
        if (rem < 0) rem += k;

        if (remIndex.find(rem) != remIndex.end()) {
            if (i - remIndex[rem] >= 2) {
                return {remIndex[rem] + 1, i};
            }
        } else {
            remIndex[rem] = i;
        }
    }
    return {-1};
}

int main() {
    vector<int> a = {22, 2, 6, 6};
    int k = 6;
    vector<int> res = SubArray(a, k);
    for (int i : res) cout << i << " ";
}
