#include "main.h"

/**
 * _puts_recursion - Rekursiya ilə string çap edir, sonda newline qoyur
 * @s: Çap olunacaq string
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')  /* Əgər stringin sonuna çatmışıqsa */
    {
        _putchar('\n');  /* Yeni sətir çap et */
        return;          /* Rekursiyanı bitir */
    }
    _putchar(*s);        /* Hazırkı simvolu çap et */
    _puts_recursion(s + 1); /* Növbəti simvola keç */
}
