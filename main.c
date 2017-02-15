#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

void square(int x, int y, screen s, color c){
  draw_line(x,x,x,y,s,c);
  draw_line(x,x,y,x,s,c);
  draw_line(y,y,y,x,s,c);
  draw_line(y,y,x,y,s,c);
}

int main() {

  screen s;
  color c;
 
  
  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;
  
  clear_screen(s);
  
  /*
  draw_line(0,0,500,100,s,c);
  draw_line(0,0,500,500,s,c);
  draw_line(0,250,500,250,s,c);
  draw_line(0,0,100,500,s,c);
  draw_line(250,0,250,500,s,c);
  draw_line(0,500,500,400,s,c);
  draw_line(500,0,0,500,s,c);
  draw_line(100,0,0,500,s,c);
  */

  square(167,334,s,c);
  square(125,375,s,c);
  draw_line(0,0,500,500,s,c);
  draw_line(500,0,0,500,s,c);
  
  display(s);
  save_extension(s, "lines.png");
}  
