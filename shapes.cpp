#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void circle(int radius_x, int radius_y, int center_x, int center_y, double portion, double r, double g, double b) {
    glColor3ub(r,g,b);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(center_x, center_y);
    for (int i = 0; i <= portion; i++) {
        double angle = 2.0 * acos(-1) * (i / portion);
        double x = radius_x * cosf(angle);
        double y = radius_y * sinf(angle);
        glVertex2f(x + center_x, y + center_y);
    }
    glEnd();
}

void rectangle(int width, int height, int lower_left_x, int lower_left_y, double r, double g, double b) {
    glColor3ub(r, g, b);
    glBegin(GL_POLYGON);
    glVertex2d(lower_left_x, lower_left_y);
    glVertex2d(lower_left_x, lower_left_y + height);
    glVertex2d(lower_left_x + width, lower_left_y + height);
    glVertex2d(lower_left_x + width, lower_left_y);
    glEnd();
}

void line(int bx, int by, int ex, int ey, int r, int g, int b) {
    glBegin(GL_LINES);
    glColor3ub(r, g, b);
    glVertex2f(bx, by);
    glVertex2f(ex, ey);
    glEnd();
}

void triangle(int base, int height, int startx, int starty, int r, int g, int b) {
    glBegin(GL_POLYGON);
    glColor3ub(r, g, b);
    glVertex2f(startx, starty);
    glVertex2f(startx + base, starty);
    glVertex2f(startx+(base/2.0), starty+height);
    glEnd();
}