// #include <stdio.h>
// // set each element of the array to -1
// int main(){
//     int arr1[10]= {0,1,2,3,4,5,6,7,8,9};
//     int i, arr2[10];
//     for(i=0;i<10;i++){
//         arr2[i] = i*2;
//     }
//     for(i=0;i<10;i++){
//         printf("%d ",arr2[i]);
//     }

// }

/* OPERATIONS ON ARRAYS
    ∑ Traversing an array
    ∑ Inserting an element in an array
    ∑ Searching an element in an array
    ∑ Deleting an element from an array
    ∑ Merging two arrays
    ∑ Sorting an array in ascending or descending order
*/

/*Traversing an array*/

// 1. Write a program to read and display n numbers using an array.

// #include <stdio.h>
// int main(){
//     int i,n, arr[20];
//     printf("Enter thte number of elements in the array: ");
//     scanf("%d", &n);
//     for(i=0;i<n;i++){
//         printf("\narr[%d] = ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("\nThe array element are: ");
//     for(i=0;i<n;i++){
//         printf("\t%d", arr[i]);
//     }
//     printf("\n");
// }

// 2. Write a program to find the mean of n numbers using arrays.

// #include <stdio.h>
// int main(){
//     int i,n, arr[20], sum=0;
//     float mean=0.0;
//     printf("Enter thte number of elements in the array: ");
//     scanf("%d", &n);
//     for(i=0;i<n;i++){
//         printf("\narr[%d] = ", i);
//         scanf("%d", &arr[i]);
//     }

//     for(i=0;i<n;i++){
//         sum = sum + arr[i];
//     }
//     mean = (float)sum/n;
//     printf("The mean of teh array elements = %.2f\n", mean);
// }

// 3. Write a program to print the position of the smallest number of n numbers using arrays.

// #include <stdio.h>
// int main(){
//     int i,n, arr[20], small, pos;
//     printf("Enter thte number of elements in the array: ");
//     scanf("%d", &n);
//     for(i=0;i<n;i++){
//         printf("\narr[%d] = ", i);
//         scanf("%d", &arr[i]);
//     }

//     pos = 0;
//     small = arr[0];
//     for(i=0;i<n;i++){
//         if (small>arr[i]){
//             small = arr[i];
//             pos = i;
//         }
//     }
//     printf("The smallest element is : %d\n", small);
// printf("The position of the smallest element in the array is : %d\n", pos);
// }

// 4. Write a program to find the second largest of n numbers using an array.

// #include <stdio.h>
// int main()
// {
//     int i, n, arr[20], large, second_large, pos;
//     printf("Enter thte number of elements in the array: ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("\narr[%d] = ", i);
//         scanf("%d", &arr[i]);
//     }

//     large = arr[0];
//     for (i = 0; i < n; i++)
//     {
//         if (large < arr[i])
//         {
//             large = arr[i];
//         }
//     }

//     second_large = arr[1];
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] != large)
//         {
//             if (second_large < arr[i])
//             {
//                 second_large = arr[i];
//             }
//         }
//     }
//     printf("largest nmber is : %d\n", large);
//     printf("Second largest nmber is : %d\n", second_large);
// }



// 5. Write a program to find whether the array of integers contains a duplicate number.

// #include <stdio.h>
// int main(){
//     int i,j,n, arr[20], flag=0;
//     printf("Enter thte number of elements in the array: ");
//     scanf("%d", &n);
//     for(i=0;i<n;i++){
//         printf("\narr[%d] = ", i);
//         scanf("%d", &arr[i]);
//     }
//     for(i=0;i<n;i++){
//         for(j=1;j<n;j++){
//             if(arr[i]==arr[j]&& i!=j){
//                 flag = 1;
//                 printf("Duplicate number found at locations at location %d and %d and number is %d\n", i, j, arr[i]);
//             }
//         }
//     }
//     if(flag==0){
//         printf("No duplicates Found\n");
//     }
// }



/*Inserting an Element in an Array*/


// 1. Write a program to insert a number at a given location in an array.







