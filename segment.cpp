#include<bits/stdc++.h>
using namespace std;

int buildt(int arr[],int tree[],int p,int m,int n)
{
    if(m==n)
    {
        tree[p] = arr[m];
        return tree[p];
    }
    tree[p] = buildt(arr,tree,2*p+1,m,(int)((m+n)/2))+buildt(arr,tree,2*p+2,(int)((m+n)/2)+1,n);
    return tree[p];
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int tree[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    buildt(arr,tree,0,0,n-1);
    for (int i = 0; i < n; ++i)
    {
        cout<<tree[i]<<endl;
    }
    return 0;
}