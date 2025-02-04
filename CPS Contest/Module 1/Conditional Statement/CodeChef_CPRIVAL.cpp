#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    int a,b;
    cin >> a >> b;
    int dom = x + a;
    int eve = y + b;
    // cout << dom << " " << eve;
    if(dom > eve) cout << "Dominater" << endl;
    else cout << "Everule" << endl;
}