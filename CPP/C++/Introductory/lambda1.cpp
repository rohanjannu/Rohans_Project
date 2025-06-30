#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v {10,20,30,40,50,60,70,80,90};
   
    for_each(v.begin(),v.end(),[](int &x){x=x*2;});  //each value will be modified

    for_each(v.begin(),v.end(),[](int x){cout<<x<<" ";});  //each value will be modified

        cout<<endl;    
    int res1 = count_if(v.begin(),v.end(),[](int x){return x>50;});
    cout<<res1;
    cout<<endl;
    
    auto res2 = find_if(v.begin(),v.end(),[](int x){return x>40;});
    cout<<*res2;
    cout<<endl;
/*
    int res3 = accumulate(v.begin(), v.end(),0);  //accumulate function not defined for this compiler ig 
    cout << res3 << '\n';
    cout<<endl;

    int res4 = accumulate(v.begin(),v.end(),[](int x, int y){return x*y;});
    cout<<res4;
*/
    return 0;
}