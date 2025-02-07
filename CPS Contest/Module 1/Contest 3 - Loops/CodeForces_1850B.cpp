#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<pair<int,int>>v(n);

        for(int i = 0; i < n; i++)
        {
            cin>>v[i].first>>v[i].second;
        }
        int c = 0;
        int maxi = -1;
        for(int i = 0; i < n; i++)
        {
            if(maxi<v[i].second && v[i].first<=10)
            {
                maxi = v[i].second;
                c = i+1;
            }
        }
        cout<<c<<endl;
        v.clear();
    }   
    return 0;
}