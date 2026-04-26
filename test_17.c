#include <stdio.h>
int main(){
	int x;
	printf("请输入一个整数\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("good morning");
			break;
		case 2:
		    printf("good afternoon");
		    break;
		case 3:
			printf("good evening");
			break;
		case 4:
			printf("good night");
			break;
		default:printf("byebye");
	}
	return 0;
}
