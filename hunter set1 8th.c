#include <stdio.h>

int main()
{
    int n,m,i,j,a[60],b[70],c=0,k=0;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  for(k=0;k<n;k++)
  {
      for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
          {
              if((i<j && j<k)&&(j>i && j<k))
              {
                  if((a[i]+a[j])==a[k])
                  {
                      printf("%d %d %d\n",a[i],a[j],a[k]);
                  }
         }  }   }
}    return 0;
}
            
