#include <stdio.h>
#include <string.h>

int main()
{
	char harf, cumle[100], *cptr;
	int tekrar = 0;
  
	printf("Bir cumle girin:\n");
	gets(cumle);
	printf("Cumlede aramak istediginiz harfi girin:\n");
	scanf("%c", &harf);
	cptr=strchr(cumle, harf);
	if (cptr == NULL)
	{
		printf("Cumlede aradiginiz harf yoktur.");
	}
	else
	{
		tekrar++;
		while (cptr!=NULL)
		{
			cptr = strchr(cptr+1, harf);
			tekrar++;
		}
		printf("Cumlede aradiginiz %c' harfi vardir.\n", harf);
		printf("Cumlede '%c' harfi sayisi: %d", harf, tekrar);
	}
	return 0;
}
