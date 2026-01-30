#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = n/2+1 ; i >= 1 ; i--){
        for (int j = 1 ; j <= n-i  ; j++){
           cout << "  ";
        }

        for (int j = 1 ; j < 2*i ; j++){
            
            if (j%2!=0){
                cout << "1 ";
                }
            else {
                cout <<"0 ";
            }

            }
          cout << endl;
    }
    

    for(int i = 2 ; i <= n/2+1 ; i++){
        for (int j = 1 ; j <= n-i  ; j++){
           cout << "  ";
        }

        for (int j = 1 ; j < 2*i ; j++){
            
            if (j%2!=0){
                cout << "1 ";
                }
            else {
                cout <<"0 ";
            }

            }
          cout << endl;
    }
}

