/*
    2D array = An array where each element is an array
                array[][] = {{}, {}, {}};

    Row-Major Memory Layout
    -> C stores 2D arrays in contiguos, linear memory row by row (row-major order).

    The 2D array `int numbers[3][3]` is actually stored sequentially as:
    [ 1 | 2 | 3 ] [ 4 | 5 | 6 ] [ 7 | 8 | 9]
        Row 0         Row 1         Row 2
    `numbers` is an "array of 3 arrays of 3 integers"
    - `numbers[0]` (distinct concrete entity in C) --> It's the first subarray (`int[3]`)
    - A column (e.g. `{1,4,7}`) is scattered across memory. Its elements are separated by other numbers, not packing together. C has no data type or syntax representing slice across sub-arrays

    How to calculate the size of a Column?
    // Total bytes in one column = (number of rows) * (size of one element)
    `size_t col_bytes = (sizeof(numbers) / sizeof(numbers[0])) * sizeof(numbers[0][0])`
*/
#include <stdio.h>

int main() {
    int numbers[4][3] = {{1,2,3},
                         {4,5,6},
                         {7,8,9},
                         {10,11,12}};
    
    printf("%d\n", sizeof(numbers));
    printf("%d\n", sizeof(numbers[0])); // number of bytes per row
    printf("%d\n", sizeof(numbers)/sizeof(numbers[0])); // number of rows (length of a column in the 2D array)

    for(int i=0; i<(sizeof(numbers)/sizeof(numbers[0])) ; i++){
        for(int j=0; j<sizeof(numbers[0])/sizeof(numbers[0][0]); j++){
            printf("%d",numbers[i][j]);
        }
        printf("\n");
    }
    
    // ================================================

    char numpad[][3] = {{'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'},
                        {'*','0','#'}};

    printf("\n**** Printing a Kyboard in terminal... ****\n");

    for(int i=0; i<sizeof(numpad)/sizeof(numpad[0]); i++){
        for(int j=0; j<sizeof(numpad[0])/sizeof(numpad[0][0]); j++){
            printf("%c", numpad[i][j]);
        }
        printf("\n");
    }

    return 0;
}