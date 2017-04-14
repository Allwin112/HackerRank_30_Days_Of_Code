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
    contact *next;
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
     contact **temp = &head;

     while(*temp)
         temp = &((*temp) -> next);

     (*temp) = (contact *) malloc(sizeof(contact));
     scanf("%s %d", (*temp) -> name, &((*temp) -> num));
     (*temp) -> next = NULL;
     temp = NULL;
     free(temp);
 }

void checkContact(char *input)
    {
    contact **temp = &head;
    int flag = 0, i = 0;

    while(i < n)
    {
        if(!(strcmp((*temp) -> name, input)))
            {
            flag = 1;
            break;
        }
        temp = &((*temp) -> next);
        i++;
    }

    if(flag > 0)
        printf("%s=%d\n", (*temp) -> name, (*temp) -> num);
    else
        printf("Not found\n");
    temp = NULL;
    free(temp);
}
