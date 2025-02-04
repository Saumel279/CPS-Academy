#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int ans = a * c + b * d;
    printf("%d\n",ans);
    return 0;
}