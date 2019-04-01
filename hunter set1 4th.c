#include<stdio.h>
int main()
{
    int n,i,j,l=0,c=0,a[60],t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n<=100000)
    {
        for(i=0;i<n;i++)
        {
          l=a[i];
          for(j=0;j<n;j++)
          {
              if(l==a[j])
              {
                  c++;
                 
              }
          }
          if(c==1)
          {
              printf("%d",a[i]);
          } c=0;
           
        }
    }  
    return 0;
}
