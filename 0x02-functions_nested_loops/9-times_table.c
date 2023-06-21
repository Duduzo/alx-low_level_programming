
ns_nested_loops
Task 0


#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Return: Always 0 (success)
 *
 *     */


int main(void)

{


	printf("_putchar\n");


	return (0);

}




Task 1


#include "main.h"

#include <unistd.h>


/**
 *
 *  * print_alphabet - Entry point
 *
 *   * Return:0
 *
 *    */


void print_alphabet(void)

{

	        char c = 'a';


		        while (c <= 'z')

				        {

						                _putchar(c);

								                c++;


										        }

			        _putchar('\n');


}



Task 2


#include "main.h"


/**
 *
 *  * print_alphabet_x10 - Print lowercase alphabet 10 times
 *
 *   */


void print_alphabet_x10(void)

{

	        char num, letter;


		        for (num = 0; num <= 9; num++)

				        {

						                for (letter = 'a'; letter <= 'z'; letter++)

									                {

												                        _putchar(letter);

															                }

								                _putchar('\n');

										        }

}



Task 3


#include "main.h"


/**
 *
 *  * _islower - Checks for lowercase alphabet
 *
 *   * @c: Character to be checked
 *
 *    * Return: if character is lowercase, otherwise
 *
 *     */


int _islower(int c)

{

	        if (c >= 'a' && c <= 'z')

			                return (1);

		        else

				                return (0);

}



Task 4


#include "main.h"

/**
 *
 *  * _isalpha - Checks for alphabetic order
 *
 *   *
 *
 *    * @c: alpabet to check for
 *
 *     *
 *
 *      * Return: 1 if c is a letter, 0 otherwise
 *
 *       */

int _isalpha(int c)

{

	        return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));


}



Task 5


#include "main.h"

/**
 *
 *  * print_sign - prints the sign of a numver
 *
 *   *
 *
 *    * @n: the int to check
 *
 *     *
 *
 *      * Return: 1 and prints + if n is greater than zero
 *
 *       *
 *
 *        * 0 and prints 0 if n is zero
 *
 *         *
 *
 *          * -1 and prints - if n is less than zero
 *
 *           */

int print_sign(int n)

{

	        if (n > 0)

			        {

					                _putchar('+');

							                return (1);

									        }

		        else if (n == 0)

				        {

						                _putchar(48);

								                return (0);

										        }

			        else if (n < 0)

					        {

							                _putchar('-');

									        }

				        return (-1);

}



Task 6


#include "main.h"

/**
 *
 *  * _abs - computes the absolute value of an integrer
 *
 *   *
 *
 *    * @n: the int to check
 *
 *     *
 *
 *      * Return: the absolute value of int
 *
 *       *
 *
 *        */

int _abs(int n)

{

	        if (n >= 0)

			        {

					                return (n);

							        }

		        return (-n);

}


Task 7


#include "main.h"

/**
 *
 *  * print_last_digit - prints the last digit of a number
 *
 *   *
 *
 *    * @n: the int to extract the last digit from
 *
 *     *
 *
 *      * Return: value of the last digit
 *
 *       *
 *
 *        */

int print_last_digit(int n)

{

	        int a;


		        if (n < 0)

				                n = -n;


			        a = n % 10;


				        if (a < 0)

						                a = -a;


					        _putchar(a + '0');


						        return (a);

}


Task 8


#include "main.h"

/**
 *
 *  * jack_bauer - prints every minute of the day of Jack Bauer
 *
 *   *
 *
 *    * starting from 00:00 to 23:59
 *
 *     *
 *
 *      */

void jack_bauer(void)

{

	        int i, j;


		        i = 0;


			        while (i < 24)

					        {

							                j = 0;


									                while (j < 60)

												                {

															                        _putchar((i / 10) + '0');

																		                        _putchar((i % 10) + '0');

																					                        _putchar(':');

																								                        _putchar((j / 10) + '0');

																											                        _putchar((j % 10) + '0');

																														                        _putchar('\n');

																																	                        j++;

																																				                }

											                i++;

													        }

}



Task 9


#include "main.h"


/**
 *
 *  * times_table - check description
 *
 *   * Description: It prints 9 times table starting with 0
 *
 *    * Return: Nothing.
 *
 *     */

void times_table(void)

{

	        int i, j, n;


		        for (i = 0; i <= 9; i++)

				        {

						                for (j = 0; j <= 9; j++)

									                {

												                        n = i * j;


															                        if ((n / 10) == 0)

																			                        {

																							                                if (j != 0)

																												                                        _putchar(' ');

																											                                _putchar(n + '0');


																															                                if (j == 9)

																																				                                        continue;

																																			                                _putchar(',');

																																							                                _putchar(' ');

																																											                        }

																		                        else

																						                        {

																										                                _putchar((n / 10) + '0');

																														                                _putchar((n % 10) + '0');

																																		                                if (j == 9)

																																							                                        continue;

																																						                                _putchar(',');

																																										                                _putchar(' ');

																																														                        }

																					                }

								                _putchar('\n');

										        }

}
