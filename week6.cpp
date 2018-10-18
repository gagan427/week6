#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter score:";
    cin>>a;
    if(a>=86)
    {
        cout<<"Grade A";
    
    }
    else if (a>=72)
    {
        cout<<"Grade B";
    }
   else if (a>>=60)
   {
       cout<<"Grade C";
   }
   else if(a>=50)
   {
       cout<<"Grade D";
   }
   else{
       cout<<"Fail";
   }
   return 0;
}
