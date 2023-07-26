#include <stdio.h>
int main(){
	int count = 0; 
	int sum = 0;
	int x = 0;
	printf("enter a number : ");
	scanf("%d", &x);
	while (x > 0) {
		sum += x;
       		printf("enter a number : ");
		scanf("%d", &x);
		count += 1;
	}
	printf("summation = %d\n" ,sum);
	printf("average = %d\n" ,sum/count);
	return 0;
}
