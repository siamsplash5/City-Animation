#include <stdio.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

void green_field(int r, int g, int b) {
    circle(710, 240, 0, 0, 1000, r, g, b);
    circle(710, 240, 300, 0, 1000, r, g, b);
    circle(710, 240, 700, 0, 1000, r, g, b);
    circle(710, 240, 1200, 0, 1000, r, g, b);
    rectangle(1200, 210, 0, 0, r, g, b);
}