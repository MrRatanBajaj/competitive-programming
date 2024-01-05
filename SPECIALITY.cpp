#include <iostream>

using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int X, Y, Z;  // Problems set, tested, and editorialized
        cin >> X >> Y >> Z;

        // Find the category with the highest value
        string speciality;
        if (X > Y && X > Z) {
            speciality = "Setter";
        } else if (Y > X && Y > Z) {
            speciality = "Tester";
        } else {
            speciality = "Editorialist";
        }

        cout << speciality << endl;
    }

    return 0;
}
