/*
    分析：   1中可以知道字符串中只能包含PAT三个字母
            2中可以知道中间如果是PAT则两边的A的个数要一致
            3中化简可以知道右边的A的个数是左边和中间A的个数的和的和并且中间一定存在一个A字母
    
    思路：   使用P_location、T_location记录P和T的位置，并且使用left_number、hidden_number
    和right_number，P_number、T_number记录数据，若P、T个数超过两个，则不正确，并且P要在T左边，
    而A的个数也要符合要求。
*/
#include <stdio.h>
#include <string.h>     //得到字符串长度


int verdict(char element[100])
{
    int P_location, T_location;
    int left_number, hidden_number, right_number, P_number, T_number;
    P_location = T_location = 0;
    left_number = hidden_number = right_number = P_number = T_number = 0;

    for (int i = 0; i < strlen(element); i++)
    {
        if (element[i] != 'P' && element[i] != 'T' && element[i] != 'A')
        {
            return 0;
        }
        
        switch (element[i])
        {
        case 'P':
            if (P_number == 0)
            {
                P_number++;
                P_location = i;
            }
            else
            {
                return 0;
            }

            break;
        
        case 'T':
            if (T_number == 0)
            {
                T_number++;
                T_location = i;
            }
            else
            {
                return 0;
            }

            break;

        case 'A':
            if (P_location == 0)
            {
                left_number++;
            }
            else if (P_location != 0 && T_location == 0)
            {
                hidden_number++;
            }
            else if (T_location != 0)
            {
                right_number++;
            }
            
            break;
                    
        default:
            break;
        }
    }

    if (P_location - T_location >= -1 || right_number != left_number * hidden_number)
    {
        return 0;
    }
    
    return 1;
}


int main()
{
    int number, answer;
    char s[10][100] = {'\0'};
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        scanf("%s", s[i]);
    }
    
    for (int i = 0; i < number; i++)
    {
        answer = verdict(s[i]);
        if (answer == 0)
        {
            printf("NO\n");
        }
        else if (answer == 1)
        {
            printf("YES\n");
        } 
    }  
}