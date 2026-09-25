#include <stdio.h>

int main()
{
	int n;
	int k;
	scanf("%d %d",&n,&k);
	
	int cigarette;
    int final_cigarette = n;

    while(n >= k)
    {
        cigarette = n / k;
        final_cigarette += cigarette;

        n = (n % k) + cigarette;
    }
	
	printf("%d",final_cigarette);
	
	return 0;
}