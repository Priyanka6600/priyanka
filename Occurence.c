#include<stdio.h>
#define BASE 10
int main()
{
    int i,last_Digit;
    long number,n;
    int freq[BASE];
    
    printf("Enter any Number:\n");
    scanf("%ld",&number);
    
    for(i=0;i<BASE;i++)
    {
        freq[i]=0;
    }
    
    n = number;
    
    while(n!=0)
    {
        last_Digit = n % 10;
        n = n / 10;
        
        freq[last_Digit]++;
    }
    printf("Frequency of each digit in %ld is:\n",number);
    
    for(i=0;i<BASE;i++)
    {
        printf("%d occure = %d times\n", i, freq[i]);
    }
    return 0;
}

/*OUTPUT:
Enter any Number:
8329317657
Frequency of each digit in 8329317657 is:
0 occure = 0 times
1 occure = 1 times
2 occure = 1 times
3 occure = 2 times
4 occure = 0 times
5 occure = 1 times
6 occure = 1 times
7 occure = 2 times
8 occure = 1 times
9 occure = 1 times*/