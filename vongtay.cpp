#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , a , k;
	cin >> n;
	a = n / 7;
	if( a % 2 == 0 ) {
		k = n % 7;
		switch( k ) {
			case 0: {
				cout << "7" << " " << "0";
				break;
			}
			case 1: {
				cout << "6" << " " << "1";
				break;
			}
			case 2: {
				cout << "5" << " " << "2";
				break;
			}
			case 3: {
				cout << "4" << " " << "3";
				break;
			}
			case 4: {
				cout << "3" << " " << "4";
				break;
			}
			case 5: {
				cout << "2" << " " << "5";
				break;
			}
			case 6: {
				cout << "1" << " " << "6";
				break;
			}
		}
	}
		if( a % 2 != 0 ) {
			k = n % 7;
			switch( k ) {
				case 0: {
					cout << "0" << " " << "7";
					break;
				}
				case 1: {
					cout << "1" << " " << "6";
					break;
				}
				case 2: {
					cout << "2" << " " << "5";
					break;
				}
				case 3: {
					cout << "3" << " " << "4";
					break;
				}
				case 4: {
					cout << "4" << " " << "3";
					break;
				}
				case 5: {
					cout << "5" << " " << "2";
					break;
				}
				case 6: {
					cout << "6" << " " << "1";
					break;
				}
			}
		}
}
