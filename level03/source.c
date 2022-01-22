int decrypt(int param_1)
{
  char buf = "Q}|u`sfg~sf{}|a3"; // 0x757c7d51 0x67667360 0x7b66737e 0x33617c7d 0
  int len;
  int i;

  len = strlen(buf);
  for (i = 0; i < len; i++)
  {
    buf[i] = buf[i] ^ param_1;
  }

  if (strncmp(buf, "Congratulations!", 0x11))
  {
    system("/bin/sh");
    return;
  }
  puts("\nInvalid Password");
}

void test(int param_1, int param_2)
{
  int a;

  a = (param_2 - param_1);
  switch(a) {
  default:
    a = rand();
    decrypt(a);
    break;
  case 0x1:
    decrypt(a);
    break;
  case 0x2:
    decrypt(a);
    break;
  case 0x3:
    decrypt(a);
    break;
  case 0x4:
    decrypt(a);
    break;
  case 0x5:
    decrypt(a);
    break;
  case 0x6:
    decrypt(a);
    break;
  case 0x7:
    decrypt(a);
    break;
  case 0x8:
    decrypt(a);
    break;
  case 0x9:
    decrypt(a);
    break;
  case 0x10:
    decrypt(a);
    break;
  case 0x11:
    decrypt(a);
    break;
  case 0x12:
    decrypt(a);
    break;
  case 0x13:
    decrypt(a);
    break;
  case 0x14:
    decrypt(a);
    break;
  case 0x15:
    decrypt(a);
  }
  return;
}

undefined4 main(void)
{
  uint __seed;
  int iStack20;

  __seed = time((time_t *)0x0);
  srand(__seed);
  puts("***********************************");
  puts("*\t\tlevel03\t\t**");
  puts("***********************************");
  printf("Password:");
  scanf("%d", &iStack20);
  test(iStack20,0x1337d00d); //322424845
  return 0;
}