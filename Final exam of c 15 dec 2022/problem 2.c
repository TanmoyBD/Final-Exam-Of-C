#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar1[n],ar2[n],tem1,i,j;
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar1[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(ar1[j]<ar1[j-1])
            {
                int tem1 = ar1[j];
                ar1[j]=ar1[j-1];
                ar1[j-1]=tem1;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar2[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=1; j<n-i; j++)
        {
            if(ar2[j]>ar2[j-1])
            {
                int tem1=ar2[j];
                ar2[j]=ar2[j-1];
                ar2[j-1]=tem1;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",ar1[i]-ar2[i]);
    }






    return 0;
}
