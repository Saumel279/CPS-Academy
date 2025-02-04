#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = a * b;
    int ans2 = 2 * b + 2 * a;
    printf("%d %d\n",ans, ans2);
    return 0;
}