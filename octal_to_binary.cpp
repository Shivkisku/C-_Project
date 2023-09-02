#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string octalToBinary(int octal) {
    string binary = "";
    int octalDigit = 0;
    int binaryDigits[3] = {0};

    while (octal > 0) {
        octalDigit = octal % 10;
        int index = 2;

        while (octalDigit > 0) {
            binaryDigits[index] = octalDigit % 2;
            octalDigit /= 2;
            index--;
        }

        for (int i = 0; i < 3; i++) {
            binary += to_string(binaryDigits[i]);
        }

        octal /= 10;
    }

    // Remove leading zeros
    while (binary.length() > 1 && binary[0] == '0') {
        binary = binary.substr(1);
    }

    return binary;
}

int main() {
    int octal;
    cout << "Enter an octal number: ";
    cin >> octal;

    string binary = octalToBinary(octal);
    cout << "Binary equivalent: " << binary << endl;

    return 0;
}
