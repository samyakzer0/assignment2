#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || j == 1 || i == n || j == n) {
                cout << "1 ";
            }
           
            else if (i == n/2+1 && j == n/2+1) {
                cout << i+j << " "; 
            }

            else {
                if (i == 2) {
                    cout << j << " "; 
                } 
                else if (i == 4) {
                    cout << (n - j + 1) << " ";
                } 
                else if (i == 3) {
                    cout << "3 ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}