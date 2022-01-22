void main(void)
{
  char local_28 [100]; //0x28(%esp)
  uint local_14; //0x8c(%esp)

  fgets(local_28, 0x64, stdin)
  local_14 = 0;
  fgets((char *)local_28,100,stdin);
  for (i = 0; i < strlen(local_28) ;i++)
  {
    if (local_28[local_14] > $0x40 && local_28[local_14] < 0x5a)
      local_28[local_14] = local_28[local_14] ^ 0x20;
  }
  printf(local_28);
  exit(0);
}