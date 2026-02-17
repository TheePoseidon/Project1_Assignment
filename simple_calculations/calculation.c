#include <stdio.h>

int main(void)
{
	    int a, b;
	        int sum;
		    float average;

		        printf("Enter two numbers you want to use in calculations: ");
			    scanf("%d %d", &a, &b);

			        sum = a + b;
				    average = sum / 2;

				        printf("The average of the two numbers is: %.2f\n", average);

					    return 0;
}

