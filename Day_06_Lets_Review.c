#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int getStr();

typedef struct inputs str;
struct inputs
    {
    char s[10001];
    str *next;
}*head = NULL;

int main() {

    int t, i, j;
    str *temp;

    scanf("%d", &t);

    for(i = 0; i < t; i++)
        {
        getStr();
    }

    temp = head;
    for(i = 0; i < t; i++)
        {
        for(j = 0; j < strlen(temp -> s); j+=2)
            printf("%c", temp -> s[j]);

        printf(" ");

        for(j = 1; j < strlen(temp -> s); j+=2)
            printf("%c", temp -> s[j]);

        printf("\n");

        temp = temp -> next;
    }
    return 0;
}

int getStr()
    {
    char ss[10001];
    str **node = &head;
    scanf("\n%[^\n]s", ss);

    while(*node)
        node = &((*node) -> next);

    (*node) = (str *) malloc(sizeof(str));
    (*node) -> next = NULL;
    strcpy((*node) -> s, ss);

    return 0;
}
