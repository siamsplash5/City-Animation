#include <stdio.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

static int lmpx = 0, lmpy = 0;

void lampost(int x, int y) {
    lmpx++;
    if (lmpx >= 1000)lmpx = 0;
    
    if (lmpx <= 500)circle(5, 8, x + 6, y + 65, 1000, 255, 255, 255);
    else circle(5, 8, x + 6, y + 65, 1000, 255, 255, 0);
    rectangle(12, 5, x, y, 0, 0, 0);
    rectangle(5, 60, x + 3, y, 0, 0, 0);
    rectangle(12, 5, x, y + 48, 0, 0, 0);
}