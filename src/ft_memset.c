void *ft_memset(void *s, int c, size_t length)
{
  int i;
  
  i = 0;
  while (i < (int)length)
  {
     ((char*)s)[i]= c;
     i++;
  }
  
  return (s);
}
