/* VT_EXM_4     Paulina Ronzon    March/2nd/2022
Define if 'n' is a palindromic number or not. */

#include <iostream>
using namespace std;

int main(){
    int n, aux, rest, Inv_n=0;

    cout<<"Declare n:"<<endl;
    cin>>n;
    aux=n;

    while(aux>0){
        rest=aux%10;
        aux=aux/10;
        Inv_n=Inv_n*10+rest;
    }

    if(Inv_n==n){
        cout<<"Palindromic number";
    }
    else{
        cout<<"Not a palindromic number";
    }
    return 0;
}