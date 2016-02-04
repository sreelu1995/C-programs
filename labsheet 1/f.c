#include<stdio.h>
#include<stdlib.h>

main()
{

	FILE *fp,*fp2;
	char ch[50];
	fp=fopen("data.txt","r+");

	fp2=fopen("test.txt","r+");

	while(!feof(fp))
{
    fscanf(fp,"%s",ch);

	if(strcmp(ch,"the")==0)

	fprintf(fp2,"%s",ch);

}
	

}
