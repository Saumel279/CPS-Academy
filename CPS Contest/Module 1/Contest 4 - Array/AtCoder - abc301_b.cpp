#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (abs(v[i] - v[i + 1]) == 1)
        {
            continue;
        }
        else
        {
            // int zero = min(v[i], v[i + 1]);
            // int one = max(v[i], v[i + 1]);
            if (v[i] <= v[i + 1])
            {
                for (int j = v[i] + 1; j < v[i + 1]; j++)
                {
                    v.insert(v.begin() + i + 1, j);
                    i++;
                }
            }
            else
            {
                for (int j = v[i] - 1; j > v[i + 1]; j--)
                {
                    v.insert(v.begin() + i + 1, j);
                    i++;
                }
            }
        }
    }

    for (auto &u : v)
        cout << u << " ";
    return 0;
}