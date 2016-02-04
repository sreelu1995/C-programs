#include<stdio.h>

void scanmatrix(int,int,int [][10],int [][10]);
void dispmatrix(int,int,int [][10],int [][10]);
void sum(int,int,int [][10],int [][10]);

void transpose(int,int,int [][10]);

main()
{
  int a[10][10], b[10][10], m, n, c[10][10], d[10][10];
  printf("enter number of rows and columns\n");
  scanf("%d\n%d",&m,&n);
  scanmatrix(m,n,a,b);
  dispmatrix(m,n,a,b);
  sum(m,n,a,b);

  transpose(m,n,a);
}

void scanmatrix(int m,int n,int a[][10],int b[][10])
{
  int i,j;
  printf("enter first matrix\n");
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
    scanf("%d",&a[i][j]);
  }
  printf("enter second matrix\n");
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
    scanf("%d",&b[i][j]);
  }
}

void dispmatrix(int m,int n,int a[][10],int b[][10])
{
  int i,j;
  printf("first matrix is\n");
  for(i=0;i<m;i++)
  {
    printf("\n");
    for(j=0;j<n;j++)
    {
      printf("%d\t",a[i][j]);
    }
  }
  printf("second matrix is\n");
  for(i=0;i<m;i++)
  {
    printf("\n");
    for(j=0;j<n;j++)
    {
      printf("%d\t",b[i][j]);
    }
  }
}

void sum(int m,int n,int a[][10],int b[][10])
{
  int i,j,c[10][10];
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
    c[i][j]=a[i][j]+b[i][j];
  }
  printf("sum is\n");
  for(i=0;i<m;i++)
  {
    printf("\n");
    for(j=0;j<n;j++)
    {
      printf("%d\t",c[i][j]);
    }
  }
}

void transpose(int m,int n,int a[][10])
{
  int i,j,d[10][10];
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
    d[j][i]=a[i][j];
  }
  printf("transpose is\n");
  for(i=0;i<m;i++)
  {
    printf("\n");
    for(j=0;j<n;j++)
    {
      printf("%d\t",d[i][j]);
    }
  }
}

