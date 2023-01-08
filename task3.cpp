#include<iostream>
#include<windows.h>
#include<cmath>
int result(int,int,int,int);
using namespace std;
main()
{
    int hours,days,worker,working_hours;
    cout<<"Enter Hours:";
    cin>>hours;
    cout<<"Enter Days:";
    cin>>days;
    cout<<"Enter Workers:";
    cin>>worker;
    cout<<"Enter Working Hours:";
    cin>>working_hours;
    result(days,hours,worker,working_hours);        
}
int result(int days,int hours,int worker,int working_hours)
{
 int time=days*working_hours;
 int total_hours=time/10;
 int work_hours=time-total_hours;
 int total_work_hours=work_hours*worker;
 if(total_work_hours>hours)
 {
 int time_left=total_work_hours-hours;
 cout<<"Yes!"<<time_left<<" hours left";
 }
 if(total_work_hours<hours)
 {
  int required_time=hours-total_work_hours;    
   cout<<"No!"<<required_time<<" hours required";
 }
}