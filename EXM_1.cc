/* VT_EXM_1            Paulina Ronzon             March/1st/2022
n: must be represented by hours (h), minutes(m) & seconds (s) */

#include<ios
tream>          //Include libraries.
using namespace std;

int main(){
    int Time, s, m, h;
    cout<<"Declare seconds:"<<endl;              //Enter 'n', declared manually as the number of seconds.
    cin>>Time;

    if(Time%3600==0){                           //When the result of the division of 'n' (Time) and the module is 0...
        h=Time/3600;                            //hours will be the result of the division of 'n' by 3600 (seconds per hour).
    }
    else{                                      //If time is not 0...
      h=Time/3600;                             //hours will be the result of the division of 'n' by 3600 (seconds per hour).
      Time=Time%3600;                          //'n' is updated and it is changed by the new module.

      if(Time%60==0){                          //When the result of the division of 'n' (Time) and the module is 0...
          m=Time/60;                           //minutes will be the rsult of the division of 'n' by 60 (seconds per minute).
      }
      else{
          m=Time/60;                           //If time is not 0...
          Time=Time%60;                        //minutes will be the rsult of the division of 'n' by 60 (seconds per minute).
          s=Time;                            //The rest of time is updated and now is represented by the seconds.
      } 
    }

cout<<"Hours="<<h<<", Minutes="<<m<<", Seconds="<<s<<endl;     //Shows Hours, Minutes and Seconds in the debugger window.

    return 0;
} //Main