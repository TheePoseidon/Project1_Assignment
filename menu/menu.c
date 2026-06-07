#include <stdio.h>

int main() {
	    int choice;
	        int num1, num2;

		    while (1) {
			            printf("\n===== MENU =====\n");
				            printf("1. Add Two Numbers\n");
					            printf("2. Check Even or Odd\n");
						            printf("3. Print Numbers 1-10 (Skip 5)\n");
							            printf("4. Exit\n");
								            printf("Enter your choice: ");
									            scanf("%d", &choice);

										            switch (choice) {

												                case 1:
															                printf("1st number: ");
																	                scanf("%d", &num1);

																			                printf("2nd number: ");
																					                scanf("%d", &num2);

																							                printf("Sum = %d\n", num1 + num2);
																									                break;

																											            case 2:
																											                printf("Enter a number: ");
																													                scanf("%d", &num1);

																															                if (num1 % 2 == 0)
																																		                    printf("%d is Even\n", num1);
																																	                else
																																				                    printf("%d is Odd\n", num1);

																																			                break;

																																					            case 3:
																																					                printf("Numbers from 1 to 10:\n");

																																							                for (int i = 1; i <= 10; i++) {
																																										                    if (i == 5)
																																													                            continue;   // Skip 5
																																																		//
																																																		//                     printf("%d ", i);
																																																		//                                     }
																																																		//
																																																		//                                                     printf("\n");
																																																		//                                                                     break;
																																																		//
																																																		//                                                                                 case 4:
																																																		//                                                                                                 printf("Exiting program...\n");
																																																		//                                                                                                                 return 0;
																																																		//
																																																		//                                                                                                                             default:
																																																		//                                                                                                                                             printf("Invalid choice! Try again.\n");
																																																		//                                                                                                                                                     }
																																																		//                                                                                                                                                         }
																																																		//
																																																		//                                                                                                                                                             return 0;
																																																		//                                                                                                                                                             }
