/*
 * Into Coding test by David Kaplan
 * for Engineered Software preliminary eval
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//setup a constant for the maximum int and number of digits
	int MAXINT = 100;
	int MAXDIGITS = 3;
	
	
	int max_len = MAXDIGITS + 1; // + 1 for terminating \0
	char num_buff[max_len]; 
	for(int i = 1; i <= MAXINT; i++) {
		snprintf(num_buff, max_len,"%d", i); 
		int has_3_or_5 = 0;
		
		//check for '\0' prevents reading garbage
		for(int j = 0; j < MAXDIGITS && num_buff[j] != '\0'; j++) {
			if(num_buff[j] == '3') {
				printf("Fizz");
				has_3_or_5 = 1;
			}
			else if(num_buff[j] == '5') {
				printf("Buzz");
				has_3_or_5 = 1;
			}
		}
		printf("%s\n", (has_3_or_5) ? "" : num_buff);
	}
	return 0;
}

