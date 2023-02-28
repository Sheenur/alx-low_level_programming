int main(void)
{
  int num = 5;
  printf("Before calling reset_to_98, num = %d\n", num);

  reset_to_98(&num);

  printf("After calling reset_to_98, num = %d\n", num);

  return 0;
}
