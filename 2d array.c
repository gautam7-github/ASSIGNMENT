#include <stdio.h>
int main()
{
    int i,r,c,m,n,sum=0,total=0;

    printf("Enter M:");
    scanf("%i",&m);

    printf("Enter N:");
    scanf("%i",&n);

    int A[m][n];

    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("\nEnter at %i,%i:\n",r,c);
            scanf("%i",&A[r][c]);
        }
    }
    printf("\n\nOuTpUt:\n\n");

    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%d ",A[r][c]);
            sum=sum+A[r][c];
            total=total+A[r][c];
        }
        printf("\n");
        printf("Sum:%i\n",sum);
        sum=0;
    }
    printf("Total:%i",total);
}
