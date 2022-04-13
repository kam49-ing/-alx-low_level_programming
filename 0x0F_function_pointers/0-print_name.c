/**
 * print_name - prints name
 * @name: name of a person
 * @(*f)(char *): function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
    f(name);
}