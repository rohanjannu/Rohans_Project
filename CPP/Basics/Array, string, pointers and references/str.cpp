#include<iostream>
#include<cstring>
using namespace std;

int main()
{
char s1[] = "gfg";
char s2[] = "abcd";
char *s4;

cout<<strlen(s1)<<endl;
int res = strcmp(s1,s2);
if(res==0)
cout<<"same"<<endl;
else if(res<0) cout<<"s1 is smaller";
else cout<<"s2 is larger";
cout<<endl;
strcpy(s4,s1);
    return 0;
}