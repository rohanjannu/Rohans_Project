 #include<bits/stdc++.h>
 using namespace std;


int main()
{
    pair<int,int> p1;
    p1={10,20};
    pair<int,string> p2(10,"Rohan");
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    pair<int,int> p5(5,6),p6(1,1),p7(1,1),p8(10,10),p9(5,5);
    cout<<(p6==p7)<<endl;
    cout<<(p6!=p7)<<endl;
    cout<<(p7>p8)<<endl;
    cout<<(p9<p5)<<endl;
    int a[]{10,5,15};
    int b[]{'X','Y','Z'};
    pair <int,char> p[4];
    for(int i=0;i<4;i++)
        p[i]={a[i],b[i]};
    sort(p,p+3);
    for(int i=0;i<3;i++)
    cout<<p[i].second<<" ";
    return 0;
}