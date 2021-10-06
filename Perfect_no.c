#include <stdio.h>

int main()
{
    int i,j,n,sum;
    printf("Enter the n th number:\n");
    scanf("%d",&n);
    
    printf("All perfect number between 1 to %d:\n", n);
    
    for(i=1;i<=n;i++)
    {
        sum=0;
        
        for(j=1;j<i;j++)
        {
            if(i % j == 0)
            {
                sum=sum+j;//sum+=j;
            }
        }
        if(sum == i)
        {
            printf("%d\n",i);
        }
    }
    return 0;

}
/*OUTPUT:
Enter the n th number:
1000
All perfect number between 1 to 1000:
6
28
496*/