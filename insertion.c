#include <stdio.h>
#include <stdbool.h>
int main()
{

    int arr[50];
    int size = 0;
    int number = 0;
    int position = 0;
    bool check;
    
    //get the size of array
    printf("Enter size of array : ");
    scanf("%d", &size);

    //get user inputs as elemenets of array
    printf("Enter elements for array , \n");
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    
    //print the array that user given
    printf("The array is below, \n");
    for (int j = 0; j < size; ++j)
    {
        printf("%d ", arr[j]);
    }
    
    // ask the user the number and position that want to insert new element
    printf("\nEnter the number you want to insert : ");
    scanf("%d",&number);
    
    printf("Enter the position you want to insert : ");
    scanf("%d",&position);
    
    // check the user given position is valid or not
    if(position <=0 || position > size+1){
        printf("The position is invalid!");
        check = false;
    }else{
        check = true;
        //shifting the elements of array until user given position
        for(int k = size - 1 ; k >= position -1; k--){
            arr[k+1] = arr[k];
        }
        
        // assigning the user given element to the given position
        arr[position-1] = number;
        size++;
    }
    if(check){
    //print the updated arry
    printf("The updated array,\n");
    for(int l = 0; l < size;l++){
        printf("%d ",arr[l]);
    }
    }
    return 0;
}
