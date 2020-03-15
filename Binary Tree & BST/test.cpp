#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string *str=&s;
    int x=0,y=0;
    while((void *)str!=(void *)(s.back()+1))
    {
        if(*(void *)str=='z')
            x++;
        else
            y++;
            str++;
    }
    if(2*x==y)
        cout<<"Yes";
    else
        cout<<"No";
}
