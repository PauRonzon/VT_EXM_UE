/* VT_EXM_2     Paulina Ronzon    March/1st/2022
Read 'n' and print the serie */

#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout << "Introduce a numero natural: ";
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
        cout << (i*i*i) << ",";
    }
    cout << (n*n*n);
} //Main