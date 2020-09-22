#include<stdio.h>
unsigned int ipConversion(const char *istr  )
{
unsigned int rslt=0,i,rt=0;
char temp[20],*ptr=(char *)&rslt+3;
for(i=0;istr[i];i++)
{
if(istr[i]!='.')
rt=rt*10+istr[i]-48;	
else{
*ptr--=rt;	
rt=0;
}
}
*ptr=rt;
return rslt;
}
int main()
{
char str[]="192.168.72.25";
printf("%08x\n",ipConversion(str));
}
