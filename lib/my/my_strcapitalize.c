/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** ?
*/

char *my_strcapitalize(char *str)
{
    int count = 1;

    if (str[0] >= 97 && str[0] <= 122)
        str[0] = str[0] - 32;
    while (str[count] != '\0') {
        if (str[count - 1] >= 23 && str[count - 1] <= 47)
            if (str[count] >= 'a' && str[count] <= 'z')
                str[count] = str[count] - 32;
        count += 1;
    }
    return (str);
}
