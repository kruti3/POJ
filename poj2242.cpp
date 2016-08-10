#include<iostream>
#include<cmath>
#define PI 3.141592653589793
using namespace std;
float distance(float x1, float y1, float x2, float y2)
{
       return (sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
}

int main()
{
       float x1, y1, x2, y2, x3, y3;
       float a,b,c,radius,area;
       cin>>x1>>y1>>x2>>y2>>x3>>y3;
       while(cin)
       {
              a = distance(x1,y1,x2,y2);
              b = distance(x3,y3,x2,y2);
              c = distance(x1,y1,x3,y3);
              area = (sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b)))/4.0;
              radius = (a*b*c)/(4.0*area);
              cout.setf(ios::fixed,ios::floatfield);
              cout.precision(2);
              cout<<2*PI*radius<<endl;

              cin>>x1>>y1>>x2>>y2>>x3>>y3;

       }
}

