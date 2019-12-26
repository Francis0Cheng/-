// D进制的A+B
#include<stdio.h>
int main()
{
    int a,b,d;
    scanf("%d%d%d", &a,&b,&d);
    int sum = a+b;
    int nums[40];
    int index = 0;
    do{
       nums[index++] = sum%d;
       sum = sum/d; 
    }while(sum!=0);

    for(int i=index-1;i>=0;i--)
    {
        printf("%d",nums[i]);
    }
    return 0;
}