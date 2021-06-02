#include <stdio.h>

int main(){
    int n;
    int *int_arr;
    printf("How many integers do you have?");
    scanf("%d", &n);
    int_arr = malloc(n * sizeof(int));
    if (int_arr == NULL) printf("Uh oh. \n");

    //Loop over array and store integers entered
}

typedef struct _listnode {
    int item;
    struct listnode * next;
} ListNode; 