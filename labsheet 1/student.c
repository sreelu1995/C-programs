#include<stdio.h>

struct student
{
  char name[20];
  int rno;
  char dept[20];
  int maths,chem,phy;
};
typedef struct student student;

main()
{
  student s[10];
  int i,j;
  for(i=0;i<10;i++)
  {
    printf("enter name of student\n");
    scanf("%s",s[i].name);
    printf("enter register number\n");
    scanf("%d",s[i].rno);
    printf("enter department\n");
    scanf("%s",s[i].dept);
    printf("enter marks for maths\n");
    scanf("%d",s[i].maths);
    printf("enter marks for chem\n");
    scanf("%d",s[i].chem);
    printf("enter marks for physics\n");
    scanf("%d",s[i].phy);
   }
}
