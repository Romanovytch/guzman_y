void	age_if(int a)
{
  if (a == 0)
    bc_write_string("Good Joke !\n");
  else if (a == 5)
    bc_write_string("Too Young !\n");
  else if (a == 12)
    bc_write_string("Child !\n");
  else if (a == 16)
    bc_write_string("Teenager !\n");
  else if (a == 18)
    bc_write_string("You're an adult !\n");
  else
    bc_write_string("\n");
}

void	age_case(int a)
{
  switch (a)
    {
    case 0 :
      bc_write_string("Good Joke !\n");
      break;
    case 5 :
      bc_write_string("Too Young !\n");
      break;
    case 12 :
      bc_write_string("Child !\n");
      break;
    case 16 :
      bc_write_string("Teenager !\n");
      break;
    case 18 :
      bc_write_string("You're an adult !\n");
      break;
    default:
      bc_write_string("\n");
    }
}
