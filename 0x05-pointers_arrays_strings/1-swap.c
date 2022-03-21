/* 
*swap_int(int, int)
*void
*/
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
