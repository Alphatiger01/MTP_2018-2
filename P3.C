//Victor Hugo Duarte Avila
//11721EAU010

#include <stdio.h>
int main()
{
	int conv=0, cum=0, i=0;
	char num[256];
	scanf("%s", num);
	getchar();
	for (i=0; num[i]; i++)
	{
		if ((num[i]-'0')>=0 && (num[i]-'0')<=9)
			cum=cum*10+(num[i]-'0');
		else;
	}
	printf("%i", cum);
	return 0;
}