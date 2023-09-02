#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int binaryToOctal(string binary) {
    int binaryLength = binary.length();
    int octal = 0, octalDigit = 0, binaryDigit = 0;
    int power = 0;

    for (int i = binaryLength - 1; i >= 0; i--) {
        binaryDigit = binary[i] - '0';
        octalDigit += binaryDigit * pow(2, power);
        power++;

        if (power == 3 || i == 0) {
            octal = octalDigit * pow(10, (power - 1) / 3) + octal;
            octalDigit = 0;
            power = 0;
        }
    }

    return octal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int octal = binaryToOctal(binary);
    cout << "Octal equivalent: " << octal << endl;

    return 0;
}
