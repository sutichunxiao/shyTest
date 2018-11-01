#include <stdio.h>

int main(int argc,char * argv)
{
	int i = 0.j = 0;
	i = 2;
	j = 3;
	i = i^j;
	j = i^j;
	i = i^j;
	printf("%d  %d",i, j);
	return 0;
}
