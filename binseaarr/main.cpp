#include <iostream>
#include<cstdlib>>

using namespace std;

int main()
{
     char opt='y';
    while(opt=='Y'||opt=='y')
    {
    int a[10],index,item,found=0,beg=0,last=9,mid;
    cout<<"ENTER ELEMENTS OF ARRAY"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    system("CLS");
    cout<<"THE ELEMNETS OF ARRAY ARE AS FOLLOWS"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"ENTER ELEMENT TO BE SEARCHED "<<endl;
    cin>>item;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(item==a[mid])
        {
            index=mid;
            found=1;
            cout<<"THE ELEMENT  "<<item<<" IS FOUND AT INDEX  "<<index<<endl;
            break;
        }
        else if(item>a[mid])
            beg=mid+1;
        else
            last=mid-1;
    }
    if(found==0)
    {
        cout<<"THE ELEMENT "<<item<<"IS NOT FOUND"<<endl;
    }
    cout<<"DO YOU WANT TO CONTINUE Y/N"<<endl;
    cin>>opt;
    }
    return 0;
}
