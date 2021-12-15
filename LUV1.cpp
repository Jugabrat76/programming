#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(--t){
    string str="Hello, my name is Jugabrat Nath";
    string str1;
    for(int i=str.size()-1;i>=0 ;--i)
    {
        str1.push_back(str[i]);
    }
    cout<<str1;
    cout<<endl;
    if(str==str1)
    {
        cout<<"the word is same";
    }
    else{
        cout<<"the word is not same";
    }
    cout<<endl;
    string adc ="12346456758768768976";
    int i;
    cin >>i;
    if(i<adc.size()){
       cout<<" well done bro, go ahead";
       cout<<endl;
       int last= adc[i]-'0';
        cout<<last;
    }
    else{
        cout<<"no, you entered a wrong number";
    }
    cout<<endl;
    }

    return 0;


}
