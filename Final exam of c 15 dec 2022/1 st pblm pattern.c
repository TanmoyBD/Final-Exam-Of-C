#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
    int row;
    int col;

    for(row=1;row<=n;row++)
        if (row== 1 || row%2==1)
        {
            for(col=1;col<=n-row;col++)
            {
                printf(" ");
            }
            for(col=1;col<=2*row-1;col++)
            {
                printf("^");
            }
            printf("\n");
        }

        else if (row==3||row%2==0)
        {
            for(col=1;col<=n-row;col++)
            {
                printf(" ");
            }
            for(col=1;col<=2*row-1;col++)
            {
                printf("*");
            }
             printf("\n");
         }


    return 0;
}
