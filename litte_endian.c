
#include<stdio.h>
#include<stdlib.h>
int main()
{
/*	int a=1;
char *ptr=&a;

if(*ptr==1)
	printf("little endian\n")
	else
	printf("big endian\n")

	}*/
printf("\n\n");
system("lscpu|grep Endian");
}
