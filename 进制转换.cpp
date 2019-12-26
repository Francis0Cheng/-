#include<stdio.h>
int main()
{
    int y = 0; int product = 1;
    int p;
    int Q;
    int x; // x为p进制的数字
    while(x!=0)
    {
        y+=x%10*product;
        product *=product;
        x /= 10;
    }
    //
    int z[40], num=0;
    do{
        z[num++] = y%Q;
        y = y / Q;
    }while(y!=0);
    // 用dowhile的原因是当十进制数是0时的情况

}