/* type sizes */
/* Display the sizes of the different types on a particular machine */
/* Barry Bridgens 2014 */

#include <stdio.h>

int main(void)
{
	printf("\nType Sizes\n");
	printf("==========\n\n");
	printf("Size of char is %zu\n", sizeof(char));
	printf("Size of unsigned char is %zu\n", sizeof(unsigned char));
	printf("Size of short int is %zu\n", sizeof(short int));
	printf("Size of unsigned short int is %zu\n", sizeof(unsigned short int));
	printf("Size of int is %zu\n", sizeof(int));
	printf("Size of unsigned int is %zu\n", sizeof(unsigned int));
	printf("Size of long is %zu\n", sizeof(long));
	printf("Size of unsigned long is %zu\n", sizeof(unsigned long));

	printf("\n");
}
