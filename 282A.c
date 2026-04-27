#include <stdio.h>
 
int main(void)
{
    char str[4];
    int n, i;
    int x = 0;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
 
        scanf("%s",str);
        if(str[0] == '+'||str[1] == '+'||str[2] == '+' )
        {
            x++;
 
        }
        if(str[0] == '-'|| str[1] == '-'||str[2] == '-' )
        {
            x--;
 
        }
    }
    
 
    printf("%d",x);
    return 0;
}
