#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC Optimization ("O3")
#pragma GCC Optimization ("unroll-loops")
#define rep(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define ll long long
#define endl "\n"

void adjust(int *arr)
{
    rep(i,0,1000)
    {
        if(*(arr+i)>9)
        {
            *(arr+i+1) += *(arr+i)/10;
            *(arr+i) = *(arr+i)%10;
        }
    }
}

void solve()
{
    bool flag;
    int n;
    cin>>n;
    int arr[1000] = {};
    arr[0]=1;
    n+=1;
    while(--n)
    {
        rep(i,0,1000)
        {
            arr[i] = arr[i]*n;
        }
        adjust(arr);
    }
    for(int i=999;i>=0;i--)
    {
        if(*(arr+i)||flag){
            cout<<*(arr+i);
            flag = 1;
        }
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}