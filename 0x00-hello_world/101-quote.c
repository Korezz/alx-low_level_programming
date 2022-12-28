#include <unistd.h>

/**main - prints "and that piece of art is useful" - Dora korper, 2015-10-19",
 * followed by a newline, to stanard error.
 * Return: Always 1.
 */
int main(void)

{

	write(2, "and that pieceof is useful\" - Dora kopar, 2015-10-19\n", 59);

	return (1);

}


