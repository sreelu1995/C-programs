#include<stdio.h>

main()
{
int n;
float area;
printf("enter the shape 1.circle 2.rectangle 3.square\n");
scanf("%d",&n);

switch(n)
{
 case1:circle();
 break;
 case2:square();
 break;
 case3:rectangle();
 break;
}

  if(n==1)
{
  int r;

  printf("enter the radius\n");
  scanf("%d",&r);
  printf("the area is\n");
  area = 3.14*r*r;
  printf("%f",area);
}

  if(n==2)
{
  int l,b;
  printf("enter the length and breadth\n");
  scanf("%d",&l);
  scanf("%d",&b);
  printf("the area is\n");
  area = l*b;
  printf("%f",area);
}


  if(n==3)
{
  int l;
  printf("enter the length\n");
  scanf("%d",&l);
  printf("the area is\n");
  area = l*l;
  printf("%f",area);
}
}






