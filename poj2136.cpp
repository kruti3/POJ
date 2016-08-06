/*
   POJ 2136
   Date: 08/06/2016
*/
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
       string str;
       vector <int> num(26, 0 );
       int i, len,j;
       for(i=0;i<4;i++)
       {
              getline(std::cin,str);j=0;
              len = str.length();
              while(j<len)
              {
                     if(str[j]<='Z' & str[j]>='A')
                            num[str[j]-'A']++;
                     j++;
              }
       }
       int max = *max_element(num.begin(), num.end());
       for(i=0;i<max;i++)
       {
              for(j=0;j<26;j++)
              {
                     if(i<max-num[j])
                            cout<<" ";
                     else
                            cout<<"*";
                     cout<<" ";
              }
              cout<<endl;
       }
       for(char c='A';c<='Z';c++)
              cout<<c<<" ";
}
