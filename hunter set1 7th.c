#include <stdio.h>

int main()
{
    int n,m,i,j,a[60],b[70],c=0,k=0;
    scanf("%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  for(i=0;i<n;i++)
  {
      if((i%2==1) && (a[i]%2==0))
      {
          printf("%d",a[i]);
      }
      if((i%2==0) && (a[i]%2==1))
      {
          printf("%d ",a[i]);
      }
  }

    return 0;
}
