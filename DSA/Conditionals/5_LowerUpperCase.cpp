#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Character :";
    cin>>ch;
    if(ch>='a' && ch<='z')
        cout<<"lower case\n";
    else
        cout<<"upper case\n";
}