#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//accumulate is not working for some reason
int main()
{
    vector<int> v{1,2,3,5,4};

    sort(v.begin(),v.end(),[](int &x,int &y){return x<y;});
    for_each(v.begin(),v.end(),[](int &x){return x*=2;});
    for_each(v.begin(),v.end(),[](int x){cout<<x<<" ";});
    cout<<endl;
   // for(auto x:v)cout<<x<<endl;
    int res = count_if(v.begin(),v.end(),[](int x){return x>6;});
    cout<<res<<endl;
    auto it = find_if(v.begin(),v.end(),[](int x){return x<6;});
    cout<<*it<<endl;
   // res = accumulate(v.begin(), v.end(),0);
   // cout << res << '\n';
   // res = accumulate(v.begin(),v.end(),1,[](int x,int y){return x*y;});
  //  cout<<res<<endl;
    cout<<res<<endl;
}