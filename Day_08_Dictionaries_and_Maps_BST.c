#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n;
void getContact();
void checkContact(char *);

typedef struct phonebook contact;
struct phonebook
    {
    contact *left, *right;
    char name[15];
    int num;
}*head = NULL;

int main() {

    int i;
    char check[15];
    scanf("%d", &n);
    if(n >= 1 && n <= 100000)
        for(i = 0; i < n; i++)
            getContact();

    while(scanf("%s", check) == 1)
        checkContact(check);

    return 0;
}

 void getContact()
     {
     int left = 2;
     contact **temp = &head, **prev;
     char inName[15];
     int inNum;
     scanf("%s %d", inName, &inNum);
     while(*temp)
     {
        if(strcmp((*temp) -> name, inName) < 0)
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
     (*temp) = (contact *) malloc(sizeof(contact));
     (*temp) -> left = NULL;
     (*temp) -> right = NULL;

     if(left == 1)
        (*prev) -> left = (*temp);
     if(left == 0)
        (*prev) -> right = (*temp);
     strcpy((*temp) -> name, inName);
     (*temp) -> num = inNum;
     temp = NULL;
     free(temp);
 }

void checkContact(char *input)
    {
    contact **temp = &head;
    int flag = 0, comp;

    while(*temp)
    {
        comp = strcmp((*temp) -> name, input);
        if(comp == 0)
            {
            flag = 1;
            break;
        }
        else if(comp < 0)
            temp = &((*temp) -> right);
        else
            temp = &((*temp) -> left);
    }

    if(flag > 0)
        printf("%s=%d\n", (*temp) -> name, (*temp) -> num);
    else
        printf("Not found\n");
    temp = NULL;
    free(temp);
}
