#include <stdio.h>
#define MAX_LIMIT 20

int  main()
{
  char s1[] = {'r','o','h','i','t','\0'};
  char s2[10] = {'r','o','h','i','t','\0'};
  
  char s3[] = "rohit";
  char s4[10] = "rohit";

  char *s5 = "rohit";
  char *s6[] = {"rohit","ranjan"};
  char *s7[5] = {"rohit","ranjan"};

  char s8[5][4] = {"abc","def","lmn","pqr","xyz"};        // char str[NUMBER_OF_STRINGS][STRING_LENGTH+1]
  char *s9[5][4] = {"abc","def","lmn","pqr","xyz"};

  printf("%s\n", s6[0]);              // rohit
  printf("%s\n", s6[1]);              // ranjan
  printf("%s\n", s8[0]);              // abc
  printf("%s\n", s9[0][1]);           // def

  char str[MAX_LIMIT];
  fgets(str, MAX_LIMIT, stdin);
  printf("%s\n", str);

  return 0;
}

