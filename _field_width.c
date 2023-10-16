#include "main.h"
#include <unistd.h>


void string_right(int width, char* arg)
{
	int i, j = 0;
	char space = ' ';

	for (i = 1; i < width; i++)
	{
		write(1, &space, 1);
	}

	while (*(arg + j) != '\0')
	{
		write(1, arg, 1);
		j++;
	}
	
}


void string_left(int width, char* arg)
{
	int i, j = 0;
	char space = ' ';

	while (*(arg + j) != '\0')
	{
		write(1, arg, 1);
		j++;
	}
	
	for (i = 1; i < width; i++)
	{
		write(1, &space, 1);
	}


}

void char_left(int width, char arg)
{
	int i;
	char space = ' ';

	write(1, &arg, 1);
	
	for (i = 1; i < width; i++)
	{
		write(1, &space, 1);
	}
}


void char_right(int width, char arg)
{
	int i;
	char space = ' ';

	
	for (i = 1; i < width; i++)
	{
		write(1, &space, 1);
	}


	write(1, &arg, 1);
}


void num_right(int width, int num)
{
	int i;
	char space = ' ';


}
