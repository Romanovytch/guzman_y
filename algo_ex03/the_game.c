#include "brightcode.h"

void	dec_to_hex(int nb)
{
  int	p;
  char	base[] = "0123456789ABCDEF";

  p = 1;
  while (nb < 0)
    {
      nb = nb * -1;
      bc_write_char('-');
    }
  while ((nb / p) >= 16)
    p = p * 16;
  while (p > 0)
    {
      bc_write_char(base[(nb / p % 16)]);
      p = p / 16;
    }
}
