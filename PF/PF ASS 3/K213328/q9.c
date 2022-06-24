#include <stdio.h>

int main()
{
    int n;
    int i,j;
    int temp = 'a';

    printf("Enter n: ");
    scanf("%d",&n);

    if (n<=26 && n>0)
    {
        for (i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("%c", temp + j);
            }
                printf("\n");
        }
    }
    else
    {
        return 0;
    }
}
