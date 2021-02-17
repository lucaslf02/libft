void  ft_bzero(void *s, size_t length)
{
  int i;

  i = 0;
  while (i < (int)length)
  {
    ((char*)s)[i] = '\0';
     i++;
  }   
}
