#include<stdio.h>
main()
{
	
	int i,n,sum;
	
	printf("Enter the starting point : ");
	scanf("%d",&i);
	printf("Enter the ending point : ");
	scanf("%d",&n);
	
	while(i <= n){
		
		printf("%d\t",i);
		sum+=i;
		i++;
		
		
	}
	printf(" = %d",sum);
	
}
