#include "brightcode.h"

void	disp_alpha(void)
{
  char	lettre;

  lettre = 'a';
  while (lettre <= 'z')
    {
      bc_write_char(lettre);
      lettre = lettre + 1;
    }
  bc_write_char('\n');
  lettre = 'z';
  while (lettre >= 'a')
    {
      bc_write_char(lettre);
      lettre = lettre - 1;
    }
  bc_write_char('\n');
}
