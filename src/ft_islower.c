#include "../libft.h"

int islower(int c)
{
  if (c >= 97 AND c <= 122)
    return 1;
  else
    return 0;
}