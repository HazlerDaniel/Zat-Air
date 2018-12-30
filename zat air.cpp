#include<stdio.h>
#include<conio.h>

int main(){
	int air;
	printf("Masukan suhu air dalam celcius =");
	scanf("%d",&air);
	
	if(air<=0)
	{
		printf("ZAT AIR BEKU\n");
	}
	else if(air>=0)
	{
		printf("ZAT AIR TIDAK BEKU,CAIR");
	}
	else
	("error");
}
