

#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_CTYPE, "RUS");
	int n;
	puts("¬ведите число");
	scanf_s("%d", &n);
	printf("%d", n);
	
	//printf("¬ведено число %d", num);






}