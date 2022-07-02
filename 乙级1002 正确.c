#include<stdio.h>
#include<string.h>
char a[][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

void output(int n)
{
    if(n<10)
    {
        printf("%s",a[n]);
        return ;
    }
    output(n/10);
    printf(" %s",a[n % 10]);
}

int main()
{ 
    char b[103];
    gets(b);
    int i;
    int sum = 0;
    for(i = 0; i < strlen(b); i++)
    {
        sum += b[i] - '0';
    }

    output(sum);
    printf("\n");
    return 0;
}