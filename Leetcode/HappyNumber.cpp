#include <iostream>
using namespace std;

int square(int a) { 
    int sum = 0;
    while (a > 0) {
        int d = a % 10;
        sum += d * d;
        a /= 10;
    }
    return sum;
}

bool Happy(int a) {
    int slow = a, fast = a;
    do {
        slow = square(slow);
        fast = square(square(fast));
    } while (slow != fast);
    
    return slow == 1;
}

int main() {
    int a = 12;
    cout << (Happy(a) ? "True" : "False") << endl; 
}
