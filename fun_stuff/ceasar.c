#include <unistd.h>
#include <stdio.h>
#include <math.h>

int	reverse_putnbr(char *c);

void	putchar_conv(char c, int a);

void	instructions(void);

int	main(int argc, char **argv)

{
	instructions();
	if (argc == 3)
	{
		putchar_conv(argv[1][0], reverse_putnbr(argv[2]));
	}
	printf("\n");
	return (0);
}

void	instructions(void)
{
	printf(
    "Usage:\n"
    "1. Open your terminal and type: 'man ascii'\n"
    "2. Find your character and note its decimal value\n"
    "3. Run this program with: ./program <char> <offset>\n\n"
    "Rules for <offset>:\n"
    "  - If your character comes BEFORE the target in ASCII table, use POSITIVE offset\n"
    "  - If it comes AFTER, use NEGATIVE offset\n\n"
    "Example:\n"
    "  To convert 'A' (65) to 'C' (67): ./program A 2\n"
    "  To convert 'D' (68) to 'B' (66): ./program D -2\n"
);
	printf("This is your character: \n");
}

void	putchar_conv(char c, int a)
{
	char k;

	k = c + a ;
	write(1, &k, 1);
}

int	reverse_putnbr(char *c)
{
	int i = 0 ;
	int a = 0 ;
if (c[0] == '\0')
{
	return 0 ;
}
	while (c[i] != '\0')
	{
		i++;
	}
	if (c[0] != '-')
	{
		a = (c[0] - 48) * pow(10, (i - 1)) + reverse_putnbr(&c[1]) ;
	}
	else
	{
		a = -1 * reverse_putnbr(&c[1]) ;
	}
	return a ;
}
