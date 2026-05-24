 #include <stdio.h>
int main()
{

     int b;
     double a,c;
     printf("请输入贷款金额a和期限b：\n");
     scanf("%d%d",&a,&b);
     if(b==1)
     {
     	c=a+a*12*2*0.9/100;
	 }
	 else if(b==2)
	 {
	 	c=a+a*12*3*1.0/100;
	 }
	 else if(b==3)
	 {
	 	c=a+a*12*3*1.11/100;
	 }else if(b>3)
	 {
	 	c=a+a*12*3*1.2/100;
	 }
	 printf("到期之后应归还银行本金和利息合计为%.31f",c);
	 return 0;
	 
}
