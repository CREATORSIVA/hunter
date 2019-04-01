#include<stdio.h>
int main()
{
    int n,i,j,len=0,c=0,a[60],t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n<=100000)
    {
        for(i=0;i<n;i++)
        {
          if(i==a[i])
          {
              printf("%d",a[i]);
          }
        }
    }  
    return 0;
}
