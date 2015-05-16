#include <stdio.h>

#define STRLEN 5

//int readln(char s[], int maxlen) {
//  int len_s;
//
//  fgets(s, maxlen, stdin);
//  len_s = strlen(s);
//
//  if(s[len_s -1] == '\n') {
//    s[len_s -1] = '\0';
//    len_s -= 1;
//  }
//  rewind(stdin); // This flushes the keyboard buffer
//
//  return len_s;
//}

int readln(char s[], int maxlen) {
  char ch;
  int i;
  int chars_remain;
  i = 0;
  chars_remain = 1;

  while(chars_remain) {
    ch = getchar();

    if((ch == '\n') || (ch == EOF)) {
      chars_remain = 0;
    } else if(i < maxlen - 1) {
      printf("the current char is ch   %c\n", ch);
      printf("the ASCII value of ch is %d\n", ch);
      s[i] = ch;
      i++;
    }
  }

  s[i] = '\0';
  return i;
}

void getinput_with_fgets()
{
  char firstname[5];
  char lastname[5];
  int firstnamelength;
  int lastnamelength;
  printf("Enter your first name: ");
  firstnamelength = readln(firstname, 5);

  printf("Enter your last name: ");
  lastnamelength = readln(lastname, 5);

  printf("Hello, %s, %s\n", firstname, lastname);
  printf("firstname's length = %d\n", firstnamelength);
  printf("lastname's length = %d\n", lastnamelength);
}


int main(int argc, char **argv)
{
  getinput_with_fgets();

  return 0;
}
