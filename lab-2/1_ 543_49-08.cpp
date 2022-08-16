// codeforces problem no- 231A
// problem name- team

#include<iostream>
using namespace std;

int main(){

    int a,b,c, tc, increment=0;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b>>c;
        if((a==1 & b==1)||(b==1 & c==1)||(a==1 & c==1))
            increment++;
    }
    cout<<increment<<endl;

    return 0;
}
