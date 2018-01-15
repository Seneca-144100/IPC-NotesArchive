int readInt(void);
void flushKeyboard(void);


int readInt(void) {
  int value;
  char newline = 'x';
  do {
    scanf("%d%c", &value, &newline);
    if (newline != '\n') {
      printf("Invalid Entry, try again: ");
      flushKeyboard();
    }
  } while (newline != '\n');
  return value;
}

void flushKeyboard(void) {
  char junk;
  do {
    scanf("%c", &junk);
  } while (junk != '\n');
}
