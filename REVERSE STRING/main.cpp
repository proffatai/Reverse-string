#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main ()
{
    char name [10];
    int len;
    cout<<" enter a word and we reverse it for you "<<endl;
    cin>>setw(10)>>name; // to ensure that length of word does not exceed 9
    len=strlen(name);
    cout<<" reverse of "<<name<<" is ";
    for (int i=len; i>0; i--)
       cout<< name[i-1];

}
