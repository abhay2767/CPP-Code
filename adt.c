#include<stdio.h>
#include<stdlib.h>
struct myArray
{
	int total_size;
	int used_size;
	int *ptr;
};

void createArray(struct myArray *a, int tsize, int usize)
{
	/*
	(*a).total_size = tsize;
	(*a).used_size = usize;
	(*a).ptr = (int *) malloc(tsize*sizeof(int));
	*/
	//          or
	a->total_size = tsize;
	a->used_size = usize;
	a->ptr= (int *)malloc(tsize*sizeof(int));
}

void show(struct myArray a)
{
	int i;
	for(i = 0; i< a->used_size; i++)
	{
		Printf("%d\n",(a->ptr)[i]);
	}
}
void setval(struct myArray *a)
{
	int i,n;
	for(i = 0; i< a->used_size; i++)
	{
		printf("Enter Element %d",i);
		scanf("%d",&n);
		(a->ptr)[i] = n;
	}
}


int main()
{
	struct myArray marks;
	createArray(&marks, 10, 2);
	printf("We are now running setval()\n");
	setval(&marks);
	
	printf("We are now running show()\n");
	show(&marks);	
	return  0;
}
