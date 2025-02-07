#include <bits/stdc++.h>
using namespace std;
void solve(){
    char a,b, c, d;
    cin>>a>>b>>c>>d;
    int x, y;
    if((a=='A' && b=='E') || (a=='E' && b=='A')) x = 1;
    else x = (b==a+1||b==a-1)?1:2;

    if((c=='A' && d=='E') || (c=='E' && d=='A')) y = 1;
    else y = (d==c+1||d==c-1)?1:2;
    
    if(x==y) cout<<"Yes\n";
    else cout<<"No\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int _ = 1;
    while(_--){
        solve();
    }
    return 0;
}