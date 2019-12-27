#include<cstdio>
#define maxn  100010
int A[maxn], n;
// 数组从1开始并非0
int main(){
    for(int i=2;i<=n;i++)
    {
        int temp = A[i], j = i;
        while(j>1&&temp<A[j-1])
        {
            A[j] = A[j-1];
            j--;
        }
        A[j] = temp;
    }
    return 0;
}
