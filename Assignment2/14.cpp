#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        
        for (int j = n; j >= n - i; j--) {
            cout << j << "\t";
        }

    
        for (int j = 1; j < 2 * (n - i); j++) {
            cout << "\t";
        }

        if (i == n) {
           
            for (int j = 1; j <= n; j++) {
                cout << j << "\t";
            }
            
        } else {
        
            for (int j = n - i; j <= n; j++) {
                cout << j << "\t";
            }
        }
        cout << endl;
    }

 
    for (int i = n - 1; i >= 0; i--) {
        
      
        for (int j = n; j >= n - i; j--) {
            cout << j << "\t";
        }

       
        for (int j = 1; j < 2 * (n - i); j++) {
            cout << "\t";
        }


        for (int j = n - i; j <= n; j++) {
            cout << j << "\t";
        }
        cout << endl;
    }

    return 0;
}