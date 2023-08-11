#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i;
	unsigned long long factorial = 1;
	
	printf("Enter a number to find factorial: ");
	scanf("%d", &n);
	
	if(n < 0 )
	   printf("Error! please enter any postive integer number");
	   
	else
	{
		for(i=1; i<=n; ++i)
		{
			factorial *=i;
		}
		printf("Factorial of number %d = %llu", n, factorial);
	}
	
	return 0;
	

}