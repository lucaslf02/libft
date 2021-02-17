void *memccpy(void *dest, const void *src, int c, size_t n)
{
  int i;
  void *dest_aux;

  i = 0;
  dest_aux = dest;
  while (i < size_t)
  {
    dest[i] = src[i];
    if ((char*)src[i] == c)
      return (dest_aux);
    i++;
  }
  return (dest_aux);
}