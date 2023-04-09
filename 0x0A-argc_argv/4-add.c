#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_num - check - string there are digits
 * @str:arrays str
 *
 * Return:Always 0 (Succes)
 */
	int check_num(char *str)
{
	/*Declaring variables */

	unsigned int count;
	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!sdigit(str[count]))/*check if str there are digit*/
		{
			return (0);
		}
		count++;
	}
	return(1);
}
/**
 * main - Print the nameof the program
 * @argc:Count the arguments
 * @argv:Arguments
 *
 * Return: Always 0(Sucess)
 * */

	int main(int argc,char*argv[])
	{
		/*Declaring variables*/

		int count;
		int str_to_int;
		int sum=0;
		count=1
			while (count < argc)/*Goes through the whole array*/

		{
			if(check_num(argc[count]))
			{
				str_to_int=atoi(argv[count]);/*ATOI-->Convert string to int*/
				sum +=str_to_int;
			}
			/*Condition if the one the number contains symboks that are not digits*/
			else
			{
				printf("Error\n");
				return(1);
			}
			count++;
		}
		printf("%d\n",sum);/*print sum*/
		return(0)
}
