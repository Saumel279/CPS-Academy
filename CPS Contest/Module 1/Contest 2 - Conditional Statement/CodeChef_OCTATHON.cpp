#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if(x < 3) cout << "GOLD";
    else if(x >= 3 && x < 6) cout << "SILVER";
    else if(x >= 6) cout << "BRONZE";
}