#include<stdio.h>
int main(){
    int a[20];
    int size;
    int i;
    int choice;
    int place, value;
    printf("Enter the size of the array = ");
    scanf("%d",&size);
    for(i = 0; i < size; i++){
        printf("Enter the elements of the array a[%d] = ", i);
        scanf("%d",&a[i]);
    }
    printf("What you want to do ?\n");
    printf("1 for transversing\n");
    printf("2 for inserting\n");
    printf("3 for deletion\n");
    printf("4 for binary search\n");
    printf("5 for leniar search\n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            printf("Transversing function initiated...\n");
            for(i = 0; i < size; i++ ){
                printf("Value of a[%d] is %d \n",i,a[i]);
            }
            printf("End");
            break;
        
        case 2:
            printf("Insertion function initiated...\n");
            printf("The place where you want to insert the value = ");
            scanf("%d",&place);
            printf("The value which you want to insert = ");
            scanf("%d",&value);
            for(i = size; i >= place; i--){
                a[i] = a[i-1];
            }
            a[place] = value;
            size = size + 1;
            for(i = 0; i < size; i++ ){
                printf("Value of a[%d] is %d \n",i,a[i]);
            }
            printf("End");
            break;
        
        case 3: 
            printf("Deletion function initiated...\n");
            printf("The place where you want to delete the value = ");
            scanf("%d",&place);
            for(i = place; i < size - 1; i++){
                a[i] = a[i+1];
            }
            size = size - 1;
            for(i = 0; i < size; i++ ){
                printf("Value of a[%d] is %d \n",i,a[i]);
            }
            printf("End");
            break;
        
        case 4: 
            printf("Binary Search function initiated...\n");
            printf("The value which you want to find = ");
            scanf("%d", &value);
            for(i = 0; i < size; i++ ){
                if (a[i] == value){
                    printf("Value of a[%d] is %d \n", i, a[i]);
                }
            }
            break;
    }
    return 0;
}
