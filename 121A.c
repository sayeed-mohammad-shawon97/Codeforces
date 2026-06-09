#include <stdio.h>
#include <string.h>
 
int main(void) 
{
    char s1[101];
    char s2[101];
    int sum1 = 0;
    int sum2 = 0;
    int i;
    scanf("%s",&s1);
    scanf("%s",&s2);
    
    int result = 0;
    for(i = 0; i < strlen(s1); i++)
    {
        if(s1[i] > 96)
        {
            s1[i]  = s1[i] - 32;
        }
        if(s2[i] > 96)
        {
            s2[i]  = s2[i] - 32;
        }
        if(s1[i] < s2[i])
        {
            printf("%d", -1);
            result = 1;
            break;
        }
        else if(s2[i] < s1[i])
        {
            printf("%d", 1);
            result = 1;
            break;
        }
    }
    if (result == 0)
    {
        printf("%d", 0);
    }
        
    return 0;
}
