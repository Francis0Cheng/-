#include<cstdio>
int merge(int A[], int B[], int C[], int n, int m)
{
    int i=0, j = 0, k = 0;
    while (i<n&&j<m)
    {
        if(A[i]<=B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }else
        {
            C[k] = B[j];
            j++;
            k++;
        }
        
    }
    while(i<n) C[k++] = A[i++];
    while(j<n) C[j++] = B[j++];
    
}
int main()
{
    return 0;
}