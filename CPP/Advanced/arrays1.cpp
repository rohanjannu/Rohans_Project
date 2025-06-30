 #include<iostream>
 using namespace std;


int deletearr(int *arr,int n,int a)
{
    int j;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            for(j=i;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[j]=0;
            return 1;
        }
    }
    return 0;
}

 int main()
 {
    int arr[]{1,2,3,4,5},a;
    int n = sizeof(arr)/sizeof(int);
    cout<<"The number to be deleted?\n";
    cin>>a;
    deletearr(arr,n,a)?cout<<"Done\n":cout<<"Error\n";
    for(int x:arr)cout<<x<<" "; //iniitaliser list
    return 0;
 }