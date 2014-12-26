#include "brightcode.h"

void	mirror_tell_me(void)
{
  bc_write_char('b' + 14);
  bc_write_char('r' - 10);
  bc_write_char('i' - 4);
  bc_write_char('g' + 7);
  bc_write_char('h' + 7);
  bc_write_char('t' - 7);
  bc_write_char('c' + 2);
  bc_write_char('o' - 1);
  bc_write_char('d' - 3);
  bc_write_char('e' + 7);
  bc_write_char('\n');
}
