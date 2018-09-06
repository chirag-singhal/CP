#include <iostream>

using namespace std;

int main()
{
    int n,a[30],i,j,temp;
    cout<<"ENTER NUMBER OF ELEMENTS"<<endl;
    cin>>n;
    cout<<"ENTER ELEMENTS"<<endl;
        for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i+1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"SORTED ARRAY IS"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
