/*
    POJ: 1799
    Date: 08/08/2016

*/
#include<iostream>
#include<cmath>
using namespace std;

#define PI 3.14159265

int main()
{
       int n;
       int i=1;
       cin>>n;
       float R, r;
       int num;
       while(n--)
       {
              cin>>R>>num;
              r = R * (sin(PI/num)/(1+sin(PI/num)));
              cout<<"Scenario #"<<i<<":"<<endl;
              cout.setf(ios::fixed,ios::floatfield);
              cout.precision(3);
              cout<<r<<endl;
              cout<<endl;
              i++;
       }
}
