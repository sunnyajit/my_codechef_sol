#include <stdio.h>
#include <stdlib.h>
// code written by sunny
int main() {
    int testCases;
    scanf("%d", &testCases);
    while (testCases--) {
        int arraySize;
        scanf("%d", &arraySize);
        int array[arraySize];
        for (int i = 0; i < arraySize; i++) {
            scanf("%d", &array[i]);
        }
        int leftIndex = 0;
        while (leftIndex < arraySize && array[leftIndex] <= 0) {
            leftIndex++;
        }
        int rightIndex = arraySize - 1;
        while (rightIndex >= 0 && array[rightIndex] <= 0) {
            rightIndex--;
        }
        if (rightIndex <= leftIndex) {
            printf("0\n");
        } else {
            int negativeCount = 0;
            for (int i = leftIndex; i <= rightIndex; i++) {
                if (array[i] < 0) {
                    negativeCount++;
                }
            }
            printf("%d\n", negativeCount);
        }
    }
    
    return 0;
}
