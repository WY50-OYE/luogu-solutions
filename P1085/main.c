#include <stdio.h>

int main()
{
	int max_time = 0;
	int unhappy_day = 0;
	
	for(int i = 1; i <= 7;i ++)
	{
		int time1,time2;
		scanf("%d %d",&time1,&time2);
		int total_time = time1 + time2;
		
		if(total_time > 8 && total_time > max_time)
		{
			max_time = total_time;
			unhappy_day = i;
		}
	}
	printf("%d\n",unhappy_day);
	return 0;
}