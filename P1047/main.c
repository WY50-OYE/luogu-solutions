#include "stdio.h"

int main()
{
	int l,m;
	int trees[10005] = {0};
	scanf("%d %d",&l,&m);

	for(int i = 0;i <= m; i++)
	{
		int start,end;
		scanf("%d %d",&start,&end);
	for(int j = start;j <= end;j ++ )
	{
		trees[j] = 1;
	}
}

	int sum = 0;
	for(int i = 0;i <= l;i ++)
	{
		if(trees[i] == 0)
		{
			sum ++;
		}
	}
	printf("%d\n",sum);
}