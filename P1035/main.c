#include <stdio.h>
int main(){
	int k;
	scanf("%d",&k);
	int n = 0;
	double sum = 0.0;
	while(sum <= k){
		n ++;
		sum += 1.0/n;
	}
	printf("%d",n);
	return 0;
}