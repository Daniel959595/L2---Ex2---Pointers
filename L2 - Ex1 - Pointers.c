#include <stdio.h>
#include <stdlib.h>

int* get_copy(int* arr, int size) {
    int* copy = (int*)malloc(size * sizeof(int));

    if (copy == NULL) {
        printf("Alocation Failed\n");
        exit(1);
    }

    for (int i = 0; i < size; i++)
        copy[i] = arr[i];

    return copy;
}


int is_palindrom(char* arr) {
    int size = strlen(arr);

    int i = 0, j = size - 1;

    while (i < j) {
        if (arr[i] != arr[j])
            return 0;
        i++;
        j--;
    }

    return 1;
}

void change_org(int** p) {

    *(*p) = 100;
}

void create_matrix(int n, int m) {
    srand(time(NULL));
    int** mat = (int**)malloc(n * sizeof(int*));
    if (mat == NULL) {
        printf("Alocation Failed\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        mat[i] = (int*)malloc(m * sizeof(int));
        if (mat[i] == NULL) {
            printf("Alocation Failed\n");
            exit(1);
        }
        for (int j = 0; j < m; j++)
            mat[i][j] = rand() % 100;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
        free(mat[i]);
    free(mat);
}

int main()
{
    // Comment out the required question
    // 
    // 
   
    // *********** Q2 ************
    /*int arr[5] = { 1, 2, 3, 4, 5 };
    int* copy = get_copy(arr, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", copy[i]);

    free(copy);*/


    // *********** Q3 ************
    /*char* s1 = "12321";
    char* s2= "12344321";

    printf("%d\n", is_palindrom(s1));
    printf("%d\n", is_palindrom(s2));*/


    // *********** Q4 ************
    /*int a = 0;
    int *p = &a;
    change_org(&p);

    printf("a = %d\n", a);*/


    // *********** Q5 ************
    //create_matrix(5, 5);


    // *********** Q6 ************
    // In the loop condition, 
    // it should be < not <=


    // *********** Q7 ************
    // When you write name++ you move the pointer 
    // to the next chatacter, so when you free the
    // space youre not freeing the first char element
   
    return 0;
}