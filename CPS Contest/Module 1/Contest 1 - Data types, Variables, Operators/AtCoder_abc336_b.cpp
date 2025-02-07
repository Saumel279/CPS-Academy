#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N); 
    int result = __builtin_ctz(N);
    printf("%d\n", result); 
    return 0;
}
