#include <stdio.h>
#include <stdlib.h>

int main(){

	int n,m;
	printf("Enter the amount of your array's elements:\n");
	scanf("%d",&n);
	
	int a[n],b[n-1],i,j;
	
	printf("Enter the elements of your array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter the element's number that you want to delete from your array(0-%d):\n",n-1);
	scanf("%d",&m);
	
	for(i=0;i<m;i++) b[i] = a[i];
	for(i=m+1;i<n;i++) b[i-1]=a[i];
	
	printf("Your array before deletion: {");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("}\n");
	
	printf("Your array after deletion: {");
	for(i=0;i<n-1;i++){
		printf("%d ",b[i]);
	}
	printf("}\n");
	
	return 0;
}









