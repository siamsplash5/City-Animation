#include <stdio.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

void road() {
    rectangle(1200, 130, 0, 5, 28, 40, 51);
    int x = 20, y = 74, len = 15;
    for (int i = 0; i < 60; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < 3; j++) {
                line(x, y + j, x + len, y + j, 255, 255, 255);
            }
        }
        x += 20;
    }
}