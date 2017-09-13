#include <printf.h>
#include <string.h>

//
// Created by 风林 on 2017/8/10.
//

void stringCopy1(char *source, char *target);

void stringCopy2(char *source, char *target);

int stringCount(char *source, char *flag, int *length);

int stringTrim(char *in, char *out);

int stringReverse(char *str);

int arrayPrint(char **array, int len);

int arrayPrint2(char array[4][4], int len);

int mainCopy() {
    char *source = "hello";
    char *target;
    char buf[1024];
    target = buf;
    stringCopy2(source, buf);
    printf("target:%s,%s,%ld,%ld", target, buf, sizeof(buf), strlen(target));
    return 0;
}

void stringCopy1(char *source, char *target) {
    int i;
    for (i = 0; *(source + i) != '\0'; i++) {
        *(target + i) = *(source + i);
    }
    *(target + i) = '\0';
}

void stringCopy2(char *source, char *target) {
    while ((*target++ = *source++) != 0) {}
}

int mainCount() {
    char *source = "hello43urfldknvhellosofhw8hellofd";
    char *target = "hello";
    int result;
    int temp = stringCount(source, target, &result);
    printf("%d\n", temp);
    printf("%d\n", result);
    return 0;
}

int stringCount(char *source, char *flag, int *length) {
    char *tempSource = source;
    int result = 0;
    while (tempSource != '\0') {
        tempSource = strstr(tempSource, flag);
        printf("%s\n", tempSource);
        if (tempSource != NULL) {
            result++;
            tempSource = tempSource + strlen(flag);
        }
    }
    *length = result;
    return 0;
}

int mainTrim() {
    char *in = "   asfs    ";
    char out[1024];
    stringTrim(in, out);
    printf("%s", out);
    return 0;
}

int stringTrim(char *in, char *out) {
    if (in == NULL || out == NULL) {
        return -1;
    }
    int start = 0;
    int end = strlen(in) - 1;
    while (*(in + start) == ' ') {
        start++;
    }
    while (*(in + end) == ' ') {
        end--;
    }
    printf("%d\n", start);
    printf("%d\n", end);
    strncpy(out, in + start, end - start + 1);
    return 0;
}

int mainReverse() {
    char *str = "hello";
    stringReverse(str);
    return 0;
}

int stringReverse(char *str) {
    if (str == NULL) {
        return -1;
    }
    if (*str == '\0') {
        return 0;
    }
    printf("%c", *str);
    stringReverse(str + 1);
    printf("%c", *str);
    return 0;
}

int mainPrint() {
    char *array[] = {"aaa", "bbb"};
    char array2[4][4] = {"aaa", "bbb"};
    int len = sizeof(array) / sizeof(*array);
    printf("%d\n",len);
    int len2 = sizeof(array2) / sizeof(*array2);
    printf("%d\n",len2);
    arrayPrint2(array2, len2);
    return 0;
}

int arrayPrint(char **array, int len) {
    for (int i = 0; i < len; i++) {
        printf("%s\n", array[i]);
    }
    return 0;
}

int arrayPrint2(char array[4][4], int len) {
    for (int i = 0; i < len; i++) {
        printf("%s\n", array[i]);
    }
    return 0;
}