#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void sky() {
    rectangle(1200, 630, 0, 0, 26, 82, 118); //background
    circle(40, 40, 800, 500, 360, 178, 186, 187); //moon
    circle(40, 40, 810, 510, 360, 26, 82, 118); //overlapped by sun
}