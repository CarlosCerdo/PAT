#include <stdio.h>

typedef struct Record{
    char name[10];
    char id[10];
    int achievement;
    struct record *next;
};

int main(){
    int number, a;
    struct Record record;
    
    scanf("%d", &number);

    for (int i = 1; i < number; i++){
        a = 1;
    }
}
