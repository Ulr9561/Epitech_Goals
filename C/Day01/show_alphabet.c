#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int show_alphabet(void)
{
    char lettre;
    for (lettre = 'a'; lettre <= 'z'; lettre++)
    {
        printf("%c ", lettre);
    }
}
int to_number(char const *str)
{
    long long result = 0;
    int sign = 1;
    int i = 0;
    bool isfound = false;
    while (str[i] != '\0' && isspace(str[i]))
    {
        i++;
    }
    while (str[i] != '\0') {
        if(str[i] == '+' || str[i] == '-') {
            if(isfound){
                break;
            } else if(str[i] == '-') {
                sign = -sign;
            }
        } else if(isdigit(str[i])){
            isfound = true;
            result = result * 10 + (str[i] - '0');
        } else if(isspace(str[i])){
            if(isfound){
                break;
            }
        } else {
            break;
        }

        i++;
    }

    result = result * sign;
    if(result > INT_MAX || result < INT_MIN){
        return 0;
    }

    return (int)result;
};

int displayNumber(int nb)
{
    printf("%d ", nb);
}

int show_string(char const *str)
{
    printf("%s ", str);
}

char reverse_string(char const *str)
{
    for (int i = strlen(str); i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    int n = to_number("11000000000000000000000042");
    printf("%d\n", n);
    return 0;
}