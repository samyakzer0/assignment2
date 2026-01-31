#include <iostream>
using namespace std;


bool isPrime(int n) {
        if (n<=1){ return false;}
        for (int i = 2; i*i <= n; i++){
            if (n%i==0) return false;
        }
        return true;
    }

int main(){
    int m;
    cin>>m;

    int n = m/2+1;
    
    int prime = 2;

    for(int i = n ; i >= 1 ; i--){
        for (int j = 1 ; j <= m-i  ; j++){
           cout << "  ";
        }
        if(i==n-1){
        for (int j = 1 ; j <= 2*i-2 ; j++){
            while (!isPrime(prime)){
                prime++;
            }
            cout << prime << " ";
            prime++;
        }
    }
        else{
        for (int j = 1 ; j <= 2*i-1 ; j++){
            while (!isPrime(prime)){
                prime++;
            }
            cout << prime << " ";
            prime++;
        }
    }
        cout << endl;
    }
    
    for(int i = 2 ; i <= n ; i++){
        for (int j = 1 ; j <= m-i  ; j++){
           cout << "  ";
        }
        if(i==n-1){
        for (int j = 1 ; j <= 2*i-2 ; j++){
            while (!isPrime(prime)){
                prime++;
            }
            cout << prime << " ";
            prime++;
        }
    }
        else{
        for (int j = 1 ; j <= 2*i-1 ; j++){
            while (!isPrime(prime)){
                prime++;
            }
            cout << prime << " ";
            prime++;
        }
    }
        cout << endl;
    }

}