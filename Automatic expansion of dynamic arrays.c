#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = NULL;   
    int capacity = 2;    
    int currentSize = 0;       
    int input;

    array = (int *)malloc(capacity * sizeof(int)); 

    printf("请输入数字，以-1结束:\n");
    while (scanf("%d", &input) == 1 && input != -1) {

        if (currentSize >= capacity) {

            capacity *= 2;
            int *temp = (int *)realloc(array, capacity * sizeof(int));
            if (temp == NULL) {
                printf("内存分配失败！\n");
                free(array);
                return 1;
            }
            array = temp;
            printf("（数组已自动扩容至 %d)\n", capacity);
        }

        array[currentSize] = input;
        currentSize++;
    }

    printf("输入了 %d 个数字：\n", currentSize);
    for (int i = 0; i < currentSize; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\n");

    free(array);
    return 0;
}
