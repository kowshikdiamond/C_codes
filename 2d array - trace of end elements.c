#include <stdio.h>

int main()
{
    int a[10][10],i,j,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
            {
                sum +=a[i][j];
            }
        }
    }
    printf("%d",sum);

    return 0;
}
