#include<stdio.h>

void findmax(int[],int);

main()
{
  int i,n,a[10];
  printf("enter the size of array\n");
  scanf("%d",&n);
  printf("enter the array\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  findmax(a,n);
}

void findmax(int a[],int n)
{
  int i,max;
  max=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]>max)
    {
     max=a[i];
    }
  }
printf("the largest is %d\n",max);
}
