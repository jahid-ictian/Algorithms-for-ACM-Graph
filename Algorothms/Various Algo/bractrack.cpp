#include<bits/stdc++.h>
using namespace std;

int arr[10];
vector<int>result;
int taken[10];

void call()
{
    for(int i=1;i<4;i++) cout<<taken[i]<<" ";
    cout<<endl;
    for(int i=0;i<result.size();i++) cout<<result[i]<<" ";
    cout<<endl;
    if(result.size()==3)
    {
        cout<<endl;
        for(int i=0;i<3;i++) cout<<result[i]<<" ";
        cout<<endl<<endl;
        return;
    }
    for(int i=1;i<=3;i++)
    {
        if(taken[i]==0)
        {
            taken[i]=1; result.push_back(arr[i]);
            call();
            taken[i]=0; result.pop_back();
            cout<<endl;
            for(int i=1;i<4;i++) cout<<taken[i]<<" ";
            cout<<endl;
            for(int i=0;i<result.size();i++) cout<<result[i]<<" ";
            cout<<endl;
        }
    }
}

int main()
{
    int n,i;
    cout<<"How many number : ";
    cin>>n;
    for(i=1;i<=n;i++) cin>>arr[i];
    memset(taken,0,sizeof taken);
    call();
    return 0;
}
