#include <stdio.h>

int main(void)
{
	    int choice;
	        char *fruits[] = {"Apple", "Banana", "Mango"};

		    for (;;)
			        {
					        printf("\n1. Apple\n2. Banana\n3. Mango\n4. Exit\n");
						        printf("Choose your favorite fruit: ");

							        if (scanf("%d", &choice) != 1) {
									            printf("Invalid input. Please enter a number.\n");
										                while (getchar() != '\n');  // clear buffer
															    //             continue;
															    //                     }
															    //
															    //                             if (choice == 4)
															    //                                         break;
															    //
															    //                                                 if (choice < 1 || choice > 4) {
															    //                                                             printf("Invalid choice. Try again.\n");
															    //                                                                         continue;
															    //                                                                                 }
															    //
															    //                                                                                         printf("You chose: %s\n", fruits[choice - 1]);
															    //                                                                                             }
															    //
															    //                                                                                                 printf("Goodbye!\n");
															    //                                                                                                     return 0;
															    //                                                                                                     }
															    //
