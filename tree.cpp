#include <stdio.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

void tree(int x, int y)
{
    rectangle(10, 30, x + 20, y, 119, 68, 34);
    triangle(50, 25, x, y + 20, 78, 148, 45);
    triangle(50, 25, x, y + 33, 39, 118, 37);
    triangle(50, 25, x, y + 46, 78, 148, 45);
    triangle(50, 25, x, y + 59, 39, 118, 37);
}