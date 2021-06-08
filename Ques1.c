#include<stdio.h>
#define INT_MAX 2e18

void findTwoSmallestElements(int arr[],int n){
    
    int first = INT_MAX;
    int second = INT_MAX;

    for (int i = 0; i < n ; i ++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }

        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
        printf("All elements are same\n");
    else
        printf("The smallest element is %d and second "
               "smallest element is %d\n", first, second);

}
int main(){
    
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);

    }
    findTwoSmallestElements(arr,n);
    return 0;
}