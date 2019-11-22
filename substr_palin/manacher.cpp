#include<bits/stdc++.h>
using namespace std;

string preprocess(string str)
{
    string res="#";
    for (int i = 0; i < str.size(); ++i)
    {
        res = (res+str[i])+'#';
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int count = 0;

        string str,raw;
        cin>>raw;
        str = preprocess(raw);
        int c=0,r=0;
        int arr[str.size()] = {0};
        int largest = 0;
        for(int i=1;i<str.size()-1;i++)
        {
            bool flag=false;
            if(i<r)
                arr[i] = min(arr[2*c-i],r-i+1);
            while(str[i+(arr[i]+1)]==str[i-(arr[i]+1)])
            {
                flag=true;
                arr[i]++;
                count++;
            }
            if(arr[i]>largest)
                largest = arr[i];
            if(i+arr[i]>r)
            {
                c=i;
                r=i+arr[i];
            }
            if(flag==false)
            {
                count++;
            }
        }
        /*for (int i = 0; i < str.size(); ++i)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        */
        cout<<"Largest Palindrome Size:"<<largest<<'\t'<<count<<endl;
    }
}