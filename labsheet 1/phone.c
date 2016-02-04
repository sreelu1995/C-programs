#include<stdio.h>

struct phone
{
  int areacode;
  int exchange;
  int number;
};
typedef struct phone phone;

main()
{
  phone p1,p2;
  p1.areacode=474;
  p1.exchange=272;
  p1.number=1234;

  printf("enter your code\n");
  printf("enter areacode\n");
  scanf("%d",&p2.areacode);
  printf("enter exchange\n");
  scanf("%d",&p2.exchange);
  printf("enter number\n");
  scanf("%d",&p2.number);

  printf("my number is\n");
  printf("%d\t,%d\t,%d\t",p1.areacode,p1.exchange,p1.number);
  printf("your number is\n");
  printf("%d\t,%d\t,%d\t",p2.areacode,p2.exchange,p2.number);
}
