#include<bits/stdc++.h>
using namespace std;
bool comparePairs(const pair<int,int>& a,const pair<int,int>& b)
{
    return a.second<b.second;
}
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        std::vector<pair<int,int> > v;
        for (int i = 0; i < n; ++i)
        {
            int a,b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end(), comparePairs);
        vector<pair<int,int> >::iterator i;
        int curr = 0;
        int act = 0;
        for (i = v.begin(); i != v.end(); ++i)
        {
            if((*i).first>=curr)
            {
                act++;
                curr = (*i).second;
            }
        }
        cout<<act<<endl;
    }
    return 0;
}