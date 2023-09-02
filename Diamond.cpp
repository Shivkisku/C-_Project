#include <iostream>

using namespace std;

int main() {
    int n, space;
    
    cout << "Enter the number of rows for the diamond: ";
    cin >> n;
    
    space = n - 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        space--;
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    
    space = 1;
    
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        space++;
        for (int k = 1; k <= 2 * (n - i) - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
