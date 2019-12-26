//Hello word 
//to
//word Hello
#include<stdio.h>
int main()
{
    int num = 0;
    char ans[90][90];
    char s[40];
    while(scanf("%s",ans[num])!=EOF)
    {
        num++;
    }
    for(int i=num-1;i>=0;i--)
    {
        printf("%s", ans[i]);
       
        if(i>0)
        printf(" ");
    }
    return 0;
}