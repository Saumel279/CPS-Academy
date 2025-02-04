#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    int ans = X % 100;
    if(ans == 0)printf("K00\n");
    else if(ans >= 1 && ans <= 9)
    {
      printf("K0%d\n",ans);
    }
    else
    printf("K%d\n",ans);
}