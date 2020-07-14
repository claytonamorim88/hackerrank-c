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
	printf("3 - Playing With Characters\n");
	printf("4 - Functions in C\n");
	printf("5 - Pointers in C\n");
	printf("6 - Conditional Statements in C\n");
	printf("7 - For Loop in C\n");
	printf("8 - Sum of Digits of a Five Digit Number\n");
	printf("9 - Bitwise Operators\n");
	printf("10 - Printing Pattern using Loops\n");
	printf("11 - 1D Arrays in C\n");
	printf("12 - Array Reversal\n");
	printf("13 - Printing Tokens\n");
	printf("14 - Digit Frequency\n");
	printf("15 - Dynamic Array in C\n");
	printf("16 - Calculate the Nth term\n");
	printf("17 - Students Marks Sum\n");
	printf("18 - Sorting Array of Strings\n");
	printf("19 - Permutations of Strings\n");
	printf("20 - Variadic functions in C\n");
	printf("21 - Querying the Document\n");
	printf("22 - Boxes through a Tunnel\n");
	printf("23 - Small Triangles, Large Triangles\n");
	printf("24 - Post Transition\n");
	printf("25 - Structuring the Document\n");
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
		case 4:
			functionsInC();
			break;
		case 5:
			pointerInC();	
			break;	
		default:
			printf("Invalid choice!");
			break;	
	}
	
	return 0;
}
