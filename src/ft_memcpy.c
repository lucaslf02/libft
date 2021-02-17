void  *memcpy(void *dest, const void *src, size_t n)
{
  int i;
  void *dest_aux;

  i = 0;
  dest_aux = dest;
  while (i < size_t)
  {
    *dest[i] = *src[i];
    i++;
  }
  return dest_aux;
}
