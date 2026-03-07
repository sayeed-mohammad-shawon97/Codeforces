
#include <stdio.h>
int main() {
    int n, k, i, num, count;
    int score[100];
    i = 0;
    count = 0;
    scanf("%d %d",&n, &k);
    while (scanf("%d", &num)) {
       score[i] = num;
        i++;
        if(i >= n)
            break;
    }
   
    for(i = 0; i < n; i++ )
    {
        if((score[i] >= score[k-1]) && score[i] > 0)
        {
            count++;
        }        
    }
    printf("%d",count);

    return 0;
}
