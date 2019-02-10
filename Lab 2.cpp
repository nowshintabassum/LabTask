#include<bits/stdc++.h>
using namespace std;
class Mystring
{
    int s;
    char *str;
public:
    Mystring()
    {
        cout<<"default"<<endl;
        str=malloc(sizeof(str)*100);
    }
    Mystring(int s)
    {
        str=malloc(sizeof(str)*s);
    }
    bool setter(char *i)
    {
        int len=0;
        for(int j=0;i[j]!=NULL;j++)
        {
            len++;
        }
        if(len<=s){
            str=i;
            return 1;
        }
        else
            return 0;

    }
    void print()
    {
        cout<<str<<endl;
    }
};
