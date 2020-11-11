#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct
{
	char name[10];
	int id;
	int mark;
}student;
 
void quicksort(student *A, int len)
{
  if (len < 2) return;
 
  student pivot = A[len / 2];
 
  int i, j, band = 1;
  for (i = 0, j = len - 1; ; i++, j--)
  {
    while(band)
    {	
    	if(A[i].mark <= pivot.mark)
    	{
    		if(A[i].mark == pivot.mark)
    		{
	    		if(strcmp(A[i].name,pivot.name) == 0)
    			{
	    			if(A[i].id >= pivot.id)
	    				band = 0;
	    		}
	    		else
	    		{
   	 				if(strcmp(A[i].name,pivot.name) > 0)
    					band = 0;
    			}
    		}
    		else
    			band = 0;
    	}
    	if(band)
    		i++;
    }
    while (!band)
    {
    	if(A[j].mark >= pivot.mark)
    	{
    		if(A[j].mark == pivot.mark)
    		{
	    		if(strcmp(A[j].name,pivot.name) == 0)
   		 		{
    				if(pivot.id >= A[j].id)
    					band = 1;
 		   		}
    			else
    			{
    				if(strcmp(pivot.name,A[j].name) > 0)
    					band = 1;
    			}
    		}
    		else
    			band = 1;
    	}
    	if(!band)
    		j--;
    }
 
    if (i >= j) break;
 
    student temp = A[i];
    A[i]     = A[j];
    A[j]     = temp;
  }
 
  quicksort(A, i);
  quicksort(A + i, len - i);
}
 
int main()
{
	student *v;
	int n, i;
 
	scanf("%d", &n);
	v = (student *)malloc(n * sizeof(student));
	for(i = 0 ; i < n ; i++)
		scanf("%s %d %d", v[i].name, &v[i].id, &v[i].mark);
	quicksort(v,n);
	for(i = 0 ; i < n ; i++)
		printf("%s %d %d\n", v[i].name, v[i].id, v[i].mark);
	free(v);
	return 0;
}