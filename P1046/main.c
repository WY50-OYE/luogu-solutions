#include "stdio.h"

int main()
{
   int apple[10];
    for(int i = 0;i < 10;i ++ )
    {
        scanf("%d",&apple[i]);
    }
        
        int h;
        scanf("%d",&h);

        int reach = h + 30;

        int count = 0;
        for( int i = 0;i < 10;i ++)
        {
            if(reach >= apple[i])
            {
                count ++;
            }
        }
        printf("%d\n",count);
    return 0;
}