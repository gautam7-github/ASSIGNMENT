#include <stdio.h>
int main()
{
    int d,n,jasoos=0;

    printf("Enter N:");
    scanf("%i",&n);

    for(d=2;d<n;d++)
    {
        if(n%d==0)
           {
            jasoos=1;
            break;
           }
        else
            continue;
    }
    if(jasoos=0)
        printf("Prime");
    else
        printf("Not Prime");
}
