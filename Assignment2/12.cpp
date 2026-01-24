// Pattern_Double_Sided_Arrow.cpp
#include<iostream>
using namespace std;
int main() {
	int n ;
	cin>>n;

	for (int i = 0; i < n / 2; i++) {

		for (int j = 1; j < n - 2 * i; j++)
			cout << "  ";

		
		for (int j = i + 1; j > 0; j--)
			cout << j << " ";

		
		for (int j = 0; j < 2 * i - 1; j++)
			cout << "  ";

	
		for (int j = 1; i && j <= i + 1; j++)
			cout << j << " ";

		cout << endl;
	}

	for (int i = n / 2; i >= 0; i--) {
		
		for (int j = 1; j < n - 2 * i; j++)
			cout << "  ";

	
		for (int j = i + 1; j > 0; j--)
			cout << j << " ";

		for (int j = 0; j < 2 * i - 1; j++)
			cout << "  ";

		
		if (i != 0) {
    for (int j = 1; j <= i + 1; j++) {
        cout << j << " ";
    }
}

		cout << endl;
	}
return 0;
}