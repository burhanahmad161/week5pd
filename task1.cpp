#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
void pyramid(float volume,float volume1);
main()
{
    float lenght,width,height;
    cout<<"Enter Lenght:";
    cin>>lenght;
    cout<<"Enter Width:";
    cin>>width;
    cout<<"Enter Height";
    cin>>height;
    float volme=lenght*width*height;
    float volume1=volme/3;
    float volume; 
    pyramid(volume,volume1);
}
void pyramid(float volume,float volume1)
{
char choice;
cout<<"Enter C for centimeter, M for milimeter and K for kilometer:";
cin>>choice;
 if(choice=='C')
 {
  float volume=volume1*100;
  float total_volume_in_cm=volume*volume*volume;
  cout<<"Volume is:"<<total_volume_in_cm;
 }
 if(choice=='M')
 {
  float volume=volume1*10;
  float total_volume_in_mm=volume*volume*volume;
  cout<<"Volume is:"<<total_volume_in_mm;
 }
  if(choice=='K')
 {
  float volume=volume1*1000;
  float total_volume_in_km=volume*volume*volume;
  cout<<"Volume is:"<<total_volume_in_km;
 }
}

