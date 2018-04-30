#include <stdio.h>

typedef int (*t_fct)(int, int);

int	sub(int a, int b)
{
	return a - b;
}

int	add(int a, int b)
{
	return a + b;
}

int	mlt(int a, int b)
{
	return a * b;
}

int	div(int a, int b)
{
	return a / b;
}

t_fct	function_factory(int i)
{
	t_fct	arr[4];

	arr[0] = &sub;
	arr[1] = &add;
	arr[2] = &mlt;
	arr[3] = &div;

	return arr[i];
}

int	main()
{
	printf("%i\n", function_factory(0)(4, 2));
	printf("%i\n", function_factory(1)(4, 2));
	printf("%i\n", function_factory(2)(4, 2));
	printf("%i\n", function_factory(3)(4, 2));

	return 0;
}