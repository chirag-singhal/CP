#include<iostream>
#include <fstream>
#include<ctype.h>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main()
{
    ofstream fout("textfile.txt");
    char str[100];
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        cout<<"ENTER STRING TO ENTER"<<endl;
        gets(str);
        fout<<str<<endl;
        cout<<"WANT TO ENTER MORE TEXT (Y/y)"<<endl;
        cin>>ch;
    };
    fout.close();
    cout<<"FILE CREATED"<<endl;
    return 0;
}
