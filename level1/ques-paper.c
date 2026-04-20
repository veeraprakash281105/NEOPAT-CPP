#include<iostream>
using namespace std;
int main()
{
    int a,b,c,u,v,i,j,k;
    cin>>a>>b>>c;
    cin>>u>>v;
    cin>>i>>j>>k;
    int x,y,z;
    x=a+b*5/4+c%3*5;
    cout<<"x="<<x<<endl;
    if(u>v)
    {
        cout<<"y="<<u<<endl;
    }
    else
    {
        cout<<"y="<<v<<endl;
    }
    cout<<"z=1"<<endl;
    return 0;
}
