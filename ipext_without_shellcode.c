#include <stdio.h>
#include <stdlib.h>
#define NIX_COMMAND "echo $(curl -s ifconfig.me)"

int main(int argc, char **argv){
  system(NIX_COMMAND);
  return 0;
}
