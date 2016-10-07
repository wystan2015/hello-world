#include <stdio.h>

int main()
{
	size_t nmem;
	
	scanf("%zd",&nmem);
	char test[nmem];
	
	printf("size of array is :%ld\n",sizeof(test));
	
	scanf("%s",test);
	getchar();
	
	printf("array is :%s\n",test);

	return 0;
}
