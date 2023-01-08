#include<iostream>
#include<windows.h>
#include<cmath>
float texCalculator(char type,float amount);
using namespace std;
main()
{
  float amount;
  char type;
  string vehicle;
  cout<<"Enter your vehicle:";
  cin>>vehicle;
  cout<<"Enter your vehicle code:";
  cin>>type;
  cout<<"Enter Amount:";
  cin>>amount;
  texCalculator(type,amount);
}
float texCalculator(char type,float amount)
{
  if(type=='M')
  {
    string vehicle;
    float tax_amount=amount*6/100;
    float amount_with_tax=amount+tax_amount;
    cout<<"The price on a vehicle of type"<< vehicle<<"after adding the tax is"<<  amount_with_tax <<"with"<<  type <<"replaced by vehicle type and"<<  tax_amount <<"with final price";
  }
   if(type=='E')
  {
    string vehicle;
    float tax_amount=amount*8/100;
    float amount_with_tax=amount+tax_amount;
    cout<<"The price on a vehicle of type"<< vehicle<<"after adding the tax is"<<  amount_with_tax <<"with"<<  type <<"replaced by vehicle type and"<<  tax_amount <<"with final price";
  }

 if(type=='S')
  {
    string vehicle;
    float tax_amount=amount*10/100;
    float amount_with_tax=amount+tax_amount;
    cout<<"The price on a vehicle of type"<< vehicle<<"after adding the tax is"<<  amount_with_tax <<"with"<<  type <<"replaced by vehicle type and"<<  tax_amount <<"with final price";
  }

 if(type=='V')
  {
    string vehicle;
    float tax_amount=amount*12/100;
    float amount_with_tax=amount+tax_amount;
    cout<<"The price on a vehicle of type"<< vehicle<<"after adding the tax is"<<  amount_with_tax <<"with"<<  type <<"replaced by vehicle type and"<<  tax_amount <<"with final price";
  }

 if(type=='T')
  {
    string vehicle;
    float tax_amount=amount*15/100;
    float amount_with_tax=amount+tax_amount;
    cout<<"The price on a vehicle of type"<< vehicle<<"after adding the tax is"<<  amount_with_tax <<"with"<<  type <<"replaced by vehicle type and"<<  tax_amount <<"with final price";
  }



}