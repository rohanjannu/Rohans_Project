#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5,6, 7, 8, 9, 10};
    int arr[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it = find(v.begin(), v.end(), 5);
    if (it != v.end()) {
        cout << "Element found: " << it-v.begin()+1 << endl;
    } else {
        cout << "Element not found" << endl;
    }
    int *ptr=find(arr, arr+10, 5);
    if (ptr != arr + 10) {
        cout << "Element found: " << ptr - arr + 1 << endl;
    } else {
        cout << "Element not found" << endl;
    }
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it1 =lower_bound(v1.begin(), v1.end(), 5);
    if (it1 != v1.end()) {
        cout << "Lower bound found: " << *it1 << endl;
    } else {
        cout << "Lower bound not found" << endl;
    }
     auto it2 =upper_bound(v1.begin(), v1.end(), 5);
    if (it2 != v1.end()) {
        cout << "Upper bound found: " << *it2 << endl;
    } else {
        cout << "Upper bound not found" << endl;
    }

    vector<int> v5={10,20,30,5};
    vector<int> v6={20,10,5,30};
    if(is_permutation(v5.begin(), v5.end(), v6.begin())) {
        cout << "The vectors are permutations of each other." << endl;
    } else {
        cout << "The vectors are not permutations of each other." << endl;
    }

    vector<int> v7 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it5= max_element(v7.begin(), v7.end());
    auto it6 = min_element(v7.begin(), v7.end());
    cout << "Maximum element: " << *it5 << endl;
    cout << "Minimum element: " << *it6 << endl;

    vector<int> v8 = {10,5,10,7,10,10,1,20};
    cout<<count(v8.begin(),v8.end(),10)<<endl;

    vector<int> v9 = {10,20,30,40,50,60,70,80,90};
    int x=20;
    if(binary_search(v9.begin(),v9.end(),x))
    cout<<"Found"<<endl;
    else cout<<"Not Found\n";
    
    vector<int> v10={10,20,30,40};
    fill(v10.begin(),v10.end(),5);
    for(int x:v10)
    cout<<x<<" ";
    cout<<endl;

    vector<int> v11={10,20,30,40,50,60,70,80,90};
    rotate(v11.begin(),v11.begin()+4,v11.end());
    for(int x:v11)
    cout<<x<<" ";
    cout<<endl;
    

    int init_res=100;
    cout<<accumulate(v11.begin(),v11.end(),init_res,[](int x,int y){return x*y;})<<endl;

    srand(time(NULL));
    for(int i=0;i<5;i++)
    cout<<rand()<<endl;
    return 0;
}