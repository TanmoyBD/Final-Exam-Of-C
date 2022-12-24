#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a1[n];//1st array
    int a2[n];// 2nd arrray
    int i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=1; j<n-i; j++)
        {
            if(a1[j]<a1[j-1])
            {
                int temp=a1[j];
                a1[j]=a1[j-1];
                a1[j-1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&a2[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=1; j<n-i; j++)
        {
            if(a2[j]>a2[j-1])
            {
                int temp=a2[j];
                a2[j]=a2[j-1];
                a2[j-1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a1[i]-a2[i]);
    }
    return 0;
}
