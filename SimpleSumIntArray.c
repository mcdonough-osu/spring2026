#include <stdio.h>
/* Author: Tyler McDonough (mcdonough.211@buckeyemail.osu.edu)  */
/* Academic Integrity Statement: BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE
THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE 
FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY 
ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY. */

int main(void)
{
	int num_int_inputs = 5; 							/* define variable containing number of integers to be stored in array */
	int int_inputs[5] = {1, 67, 24, 3, 9};	/* define static integer array to-be-summed	*/
	int int_sum = 0;									/* define integer variable to hold the to-be-computed sum, initializing to 0 */
	int i;												/* declare i to track for-loop iterations */

	printf("This program is a simple test of summing a static array of integers (i.e., 1, 67, 24, 3, and 9)\n");
	printf("and printing the result to console (i.e., 104). This simple C program is primarily a test of\n");
	printf("Tyler's newly-created GitHub repository to meet broader course requirements for CSE 2421.\n");

	/* Print the integers to-be-summed to console */
	printf("The integers to be summed are:\n");
	for(i = 0; i < num_int_inputs; i++){
		printf("%d\n", int_inputs[i]);
	}

	/* Compute sum of ints as simple proof-of-concept */
	for(i = 0; i < num_int_inputs; i++){
		int_sum = int_sum + int_inputs[i];
	}

	/* Display computed sum of ints */
	printf("\nThe sum of the above integers is: %d\n", int_sum);
}
