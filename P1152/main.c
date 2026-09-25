#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
    int n ;
    while(scanf("%d",&n) != EOF)
    {
        if( n == 1)
        {
            int x;
            scanf("%d",&x);
            printf("Jolly");
        continue;
        }

    int nums[1005];
    for(int i = 0; i < n; i ++ )
    {
        scanf("%d",&nums[i]);
    }

    int seen[1005] = {0};
    int isJolly = 1;

    for(int i =1; i < n; i ++ )
    {
        int diff = abs(nums[i] - nums[ i - 1]);
        if(diff <1 || diff > n - 1)
        {
            isJolly = 0;
        }else{
            if(seen[diff] == 1){
                isJolly = 0;
            }
            seen[diff] = 1;
        }
    }
    if(isJolly)
       {
           printf("Jolly\n");
       }else{
        printf("Not jolly\n");
       }
    }

    return 0;
}