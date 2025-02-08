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
        long long int sum = 1;
        vector<int>v(n);
        for(int i = 0; i < n; i++) 
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        v[0] += 1;
        for(int i = 0; i < n; i++)
        {
            sum *= v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}