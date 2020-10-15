/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Main function
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if (input<0)
	{
		printf("Sqrt of %d is %fi\n",input,sqrt(-1*input));
		return 0;
	}
	if (input==0)
	{
		printf("invalid input\n");
		return 0;
	}
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("Program ended. Exiting the program");
	return(0);

} // end main
