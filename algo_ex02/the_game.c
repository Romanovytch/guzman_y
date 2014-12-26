#include "brightcode.h"

void	reverse_number(int nb)
{
  int	p;

  p = 1;
  if (nb < 0)
    {
      bc_write_char('-');
      nb = nb * -1;
    }
  while (p < nb)
    {
      bc_write_char((nb / p) % 10 + 48);
      p = p * 10;
    }
  bc_write_char('\n');
}
