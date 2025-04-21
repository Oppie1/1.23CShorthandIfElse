#include <stdio.h>
#include <stdlib.h>

int main()
{
	char lastName[20];
	printf("Enter your last name: \n");
	scanf_s(" %s", lastName, (unsigned)_countof(lastName));

	(lastName[0] < 'M') ? printf("Blue Team") : printf("Red Team") ;  // you can test characters or numbers (A-Z)

	return 0;
}