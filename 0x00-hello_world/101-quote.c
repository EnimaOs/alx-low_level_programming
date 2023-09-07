#include <unistd.h>
int main(void)
{
    write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		 sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
         return (1);
}
