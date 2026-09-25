#include <stdio.h>

int main()
{
	int budget;
	int hand = 0;
	int bank = 0; 
	
	for( int month = 1; month < 13; month ++)
	{
		scanf("%d",&budget);
		
		hand += 300;
		
		if(hand < budget)
		{
			printf("-%d",month);
			return 0;
		}
		
		hand -= budget;
		
		if(hand >= 100)
		{
			int save_mount = (hand / 100) * 100;
			bank += save_mount;
			hand -= save_mount;
		}
	}
	int final_money = hand + bank + bank / 5;
	printf("%d",final_money);
	
	return 0;
}