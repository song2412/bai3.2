#include<stdio.h>
int main()
{
	int a[100];
	int n;
	printf("Nhap so luong phan tu n:");
	do{
		scantf("%d",&n);
		 
		if(n<=0) {
			printf(" nhap lai n:0") 
		}
 } whlie(n<1 || n>100);
    for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scantf("%d",&a[i]) ;
	 } 

	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
		{
		int tam=a[i];
		a[i]=a[j];
		a[j]=tam;	
		 } 
	}

	 printf("\n mang giam dan: ");
	 sapgiam(a,n);
	} 
 
