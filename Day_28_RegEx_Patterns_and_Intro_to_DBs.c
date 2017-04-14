#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct node name;
struct node
    {
    char fN[20];
    name *left, *right;
}*head = NULL;

void appendName(char*);
void displayNames(name**);

int main(){
    int N, a0;
    name *displayHead;
    scanf("%d",&N);
    for(a0 = 0; a0 < N; a0++){
        char* firstName = (char *)malloc(10240 * sizeof(char));
        char* emailID = (char *)malloc(10240 * sizeof(char));
        scanf("%s %s",firstName,emailID);

        if(strstr(emailID,"@gmail.com"))
            appendName(firstName);
        }

    displayNames(&head);
    return 0;
}

void appendName(char *inName)
     {
     int left = 2;
     name **temp = &head, **prev;
     while(*temp)
     {
        if(strcmp((*temp) -> fN, inName) < 0)
            {
            prev = &(*temp);
            temp = &((*temp) -> right);
            left = 0;
        }
        else
            {
            prev = &(*temp);
            temp = &((*temp) -> left);
            left = 1;
        }
     }
     (*temp) = (name *) malloc(sizeof(name));
     (*temp) -> left = NULL;
     (*temp) -> right = NULL;

     if(left == 1)
        (*prev) -> left = (*temp);
     if(left == 0)
        (*prev) -> right = (*temp);
     strcpy((*temp) -> fN, inName);
     temp = NULL;
     free(temp);
 }

 void displayNames(name **temp)
 {

    if((*temp) -> left)
        displayNames(&((*temp) -> left));

    printf("%s\n", (*temp) -> fN);

    if((*temp) -> right)
        displayNames(&((*temp) -> right));
 }
