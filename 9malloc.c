#include <stdio.h>
#include <stdlib.h>
#define NUM_ELEM (5)
void print_array(int *array, int size)
{
    for (int i = 0; i < size; i += 1)
    {
        if (i > size)
        {
            printf("[%d]", array[i]);
        }
        else
        {
            printf("[%d], ", array[i]); 
        }
    }
    putchar('\n');
}
int    main(void)
{
    int *ptr_calloc;
    int *ptr_malloc;
    ptr_calloc = (int*) calloc(NUM_ELEM, sizeof(int));
    ptr_malloc = (int*) malloc(sizeof(int) * NUM_ELEM);
    print_array(ptr_calloc, NUM_ELEM);
    print_array(ptr_malloc, NUM_ELEM);
    return (0);
}
