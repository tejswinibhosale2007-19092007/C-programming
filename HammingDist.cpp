#include <iostream>
#include <string>
using namespace std;

int main() {
    string data;
    cout << "Enter data bits: ";
    cin >> data;

    int m = data.length();
    int r = 0;

    // Find number of parity bits
    while ((1 << r) < (m + r + 1))
        r++;

    int n = m + r;
    string code(n + 1, '0');

    // Put data bits in non-parity positions
    int j = 0;
    for (int i = 1; i <= n; i++) {
        if ((i & (i - 1)) != 0) {
            code[i] = data[j++];
        }
    }

    // Calculate parity bits
    for (int p = 0; p < r; p++) {
        int pos = 1 << p;
        int parity = 0;

        for (int i = 1; i <= n; i++) {
            if ((i & pos) != 0)
                parity ^= (code[i] - '0');
        }

        code[pos] = parity + '0';
    }

    // Print Hamming code
    cout << "Hamming Code: ";
    for (int i = n; i >= 1; i--)
        cout << code[i];

    return 0;
}
