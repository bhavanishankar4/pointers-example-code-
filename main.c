#include <stdio.h>
#include <stdlib.h>
int main () 
{
	int * ptr;
	int n,i;
	n=5;
	printf("enter no of elements %d\n",n);
	ptr= (int*) calloc (n,	sizeof (int));
	if (ptr=NULL)
	{
		printf("memory not allocated\n");
		exit(0);
	}
	else 
	{
		printf("memory allocated by calloc ");
		 for (i=0;i<n;++i)
		 {
		 ptr[i]=i+1;
	}
	printf("the elements are:");
	for (i=0;i<n;++i)
	{
		printf("%d",ptr[i]);
	}
	n=10;
	printf("enter new size:%d\n",n);
	ptr=realloc(ptr,n*(sizeof (int)));
	printf("memory successfully reollacated using realloc\n");
	for (i=5;i<n;++i)
	{
		ptr[i]=i+1;
	}
	printf("the elements of the array ar:");
	for (i=0;i<n;++i)
	{
		printf("%d",ptr[i]);
	
	}
	free(ptr);
}
return 0;
}