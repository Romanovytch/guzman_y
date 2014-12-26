#include "brightcode.h"

void	star_pyramid(unsigned int a)
{
  int	i;
  int	j;
  int	aa;
  int	aaa;
  int	k;

  aaa = 1;
  aa = a;
  j = 0;
  k = 0;
  i = 0;
  if (a > 0)
    {
      while (i < a)
	{
	  while (j < aa - 1)
	    {
	      bc_write_char(' ');
	      j = j + 1;
	    }
	  j = 0;
	  if (aaa == 1)
	    bc_write_char('*');
	  else 
	    while (j < aaa)
	      {
		bc_write_char('*');
		while (k < aaa - 1)
		  {
		    bc_write_char('*');
		    k = k + 1;
		  }
		j = j + 1;
	      }
	  k = 0;
	  j = 0;
	  aaa = aaa + 1;
	  bc_write_char('\n');
	  i = i + 1;
	  aa = aa - 1;
	}
    }
  else
    bc_write_char('\n');
}
