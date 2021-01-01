#include<stdio.h>
#include<string.h>

unsigned long long int reverse( unsigned long long int temp)
{
	unsigned long long int rslt=0,rem;
	while(temp)
	{
		rem=temp%10;
		rslt=rslt*10+rem;
		temp/=10;
	}
	return rslt;
}

int count(int temp)
{
	int cnt=0;
	while(temp)
	{
		temp/=10;
		cnt++;
	}
	return cnt;
}

int main()
{
	unsigned long long int v,temp,rem,i,digitcnt,cnt=0;
	char str[86]={0};
	float f;
	scanf("%f",&f);
	temp=v=f*1000000;
	digitcnt=count((int)f);
	temp=reverse(temp);
	while(temp)
	{
		rem=temp%10;
		str[i++]=rem+48;
		temp/=10;
		cnt++;
		if(digitcnt==cnt)
			str[i++]='.';
	}
	puts(str);
//	printf("%f\n",f);
//	printf("%llu\n",v);
}
