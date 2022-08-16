#include<iostream>
using namespace std;
int main()
{
     int hour[1000];
     int i,n,r;
     float sal;

     cout<<"Enter the salary";
     cin>>r;
     cout<<"Enter the number of employee";
     cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>hour[i];
        }
    for(i=0;i<n;i++)
    {
        if(hour[i]<=40){
            sal=hour[i]*r;
             cout<<sal<<endl;

        }
        else if(hour[i]>40)
            {sal=hour[i]*r+200;
            cout<<sal<<endl;
            }

    }

        return 0;
