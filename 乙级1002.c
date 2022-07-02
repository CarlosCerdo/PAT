#include <stdio.h>

int main()
{
    int sum = 0, size = 0;
    char s1[103], s2[4];
    scanf("%s", s1);
    for (int i = 0; i < 100; i++)
    {
        if (s1[i] == '\0')
        {
            break;
        }

        sum = sum + (int)(s1[i] - '0');
    }

    for (int i = 2; i >= 0; i--)
    {
        s2[i] = (char)(sum % 10 + '0');
        size++;
        sum = sum / 10;
        if (sum == 0)
        {
            break;
        }

    }
    
    for (int i = 0; i < 4; i++)
    {
        if (s2[i] != '\0')
        {

        if (i != 2)
        {
            switch (s2[i])
            {
            case '0':
                printf("ling ");
                break;
            case '1':
                printf("yi ");
                break;
            case '2':
                printf("er ");
                break;
            case '3':
                printf("san ");
                break;
            case '4':
                printf("si ");
                break;
            case '5':
                printf("wu ");
                break;
            case '6':
                printf("liu ");
                break;
            case '7':
                printf("qi ");
                break;
            case '8':
                printf("ba ");
                break;
            case '9':
                printf("jiu ");
                break;
            default:
                break;
            }
        }
        else
        {    
            switch (s2[i])
            {
            case '0':
                printf("ling");
                break;
            case '1':
                printf("yi");
                break;
            case '2':
                printf("er");
                break;
            case '3':
                printf("san");
                break;
            case '4':
                printf("si");
                break;
            case '5':
                printf("wu");
                break;
            case '6':
                printf("liu");
                break;
            case '7':
                printf("qi");
                break;
            case '8':
                printf("ba");
                break;
            case '9':
                printf("jiu");
                break;
            default:
                break;
            }

        }
        
        }
        
    }
    printf("\n");
    
}