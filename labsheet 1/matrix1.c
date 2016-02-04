#include<stdio.h>

void scanmatrix(int,int,int [][10]);
void dispmatrix(int,int,int [][10]);


main()
{
  int a[10][10], m, n;
  printf("enter number of rows and columns\n");
  scanf("%d\n%d",&m,&n);
  scanmatrix(m,n,a);
  dispmatrix(m,n,a);
}

void scanmatrix(int m,int n,int a[][10])
{
  int i,j;
  printf("enter first matrix\n");
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
    scanf("%d",&a[i][j]);
  }

}

void dispmatrix(int m,int n,int a[][10])
{
  int i,j;
  printf("matrix is\n");
  for(i=0;i<m;i++)
  {
    printf("\n");
    for(j=0;j<n;j++)
    {
      printf("%d\t",a[i][j]);
    }
  }

}
