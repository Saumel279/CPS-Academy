#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int c,d;
    cin >> c >> d;
    int p1 = (a * 2) + b;
    int p2 = (c * 2) + d;
    if(p1 > p2) cout << "Messi";
    else if(p2 > p1) cout << "Ronaldo";
    else cout << "Equal";
}