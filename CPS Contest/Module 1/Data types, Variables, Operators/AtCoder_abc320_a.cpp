#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = pow(a,b);
    int ans2 = pow(b,a);
    // int ans2 = 2 * b + 2 * a;
    printf("%d\n",ans + ans2);
    return 0;
}