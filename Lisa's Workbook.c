#include<stdio.h>

int workbook(int n, int k,int arr[100])
{
    int i,pgn=1,pbn=1,spb=0,pgs,nop;
    for(i=0;i<n;i++)
    {
        pbn=1;
       while(pbn<=arr[i])
       {
            nop=k;
            while(nop-- && pbn<=arr[i])
            {
                if(pgn==pbn)
                spb++;
                pbn++;
            }
            pgn++;
        
       }

    }
    return spb;
}


int main()
{
    int n,k,arr[100],i,spb;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    spb=workbook(n,k,arr);
    printf("%d",spb);
    return 0;

}

/*int main() 
{
   int n,k,i;
   // cin>>n>>k;
   scanf("%d %d",&n,&k);
    int ar[n];
    for(i=0;i<n;i++)
    scanf("%d ",&ar[i]);
        //cin>>ar[i];

    int p=1,c=0,j=0,m=1;
    for(i=0;i<n;i++)
    { m=1;
       while(m<=ar[i])
       {
           for(j=1;j<=k&&m<=ar[i];j++)
           {
               if(m==p)
               {c+=1;
               }
               m+=1;
           }
           p+=1;
       }
    }
    printf("%d",c);
    //cout<<c;
    return 0;
}*/
