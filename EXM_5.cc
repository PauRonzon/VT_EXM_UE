/* VT_EXM_5      Paulina Ronzon     March/3rd/2022
Zeller's congruence, dates and days of the week */
//0:Sun, 1:Mon, 2:Tue, 3:Wed, 4:Thur, 5:Fri, 6:Sat.

#include <iostream>
using namespace std;

int Zeller(int year, int month, int day);
void Day(int Zeller);

int main(){

    cout<<"Introduce day - month - year :"<<endl;
    int day, month, year;
    cin>>day;
    cin>>month;
    cin>>year;

    Day(Zeller(year,month,day));
    return 0;
}

int Zeller(int year, int month, int day){
    int a = (14-month)/12;
    int y = year-a;
    int m = month+12*a-2;

    int d = (day+y+y/4-y/100+y/400+(31*m)/12)%7;
    return d;
}

void Day(int Zeller){
    if(Zeller==0) cout<<"Sunday";
    else if(Zeller==1) cout<<"Monday";
    else if(Zeller==2) cout<<"Tuesday";
    else if(Zeller==3) cout<<"Wednesday";
    else if(Zeller==4) cout<<"Thursday";
    else if(Zeller==5) cout<<"Friday";
    else if(Zeller==6) cout<<"Saturday";
}