#include "brightcode.h"

void	bank (int age, int argent)
{
  if (age < 18 || argent < 1000)
    bc_write_string("You can't enter the bank.\n");
  else if (age > 70 && argent >= 100000)
    bc_write_string("Make a placement...\n");
  else if (argent >= 100000)
    bc_write_string("WELCOME, HAVE A SIT !\n");
  else if (argent >= 10000)
    bc_write_string("Welcome.\n");
  else
    bc_write_string("You can enter the bank.\n");
}
