#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int c = (a + b) / 2;
        int result = (c - a) + (b - c);
        cout << result << endl;
    }
    return 0;
}
