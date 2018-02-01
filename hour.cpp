#include<iostream.h>
int main()
{
int time=0;
int hour=0;
int min=0;
int sec=0;
cout<<"Enter the time in seconds:";
cin>>time;
hour=time/3600;
time=time%3600;
min=time/60;
time=time%60;
sc=time;
cout<<"the time in hr:min format is:"<<hour<<"hours,"
<<min<<"minutes,and"<<sec<<"seconds!n";
return 0;
}
