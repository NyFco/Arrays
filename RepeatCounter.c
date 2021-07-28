#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("How many numbers do you have in your array: \n");
    int n;
    scanf("%d",&n);
    int a[n],i,x,c=0;

    printf("%s","Enter the elements of your array: \n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("%s","Enter a number: \n");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if (a[i]==x){
            c++;
        }
    }

    printf("\nNumber %d has been repeated in your array for %d time(s)\n",x,c);

    return 0;
}
