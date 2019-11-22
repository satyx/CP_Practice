#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string str;
        cin>>str;
        int n = str.size();
        int arr[n][n] = {0};
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                arr[i][j]  = 0;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            arr[i][i] = 1;
        }
        int largest = 1;
        for (int i = 0; i < n-1; ++i)
        {
            if(str[i]==str[i+1])
            {
                arr[i][i+1] = 2;
                largest = 2;
            }
        }

        for (int k = 3; k <= n; ++k)
        {
            for (int i = 0; i < n-k+1; ++i)
            {
                int j = i+k-1;
                if(str[i]==str[j] && arr[i+1][j-1]!=0)
                {
                    arr[i][j] = arr[i+1][j-1]+2;
                    if(arr[i][j]>largest)
                        largest = arr[i][j];
                }
            }
        }
        cout<<largest<<endl;
    }
    return 0;
}