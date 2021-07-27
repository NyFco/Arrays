#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n,m;
	printf("Enter the amount of your array's elements:\n");
	scanf("%d",&n);
	
	int a[n],b[n+1],i,j;
	
	printf("Enter the elements of your array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter the number that you want to add to your array:\n");
	scanf("%d",&m);
	
	for(i=0;i<n;i++){
		if (m>a[i]) b[i]=a[i];
		else {
			b[i]=m;
			for(j=i+1;j<n+1;j++) b[j]=a[j-1];
			break;
		}
	}
	
	printf("Your array before adding: {");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("}\n");
	
	printf("Your array after adding: {");
	for(i=0;i<n+1;i++){
		printf("%d ",b[i]);
	}
	printf("}\n");
	
	return 0;
}
