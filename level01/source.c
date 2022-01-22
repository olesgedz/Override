char a_user_name[256];

int verify_user_name()
{
  puts("verifying username....\n")
  return(strncmpr(a_user_name, "dat_wil", 7))
}

int verify_user_pass(char *b){
   return(strncmpr(b, "admin", 5))
}

int main(void)
{
  char b[64];
  int a;

  a = 0;
  puts("********* ADMIN LOGIN PROMPT *********");
  printf("Enter Username: ");
  fgets(a_user_name,0x100,stdin); //256
  a = verify_user_name();
  if (a == 0) {
    puts("Enter Password: ");
    fgets(b,100,stdin);
    a = verify_user_pass(b);
    if ((a == 0) || (a != 0)) {
      puts("nope, incorrect password...\n");
      return (1);
    }
  }
  else {
    puts("nope, incorrect username...\n");
    return (1);
  }
  return (0);
}