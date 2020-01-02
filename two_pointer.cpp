// keywords: twopointers
#include<cstdio>
int main()
{
    int a[6]= {1,2,3,4,5,6};
    int m = 8;
    int i=0, j = 5;
    while(i<j)
    {
        if(a[i]+a[j] == m)
        {
            printf("%d %d\n", i, j);
            i++;
            j--;
        }else if(a[i]+a[j] < m)
        {
            i++;
        }else{
            j--;
        }
    }
    return 0;
}

