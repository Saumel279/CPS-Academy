#include <stdio.h>

int main() 
{
    int x;
    scanf("%d",&x);
    int a = x / 100;
    int c = x % 10;
    int b = (x / 10) % 10;
    int n1 = x;
    int n2 = (100 * b) + (10 * c) + a;
    int n3 = (100 * c) + (10 * a) + b;
    int ans = n1 + n2 + n3;
    printf("%d\n",ans);
    
}