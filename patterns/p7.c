/*
*
**
* *
*  *
*   *
******
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i!=n)
            {
                if(j==0 || j==i-1)
                {
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}