#include "brightcode.h"

void	ave_cesar(unsigned int lol)
{
  int	p;

  p = 1;
  while (lol >= 1000)
    {
      bc_write_char('M');
      lol = lol - 1000;
    }
  while (lol >= 500)
    {
      bc_write_char('D');
      lol = lol - 500;
    }
  while (lol >= 100)
    {
      bc_write_char('C');
      lol = lol - 100;
    }
  while (lol >= 50)
    {
      bc_write_char('L');
      lol = lol - 50;
    }
  while (lol >= 10)
    {
      bc_write_char('X');
      lol = lol -10;
    }
  while (lol >= 5)
    {
      bc_write_char('V');
      lol = lol - 5;
    }
  while (lol >= 1)
    {
      bc_write_char('I');
      lol = lol - 1;
    }
  bc_write_char('\n');
}
