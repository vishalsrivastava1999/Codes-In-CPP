#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Complete the findDigits function below.
int findDigits(int no) 
{
    int a,d=0,n;
    n=no;
    while(n!=0 )
    {
        a=n%10;
        if(a>0 && no%a==0)    
        {
            d++;
        }
        n=n/10;
    }
    //printf("%d\n",d);
    return d;
}
int main()
{
    int t,n,i,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("\n%d",&n);
        d=findDigits(n);
        printf("%d\n",d);
    }
    return 0;
}

