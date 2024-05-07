#include <iostream>

using namespace std;

int main() {
    //one dimension
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++) {
        printf("%d index = %d\n", i, arr[i]);
    }

    cout << "arr also a pointer represent the first element address in the array" << endl;
    printf("arr: %p, &arr[0]: %p, *(arr): %d\n", arr, &arr[0], *(arr));
    printf("arr + 1: %p, &arr[1]: %p, *(arr+1): %d\n", arr + 1, &arr[1], *(arr + 1));

    //two dimension
    int arr2[][5] = {{1,  2,  3,  4,  5},
                     {6,  7,  8,  9,  10},
                     {11, 12, 13, 14, 15}};
    int row = sizeof(arr2) / sizeof(arr2[0]);
    int column = sizeof(arr2[0]) / sizeof(int);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("[%d][%d]: %d\t", i, j, arr2[i][j]);
        }
        printf("\n");
    }
    //two dimension pointer
    printf("arr2: %p, &arr2[0]: %p, &arr2[0][0]: %p, *arr2: %p\n", arr2, &arr2[0], &arr2[0][0], *arr2);
    printf("*arr2[0]: %d, **arr2: %d, arr2[0][0]: %d\n", *arr2[0], **arr2, arr2[0][0]);
    printf("arr2 + 1: %p, arr2[1]: %p, &arr2[1][0]: %p, *(arr2 + 1): %p\n", arr2 + 1, arr2[1], &arr2[1][0],
           *(arr2 + 1));
    printf("arr2[1] + 1: %p, &arr2[1][1]: %p, *((arr2 + 1) + 1): %p", arr2[1] + 1, &arr2[1][1], (*(arr2 + 1) + 1));
}