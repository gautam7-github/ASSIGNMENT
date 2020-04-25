#include <stdio.h>
int main()
{
    int r,c,k,sum=0,ra,ca,rb,cb;

    printf("Enter Rows,Columns A:");
    scanf("%i%i",&ra,&ca);
    printf("Enter Rows,Columns B:");
    scanf("%i%i",&rb,&cb);

    int A[ra][ca],B[rb][cb],AB[ra][cb];

    if(ca!=rb)
    {
        printf("\nError\nChange Order\n");
        return 0;
    }

    for(r=0;r<ra;r++)
     {
        for(c=0;c<ca;c++)
        {
            printf("Enter Value at A[%i][%i]:",r,c);
            scanf("%i",&A[r][c]);
        }
     }
     printf("\n\n\n");
     for(r=0;r<rb;r++)
     {
        for(c=0;c<cb;c++)
        {
            printf("Enter Value at B[%i][%i]:",r,c);
            scanf("%i",&B[r][c]);
        }
     }

     printf("\n\n\n");

     for(r=0;r<ra;r++)
     {
         for(c=0;c<cb;c++)
         {
             for(k=0;k<ca;k++)
             {
                 sum=0;
                sum=sum+A[r][k]*B[k][c];
             }
             AB[r][c]=sum;
         }
     }
     printf("\n\n");

     for(r=0;r<ra;r++)
     {
         for(c=0;c<cb;c++)
         {
             printf("%i  ",AB[r][c]);
         }
         printf("\n");
     }
}
