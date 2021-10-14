#include <stdio.h>
#include <stdlib.h>

struct con {int level; char *class;};
void print_struct(struct con s){
  printf("Class %s is level %d\n",s.class,s.level);
}

int main(){
  struct con s;
  s.class = "wizard";
  s.level = 100;
  print_struct(s);
}
