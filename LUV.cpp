#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "My name is Jugabrat Nath   ";
    string result;
    string my;
    string str1;
    getline(cin,str1);
    cout<<str1;
    cout<<endl;
    cout<<str;
    cout<<endl;
    result = str+str1;
    cout<<result;
    cout<<str1.size();
    cout<<str[1];
    cout<<endl;

    string me="software";
    string rev;
    for(int i=me.size()-1 ; i>=0 ; --i)
    {
        rev=rev+me[i];
    }
    cout<<rev;
    result.push_back(str);
    cout<<result;

    return 0;
}
