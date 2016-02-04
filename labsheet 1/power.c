#include<stdio.h>

double power(double,int);

main()
{
  int p;
  double n,res;
  printf("enter the number\n");
  scanf("%lf",&n);
  printf("enter the power\n");
  scanf("%d",&p);
  res=power(n,p);
  printf("the result is %lf\n",res);
}

double power(double n,int p)
{
  int res,i;
  res=1;
  for(i=0;i<p;i++)
  {
    res=res*n;
  }
return res;
}
