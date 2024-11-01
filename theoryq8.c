#include<stdio.h>
#include<math.h>
#include<string.h>
int HexadecimalToDecimal(char hexNumber[]);
void DecimalToHexadecimal( int number);
void BinaryToHexadecimal(int number);
void HexadecimalToBinary(char hexNumber[]);
int DecimalToBinary(int number);
int BinaryToDecimal(int number);



int BinaryToDecimal(int number)
{
	int ans,rem,i;
	i=0;
	ans=0;
	while(number!=0)
	{
		rem=number%10;
	    number=number/10;
	    ans=ans+(rem*pow(2,i));
	    i=i+1;
	}
	//printf("entered number in decimal: %d",ans);
	return ans;
}



int DecimalToBinary(int number)
{
	int rem[50],i,j;
	i=0;
	while(number!=0)
	{
		rem[i]=number%2;
		number=number/2;
		i=i+1;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",rem[j]);
	}
	
}



void DecimalToHexadecimal(int number)
{
	int j;
	int i=0;
	int k=0;
	int rem[40];
	char ans[40];
	while(number!=0)
	{
		rem[i]=number%16;
	    number=number/16;
	    i=i+1;
	}
	for(j=i-1;j>=0;j--)
	{
		if(rem[j]<10)
		{
			ans[k]=rem[j];
			printf("%d",ans[k]);
		}
		else if(rem[j]==10)
		{
			ans[k]='A';
			printf("%c",ans[k]);
		}
		else if(rem[j]==11)
		{
			ans[k]='B';
			printf("%c",ans[k]);
		}
		else if(rem[j]==12)
		{
			ans[k]='C';
			printf("%c",ans[k]);
		}
		else if(rem[j]==13)
		{
			ans[k]='D';
			printf("%c",ans[k]);
		}
		else if(rem[j]==14)
		{
			ans[k]='E';
			printf("%c",ans[k]);
		}
		else if(rem[j]==15)
		{
			ans[k]='F';
			printf("%c",ans[k]);
		}
		k=k+1;
	}
	
	
	
}



int HexadecimalToDecimal(char hexNumber[])
{
	int a,i,j,ans;
	ans=0;
	j=0;
	 a=strlen(hexNumber);
	 
	 for(i=a-1;i>=0;i--)
	 {
	 	if(hexNumber[i]=='A' || hexNumber[i]=='a')
	 	{
	 	   ans=ans+(10*pow(16,j));	
		}
		else if(hexNumber[i]=='B' || hexNumber[i]=='b')
		 {
		 	ans=ans+(11*pow(16,j));
		 }
		else if(hexNumber[i]=='C' || hexNumber[i]=='c')
		 {
		 	ans=ans+(12*pow(16,j));
		 }
		else if(hexNumber[i]=='D' || hexNumber[i]=='d')
		 {
		 	ans=ans+(13*pow(16,j));
		 }
		else if(hexNumber[i]=='E' || hexNumber[i]=='e') 
		{
			ans=ans+(14*pow(16,j));
		}
		else if(hexNumber[i]=='F' || hexNumber[i]=='f')
		{
			ans=ans+(15*pow(16,j));
		}
		else
		{
			ans=ans+((hexNumber[i]-48)*pow(16,j));
		}
		
	 	j=j+1;
	 }
	 //printf("decimal: %d",ans);
	 return ans;
}




void BinaryToHexadecimal(int number)
{
	int num;
	num=BinaryToDecimal(number);
	DecimalToHexadecimal(num);
}



void HexadecimalToBinary(char hexNumber[])
{
	int num;
	num=HexadecimalToDecimal(hexNumber);
	DecimalToBinary(num);
}

int main()

{
	int n,num,ans;
	char hex[20];
	printf("binary to decimal: 1\ndecimal to binary:2\ndecimal to hexadecimal:3\nhexadecimal to decimal:4\nbinary to hexadecimal:5\nhexadecimal to binary:6");
	printf("\nenter choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("enter number in binary: ");
			scanf("%d",&num);
			ans=BinaryToDecimal(num);
			printf("number in decimal: %d",ans);
			break;
		case 2:
			printf("enter number in decimal: ");
			scanf("%d",&num);
			DecimalToBinary(num);
			break;
		case 3:
			printf("enter number in decimal: ");
			scanf("%d",&num);
			DecimalToHexadecimal(num);
			break;	
		case 4:
			printf("enter number in Hexadecimal: ");
			scanf("%s",&hex);
		    ans=HexadecimalToDecimal(hex);
		    printf("%d",ans);
		    break;
		case 5:
			printf("enter number in binary: ");
			scanf("%d",&num);
			BinaryToHexadecimal(num);
		case 6:
			printf("enter number in hexadecimal: ");
			scanf("%s",&hex);
			HexadecimalToBinary(hex);
			break;
		default:
			printf("invalid choice");
			
				
			
	}
}