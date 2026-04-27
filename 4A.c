#include <stdio.h>
int main(void)
{
    int W;
    scanf("%d",&W);
    if (((W-2)%2==0) && (W-2>0))
        printf("YES");
    else
        printf("NO");
    return 0;
}
