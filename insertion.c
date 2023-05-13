#include<stdio.h>
int main()
{
	int n,i,key,j;
	printf("enter arrya size=");
	scanf("%d",&n);
	int ar[n];
	printf("Enter element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=1;i<n;i++)
	{
		key=ar[i];
		j=i-1;
	 while(j>=0 && ar[j]>key)
	 {
	 	ar[j+1]=ar[j];
	 	j=j-1;
	 }
	 ar[j+1]=key;
    }
	for(i=0;i<n;i++)
	{
		printf("%d",ar[i]);
	}
}
	 
	
