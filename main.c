#include <stdio.h>
#include <stdlib.h>

/*Writed program the provides 20 charater buffer space fo last name
Aske persons last name.  Based out of input determine whenther on blue
or red team. alphabet less than 'M' stating at A[0] going to  Z
(unsigned)_countof(lastName)*/

int main()
{
	char lastName[20];
	printf("Enter your last name: \n");
	scanf_s(" %s", lastName, (unsigned)_countof(lastName));

	(lastName[0] < 'M') ? printf("Blue Team") : printf("Red Team") ;  // you can test characters or numbers (A-Z)

	return 0;
}

/*(unsigned)_countof(lastName) 
_countof(lastName) is a macro in C / C++ that is used to determine the number of elements in an array.It's essentially a safer way to calculate the size of an array without manually dividing by the size of a single element.

Breakdown:
_countof(array) returns the number of elements in the array(not the total memory size).

(unsigned)is a type cast that ensures the result is treated as an unsigned integer, meaning it cannot be negative.

For example, if lastName is an array like this :

	c
	char lastName[20];  // Allocates space for 20 characters
Then _countof(lastName) would return 20 because it counts the number of elements in the array.
*/
