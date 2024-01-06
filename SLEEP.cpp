#include <iostream>

using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int X;  // Hours Chef slept
        cin >> X;

        // If Chef is not sleep deprived, move to the next test case
        if (X >= 7) {
            cout << "NO" << endl;
            continue;  // Skip to the next iteration of the loop
        }

        // If the code reaches here, Chef is sleep deprived
        cout << "YES" << endl;
    }

    return 0;
}
