#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 动态数组结构
typedef struct {
    int* data;      // 数据数组
    int capacity;   // 数组容量
    int size;       // 当前元素个数
} DynamicArray;

// 初始化动态数组
void initArray(DynamicArray* arr, int initCapacity) {
    arr->data = (int*)malloc(initCapacity * sizeof(int));
    arr->capacity = initCapacity;
    arr->size = 0;
}

// 扩容数组（如果需要）
void ensureCapacity(DynamicArray* arr, int minCapacity) {
    if (minCapacity > arr->capacity) {
        int newCapacity = arr->capacity * 2;
        if (newCapacity < minCapacity) {
            newCapacity = minCapacity;
        }

        int* newData = (int*)malloc(newCapacity * sizeof(int));
        // 复制原数据
        for (int i = 0; i < arr->size; i++) {
            newData[i] = arr->data[i];
        }

        free(arr->data);
        arr->data = newData;
        arr->capacity = newCapacity;
    }
}

// 1. 末尾添加元素
void append(DynamicArray* arr, int value) {
    ensureCapacity(arr, arr->size + 1);
    arr->data[arr->size] = value;
    arr->size++;
}

// 2. 删除末尾元素
void pop(DynamicArray* arr) {
    if (arr->size > 0) {
        arr->size--;
    }
}

// 3. 获取下标为i的元素
int get(DynamicArray* arr, int index) {
    return arr->data[index];
}

// 4. 在位置i插入元素
void insert(DynamicArray* arr, int index, int value) {
    ensureCapacity(arr, arr->size + 1);

    // 将index及之后的元素后移
    for (int i = arr->size; i > index; i--) {
        arr->data[i] = arr->data[i - 1];
    }

    arr->data[index] = value;
    arr->size++;
}

// 5. 升序排序（使用qsort）
int compareAsc(const void* a, const void* b) {
    return (*(int*)a - * (int*)b);
}

// 6. 降序排序
int compareDesc(const void* a, const void* b) {
    return (*(int*)b - * (int*)a);
}

void sortArray(DynamicArray* arr, int ascending) {
    if (ascending) {
        qsort(arr->data, arr->size, sizeof(int), compareAsc);
    } else {
        qsort(arr->data, arr->size, sizeof(int), compareDesc);
    }
}

// 7. 获取长度
int getSize(DynamicArray* arr) {
    return arr->size;
}

// 8. 打印整个序列
void printArray(DynamicArray* arr) {
    for (int i = 0; i < arr->size; i++) {
        printf("%d", arr->data[i]);
        if (i < arr->size - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

// 释放数组内存
void freeArray(DynamicArray* arr) {
    free(arr->data);
    arr->data = NULL;
    arr->capacity = 0;
    arr->size = 0;
}

int main() {
    DynamicArray arr;
    initArray(&arr, 10);  // 初始容量为10

    int q;
    scanf("%d", &q);

    while (q--) {
        int opt;
        scanf("%d", &opt);

        switch (opt) {
            case 1: {  // 末尾添加
                    int x;
                    scanf("%d", &x);
                    append(&arr, x);
                    break;
                }
            case 2: {  // 删除末尾
                    pop(&arr);
                    break;
                }
            case 3: {  // 输出下标为i的元素
                    int i;
                    scanf("%d", &i);
                    if (i >= 0 && i < arr.size) {
                        printf("%d\n", get(&arr, i));
                    }
                    break;
                }
            case 4: {  // 在位置i插入
                    int i, x;
                    scanf("%d %d", &i, &x);
                    if (i >= 0 && i < arr.size) {
                        insert(&arr, i, x);
                    }
                    break;
                }
            case 5: {  // 升序排序
                    sortArray(&arr, 1);  // 1表示升序
                    break;
                }
            case 6: {  // 降序排序
                    sortArray(&arr, 0);  // 0表示降序
                    break;
                }
            case 7: {  // 输出长度
                    printf("%d\n", getSize(&arr));
                    break;
                }
            case 8: {
                    printArray(&arr);
                    break;
                }
        }
    }

    freeArray(&arr);
    return 0;
}
