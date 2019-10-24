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
        string str,raw;
        cin>>raw;
        str = preprocess(raw);
        int c=0,r=0;
        int arr[str.size()] = {0};
        int largest = 0;
        for(int i=1;i<str.size()-1;i++)
        {
            if(i<r)
                arr[i] = min(arr[2*c-i],r-i+1);
            while(str[i+(arr[i]+1)]==str[i-(arr[i]+1)] && (i+(arr[i]+1)<str.size()) && (i-(arr[i]+1)>=0))
            {
                arr[i]++;
            }
            if(arr[i]>largest)
                largest = arr[i];
            if(i+arr[i]>r)
            {
                c=i;
                r=i+arr[i];
            }
        }
        /*for (int i = 0; i < str.size(); ++i)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        */
        cout<<"Largest Palindrome Size:"<<largest<<endl;
    }
}