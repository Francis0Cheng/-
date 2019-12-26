//判断是否是回文串
#include<stdio.h>
#include<cstring>
const int maxn = 256;
int main()
{
    char str[maxn];
    scanf("%s", str);
    int flag = 1;
    for(int i=0;i<strlen(str)/2;i++)
    {
        if(str[i]!=str[strlen(str)-1-i])
        flag = 0;
    }
    if(flag==0)
    {
        printf("NO");
    }else{
        printf("YES");
    }
}