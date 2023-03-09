#include <stdio.h>
int main() {
  int i,n;

  printf("Enter a number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      sum=sum+i;
    }
  printf("Sum is %d",sum);
  return 0;
}