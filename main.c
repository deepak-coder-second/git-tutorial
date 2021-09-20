//TODO: Remove duplicate element from array
#include <stdio.h>

int main(){
    //variable declaration
    int i,n,j,k;
    //array declaration and intilization
    int array[]={1,3,3,6,4,6,4,6,2,5};

    //size of array
    n = sizeof(array)/sizeof(array[0]);

    //print array before remove the elements
    printf("Elements in array before removing elements:");
    printf("[");
    for(i=0;i<n;i++){
        printf(" %d ,",array[i]);
    }
    printf("]");
    //remove duplicate elements
    for(i=0;i<n;i++){
        //comparision loop
        for(j=i+1;j<n;j++){
            //check
            if(array[i]==array[j]){
                //if element exist left shifting of elements 
                for(k=j;k<n;k++){
                    array[k]=array[k+1];
                }
                //after left shifting of elements the size will be reduced
                n--;
                //after shifting (i+2)th indexed number become (i+1)the 
                //which element we don't compared yet so 
                j--;
            }

        }
    }

    //print array after deleting the duplicates
    printf("\nArray after deleting duplicate elements:");
    printf("[");
    for(i=0;i<n;i++){
        printf(" %d ,",array[i]);
    }
    printf("]");

    return 0;
}
