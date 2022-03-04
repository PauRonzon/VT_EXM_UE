/* VT_EXM_3     Paulina Ronzon    March/3rd/2022
Logarithms: b≥ 2 & n≥ 1. */

#include<iostream>
#include <math.h>
using namespace std;

int main(){
	int b,n,mul;
	int i = 1;
	
	cin >> b >> n;
	
	while(mul<=n){
		mul=pow(b,i);
		++i;
	}
    cout << (i-2);
}