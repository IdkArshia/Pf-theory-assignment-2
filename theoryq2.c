#include <stdio.h>
int main()
{
	int a,i,x;
	int flag=0;
	int c=0;
	int count[26];
	char alph[26];
	char s1[15];
	
	// get slogan from user
	printf("enter slogan:");
	gets(s1);
	a=strlen(s1);
	
	//initialize the count array to 0
	for(i=0;i<26;i++)
	{
		count[i]=0;	
	}
	
	
	//initialize the alphabet array to 0
	for(i=0;i<26;i++)
	{
		alph[i]=0;	
	}
	
	
	// compare each letter of the slogan to every alphabet in the alphabet array
	for(i=0;i<a;i++)
	{
		flag=0;
		for(x=0;x<26;x++)
		{
			//if the letter exists in alphabet array, increment count
			if(s1[i]==alph[x])
			{
				count[x]=count[x] + 1;
				flag=1;
				break;
			}
			
		}
		//add the letter to the albhabet array if it does not already exists and increment count
		if(flag==0)
		{
			alph[c]=s1[i];
			count[c]=count[c]+1;
			c=c+1;
		}
		
	}
	
	
	// print all alphabets that occur atleast once
	for(i=0;i<26;i++)
	{
		if(count[i]>0)
		{
			printf("%c:%d ",alph[i],count[i]);
		}
	}
}