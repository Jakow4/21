#include <stdio.h>
#include <stdlib.h>

typedef struct matrita 
{
	float value_element;
	int i;
	int j;
	struct matrita * next;
}matrix;

int main(void)
{
	return 0;
}

matrix * create_matrix(unsigned int n, unsigned int m)
{
	matrix * p_new_matrix = (matrix *)malloc(sizeof(matrix));
	for(int k = 1; k <= m; ++k)
	{
		for(int k_1 = 1; k_1 <= n; ++k_1)
		{
		matrix element;
		element.value_element = 0;
		element.i = k_1;
		element.j = k;
		element.next = element.next->next;
		}
	}
	return p_new_matrix;
}
