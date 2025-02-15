#include <stdio.h>
void main(){
    int a[20];
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Value of a[%d]",i);
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are:");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
