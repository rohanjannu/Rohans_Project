#include<bits/stdc++.h>
using namespace std;

void patsearch(string s,string pt)
{
int pos = s.find(pt);
while(pos!=string::npos)
{
    cout<<pos<<endl;
    pos=s.find(pt,pos+1);  //the second parmeter of the ind function is tht from which position we want this to be searched
}
}

string digitafterdecimal(string s)
{
    int pos=s.find('.');
    if(pos==string::npos)
    return "";
    return s.substr(pos+1);
}
char findextra(string s1,string s2)
{
    int count[256]={0};
    for(auto x:s2)
    {
        count[x]++;
    }
     for(auto x:s1)
    {
        count[x]--;
    }
    for(int i=0;i<256;i++)
    {
        if(count[i]==1)
            return (char) i;
    }
    return 0;
}
char findextra1(string s1,string s2)
{
    int n=s1.length(),res=0;
    for(int i=0;i<n;i++)
    {
       res=res^s1[i]^s2[i]; 
    }
    res=res^s2[n];
    return (char) res;
}
int panagram(string s)
{
    int n=s.length();
    if(n<26)
    return false;
    bool visited[26]={0};
    for(int i=0;i<n;i++)
    {
        char x=s[i];
        if(x>='a' && x<='z')
        visited[x-'a']=true;
        if(x>='A' && x<='Z')
        visited[x-'A']=true;
    }
    for(int i=0;i<26;i++)
    {    
    if(visited[i]==false)
    return false;
    }
    return true;
    return 0;
}
int main()
{
string s,s1;
s="RohanJannuRohanJannu";
s1="HarryPotter";
string s3 = "14.567890";
cout<<s.substr(1,4)<<endl;
cout<<s.find("nJ")<<endl;
cout<<s<<endl;
if(s==s1)
cout<<"Same"<<endl;
else
cout<<"Not same"<<endl;
string pt="Rohan";
patsearch(s,pt);
string s4 = digitafterdecimal(s3);
cout<<s4<<endl;
string s5="aabcbc";
string s6="abbccba";
cout<<findextra(s5,s6)<<endl;
cout<<findextra1(s5,s6)<<endl;
string s7 = "The quick brown fox jumps over the lazy dog";
cout<<panagram(s7)<<endl;
s7="abc xyz pqr";
cout<<panagram(s7)<<endl;

int o=5;
cout<<__builtin_popcount(o)<<endl;

tuple<char,int,int> t1={'g',20,30};
tuple<string,int> t2("abc",50);
cout<<get<0>(t1)<<" "<<get<1>(t2)<<endl;
cout<<tuple_size<decltype(t1)>::value<<" "<<tuple_size<tuple<string,int>>::value<<endl;
char a;
int b,c;
tie(a,b,c)=t1;
cout<<a<<" "<<b<<" "<<c<<" "<<endl;
string d;
tie(d,ignore)=t2;
cout<<d<<" "<<endl;
auto tl=tuple_cat(t1,t2);
cout<<get<0>(tl)<<" "<<get<1>(tl)<<" "<<get<2>(tl)<<" "<<get<3>(tl)<<" "<<get<4>(tl)<<endl;



return 0;
}