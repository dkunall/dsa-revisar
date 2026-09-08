it contains all pattern 13-22
//cpp
#include <iostream>
#include <algorithm>
using namespace std;


// =====================================================
// 1. Number Triangle
//
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// =====================================================
void pattern1(int n) {
    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
}


// =====================================================
// 2. Increasing Alphabet Triangle
//
// A
// AB
// ABC
// ABCD
// ABCDE
// =====================================================
void pattern2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << char('A' + j);
        }
        cout << endl;
    }
}


// =====================================================
// 3. Decreasing Alphabet Triangle
//
// ABCDE
// ABCD
// ABC
// AB
// A
// =====================================================
void pattern3(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << char('A' + j);
        }
        cout << endl;
    }
}


// =====================================================
// 4. Repeated Alphabet Triangle
//
// A
// BB
// CCC
// DDDD
// EEEEE
// =====================================================
void pattern4(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char('A' + i);
        }
        cout << endl;
    }
}


// =====================================================
// 5. Palindrome Alphabet Pyramid
//
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
// =====================================================
void pattern5(int n) {
    for (int i = 0; i < n; i++) {

        // Spaces
        for (int s = 0; s < n - i - 1; s++)
            cout << " ";

        // Increasing
        for (int j = 0; j <= i; j++)
            cout << char('A' + j);

        // Decreasing
        for (int j = i - 1; j >= 0; j--)
            cout << char('A' + j);

        cout << endl;
    }
}


// =====================================================
// 6. Reverse Alphabet Triangle
//
// E
// D E
// C D E
// B C D E
// A B C D E
// =====================================================
void pattern6(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n - i - 1; j < n; j++) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}


// =====================================================
// 7. Hollow Butterfly / Hourglass Pattern
//
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// =====================================================
void pattern7(int n) {

    // Upper half
    for (int i = n; i >= 1; i--) {

        // Left stars
        for (int j = 0; j < i; j++)
            cout << "*";

        // Middle spaces
        if (i != n) {
            for (int s = 0; s < 2 * (n - i); s++)
                cout << " ";

            // Right stars
            for (int j = 0; j < i; j++)
                cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int i = 2; i <= n; i++) {

        // Left stars
        for (int j = 0; j < i; j++)
            cout << "*";

        // Middle spaces
        for (int s = 0; s < 2 * (n - i); s++)
            cout << " ";

        // Right stars
        if (i != n) {
            for (int j = 0; j < i; j++)
                cout << "*";
        }

        cout << endl;
    }
}


// =====================================================
// 8. Butterfly Pattern
//
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// =====================================================
void pattern8(int n) {

    // Upper half
    for (int i = 1; i <= n; i++) {

        // Left stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        // Middle spaces
        for (int s = 1; s <= 2 * (n - i); s++)
            cout << " ";

        // Right stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {

        // Left stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        // Middle spaces
        for (int s = 1; s <= 2 * (n - i); s++)
            cout << " ";

        // Right stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }
}


// =====================================================
// 9. Hollow Square
//
// ****
// *  *
// *  *
// ****
// =====================================================
void pattern9(int n) {

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            // Boundary
            if (i == 0 || i == n - 1 ||
                j == 0 || j == n - 1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }

        cout << endl;
    }
}


// =====================================================
// 10. Concentric Number Square
//
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
// =====================================================
void pattern10(int n) {

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {

            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;

            int layer = min(
                min(top, bottom),
                min(left, right)
            );

            cout << n - layer << " ";
        }

        cout << endl;
    }
}


int main() {

    int n = 5;

    pattern1(n);
    cout << "\n";

    pattern2(n);
    cout << "\n";

    pattern3(n);
    cout << "\n";

    pattern4(n);
    cout << "\n";

    pattern5(n);
    cout << "\n";

    pattern6(n);
    cout << "\n";

    pattern7(n);
    cout << "\n";

    pattern8(n);
    cout << "\n";

    pattern9(4);
    cout << "\n";

    pattern10(4);

    return 0;
}
