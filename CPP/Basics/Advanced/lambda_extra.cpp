#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    vector<int> v{10,20,30,4,1,200};
    for_each(v.begin(),v.end(),[](int &x) {x*=2;});
    for_each(v.begin(),v.end(),[](int x) {cout<<x<<" ";});
    cout<<endl;
    cout<<count_if(v.begin(),v.end(),[](int x) {return x>20;})<<endl;
    auto it = find_if(v.begin(),v.end(),[](int x) {return x>60;});
    cout<<*it<<endl;
 /* int res = accumulate(v.begin(),v.end(),0);
    cout<<res<<endl;
    int res = accumulate(v.begin(),v.end(),[](int x,int y) {return x*y;});
    cout<<res<<endl;*/
    return 0;
}
