#include <iostream>
#include<ctype.h>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("myfile.txt",ios::in);
    char wrd[25],lne[100];
    int word=0,line=0;
while(!fin.eof())
    {
        fin>>wrd;
        ++word;
    }
    fin.seekg(ios::beg);
    while(!fin.eof())
    {
        fin.getline(lne,100,',');
        ++line;
    }

    cout<<"NO OF WORDS"<<word<<line<<endl;
    fin.close();
    return 0;

}
