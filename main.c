#include <stdio.h>
#include <stdlib.h>
int helloworld();
int playingWithCharacters();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int chosen = 1;
	
	printf("Please, choose a program to be executed:\n\n");
	printf("1 - Hello World\n");
	printf("2 - Sum and Difference of Two Numbers\n");
	printf("3 - Functions in C\n");
	printf("4 - Pointers in C\n");
	printf("5 - Conditional Statements in C\n");
	printf("6 - For Loop in C\n");
	printf("7 - Sum of Digits of a Five Digit Number\n");
	printf("8 - Bitwise Operators\n");
	printf("9 - Printing Pattern using Loops\n");
	printf("10 - 1D Arrays in C\n");
	printf("11 - Array Reversal\n");
	printf("12 - Printing Tokens\n");
	printf("13 - Digit Frequency\n");
	printf("14 - Dynamic Array in C\n");
	printf("15 - Calculate the Nth term\n");
	printf("16 - Students Marks Sum\n");
	printf("17 - Sorting Array of Strings\n");
	printf("18 - Permutations of Strings\n");
	printf("19 - Variadic functions in C\n");
	printf("20 - Querying the Document\n");
	printf("21 - Boxes through a Tunnel\n");
	printf("22 - Small Triangles, Large Triangles\n");
	printf("23 - Post Transition\n");
	printf("24 - Structuring the Document\n");
	printf("\n");
	
	scanf("%d", &chosen);
	getchar();
	
	switch(chosen){
		case 1: 
			helloworld();
			break;
		case 2:
			sunAndDifference();
			break;	
		case 3:
			playingWithCharacters();
			break;	
		default:
			printf("Invalid choice!");
			break;	
	}
	
	return 0;
}
