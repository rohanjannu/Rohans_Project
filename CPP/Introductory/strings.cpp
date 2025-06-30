#include<iostream>
#include<string>
#include<cstring>

using namespace std;


int main()
{
    char str0[]= "gfg";
    char str1[] = {'g','f','g','\0'};
    string s1= "potter";
    cout<<strlen(str0)<<endl;
    cout<<strlen(str1)<<endl;
    cout<<s1.length()<<endl;         //string::npo == if a value is not present in the string
    cout<<s1.substr(1,4);
    cout<<s1.find("ro");
    int res = strcmp(str0,str1);
    strcpy(str0,"rohan");
    //getline(cin,str,'$'); //stops reading the string after it encounters a "4" sign
    //for(char x: s1)
    //for(auto it = str.begin(); it!=str.end();it++) cout<<*it;
    return 0;
}