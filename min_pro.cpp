#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    std::vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<int>::iterator itr;
    int neg=0,max_neg=INT_MIN,min_pos=INT_MAX,zero=1;
    int pro=1;

    for (itr = v.begin(); itr != v.end(); ++itr)
    {
        if(*itr==0)
        {
            zero=0;
        }
        if((*itr)<0)
        {
            pro *= (*itr);
            max_neg = max(max_neg,(*itr));
            neg++;
        }
        if((*itr)>0)
        {
            pro *= (*itr);
            min_pos = min(min_pos,(*itr));
        }
    }
    if(neg!=0)
    {
        if(!(neg&1))
        {
            pro = pro/max_neg;
        }
    }
    else
    {
        pro = min_pos*zero;
    }

    cout<<pro<<endl;
    return 0;
}