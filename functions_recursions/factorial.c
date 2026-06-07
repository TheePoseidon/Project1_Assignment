#include <stdio.h>

void displayLine() {
	    printf("-------------------\n");
}

int factorial(int n) {

	    if(n == 0)
		            return 1;

	        return n * factorial(n - 1);
}

void showFactorial(int n) {
	    displayLine();
	        printf("Factorial of %d = %d\n", n, factorial(n));
		    displayLine();
}

int main() {

	    showFactorial(5);
	        showFactorial(3);

		    return 0;
}
