#include <stdio.h>
#include <limits.h>

int main() {
	int i,temp;
	int arr[5];
	for(i=0;i<5;i++)
	{
	    printf("enter element %d: ",i+1);
	    scanf("%d",&temp);
	    while(temp>9999)
	    {
	    	printf(" number is too large, try again:");
	    	scanf("%d",&temp);
	    
		}
		arr[i]=temp;
    }
	int sml,sec_sml;
	sml=999999;
	for(i=0;i<5;i++)
	{
		 if (arr[i] < sml) 
		{
            sec_sml = sml; 
            sml = arr[i]; 
        } else if (arr[i] < sec_sml && arr[i] != sml) 
		{
            sec_sml = arr[i]; 
        }
	}
	printf("The second smallest element in the array is: %d\n", sec_sml);
    

    return 0;
}