#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int i, j, req_moves;
    req_moves = 0;
   int mat[5][5];
 
for (int i = 0; i < 5; i++) {
     scanf("%d %d %d %d %d", &mat[i][0],  &mat[i][1], &mat[i][2], &mat[i][3], &mat[i][4]);
}
 
for ( i = 0; i < 5; i++)
{
    for ( j = 0; j < 5; j++)
    {
        if(mat[i][j] == 1)
        {
             goto end_search;
        }
           
    }
    
}
end_search:
 
if(i != 2)
    req_moves = abs(2-i);
if(j != 2)
    req_moves = req_moves + abs(2-j);
printf("%d",req_moves);
 
 
 
    return 0;
}
