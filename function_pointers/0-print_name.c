#include <stdio.h>

/**
 * print_name - prints a name using a function given as a parameter
 * @name: name to be printed
 * @f: pointer to a function that takes a char * argument
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
    {
        f(name);
    }
}

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            putchar(name[i] - 'a' + 'A');
        else
            putchar(name[i]);
        i++;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}   
