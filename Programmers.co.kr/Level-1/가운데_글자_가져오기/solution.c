#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    char* answer = (char*)malloc(1);
    char arr[strlen(s)];
    char arrs[3];
    strcpy(arr, s);
    int k = strlen(s);
    int i = 0, j = 0;
    if(k % 2 == 0) {
        j = k / 2, i = j - 1;
        arrs[0] = arr[i];
        arrs[1] = arr[j];
    } else {
        i = k /2;
        arrs[0] = arr[i];
    }
    strcpy(answer, arrs);
    return answer;
}
