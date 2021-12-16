// implementing the class and use of constructor and destructor
#include<bits/stdc++.h>
using namespace std;

class animal
{
    private:
        int x;
        int y;
        int sum;

     public:
     animal(int x,int y)
     {
         sum = x+y;
         //cout<< sum;
     }
     int display()
     {
         cout<<"the value is  "<<sum;
     }
     ~animal()
     {
         cout<<"the object is destroyed";
     }
};
int main()
{
    int c;
    animal obj(20,46);
   // animal obj1=obj;
    cout<<endl;
    animal obj1(2,5);
    //obj.result();
    obj.display();
    cout<<endl;
    obj1.display();
    return 0;
}
