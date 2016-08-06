/*
     POJ 1003
     Date: 08/04/2016
*/
#include<iostream>
using namespace std;
int main()
{
       int flag=1;
       double t;
      while(flag)
      {
             cin>>t;
             if(t==0.00)
                break;
             int i=2;
             double sum=0.0;
             while(t>sum)
             {
                    sum = sum + (1.00/i);
                    i++;
             }
             cout<<i-2<<" card(s)"<<endl;
      }
}

