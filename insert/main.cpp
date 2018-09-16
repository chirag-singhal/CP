#include <iostream>
#include<conio.h>
#include<cstdlib>

using namespace std;

int main()
{
    int a[50],s,n,d,j;
    char opt='y';

     cout<<"ENTER SIZE OF ARRAY:    "<<endl;
    cin>>s;
    cout<<"ENTER ARRAY ELEMENTS:   "<<endl;
     for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }

    while(opt=='y'||opt=='Y')
    {

    cout<<"ENTER NUMBER TO BE INSERTED:   "<<endl;
    cin>>n;
    cout<<"ENTER THE INDEX NO OF NEW ELEMENT:    "<<endl;
    cin>>d;

    if(d<=s-1)
    {
    for(int i=s; i>d; i--)
    {
        a[i]=a[i-1];
    }
    a[d]=n;
    }
    else
    {
        a[d]=n;
    }

    cout<<"NUMBER INSERTED SUCCESSFULLY !!!!!"<<endl;
    cout<<"ARRAY AFTER INSERTING ELEMENT IS: "<<endl;
    for(int i=0;i<=s;i++)
    {
        cout<<a[i]<<endl;
    }
    s=s+1;
    cout<<"DO YOU WANT TO ADD ONE MORE ELEMNET Y/N :"<<endl;
    cin>>opt;
    if(opt=='Y'||opt=='y')
    system("CLS");
    }
    return 0;
}
