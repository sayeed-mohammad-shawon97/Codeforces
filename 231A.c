#include <stdio.h>
int main(void)
{
    int n, k, problem = 0;
    char d_cs[7];
    int d_ia[3];
    scanf("%d",&n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        
        fgets(d_cs, sizeof(d_cs), stdin);
        k = 0;
        for(int j = 0;j < 7; j++)
            {
                
                if(d_cs[j]=='1')
                    {
                    d_ia[k] = 1;
                    k++;
                    }
                        
                else if (d_cs[j]=='0')
                {
                d_ia[k] = 0;
                k++;
                }
            }
            if((d_ia[0]+d_ia[1]+d_ia[2]) > 1)
                problem++;
 
 
 
    }
    printf("%d",problem);
 
    return 0;
}
