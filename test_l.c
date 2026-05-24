
#include<stdio.h>
int main(){	
	float r,r1,r2,r3;
	printf("请输入这3个电阻：");
	scanf("%f%f%f",&r1,&r2,&r3);
    r=1/(1/r1+1/r2+1/r3);
	 printf("r的电阻是：%.2f",r);
	 return 0;
}

