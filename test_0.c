



#include<stdio.h> 
int main() {
    int x, a, b, c, y;

   
    printf("请输入一个3位正整数：");
    scanf("%d", &x);

    
    a = x / 100;         
    b = (x / 10) % 10;  
    c = x % 10;         

    
    y = c * 100 + b * 10 + a;

   
    printf("y = %d*100 + %d*10 + %d = %d\n", c, b, a, y);

    return 0;
}

