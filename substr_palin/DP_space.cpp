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
        int largest = 1;
        for (int i = 1; i <n-1; ++i)
        {
            int len=1;
            for(int j=1;i>=j && i+j<n;j++)
            {
                if(str[i-j]==str[i+j])
                {
                    len+=2;
                }
                else
                    break;
            }
            if(len>largest)
                largest=len;
        }
        for(int i=1;i<2*n-1;i+=2)
        {
            int len=0;
            for (int j=1;i>=j && (i+j)/2<n;j+=2)
            {
                if(str[(i-j)/2]==str[(i+j)/2])
                    len+=2;
                else
                    break;
            }
            if(len>largest)
                largest=len;
        }
        cout<<largest<<endl;
    }
    return 0;
}