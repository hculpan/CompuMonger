#include <apple2enh.h>
#include <conio.h>
#include <peekpoke.h>

void main(void) {
  int col80on = PEEK(0xC01F);

  POKE(0xC00D, 1);

  cputs("Hello, welcome to CompuMonger!\r\n");

  while (!kbhit()) {

  }

  if (col80on <= 127) {
    POKE(0xC00C, 1);
  }
}
