#include<stdio.h>
int main()
{
    int n ,temp=0, val=1, in=1;
    printf("Enter the value: ");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++)
    {
        if (i>1)
        {
            in=in+2 ;
            temp=in ;
            val=val+temp ;
        }
     /*  if(i==n)
      {
          printf(" %d",val);
        }
        else 
        {*/
            printf(" %d",val);
       // }
    }
    return 0;
}