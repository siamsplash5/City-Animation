#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void building(int height, int width, int spread, int cmd,
    int lx, int ly,
    int wx, int wy,
    int r, int g, int b,
    int num, int cnt, bool f) {
    if (cnt == num)return;
    int xx = lx, yy = ly;
    if (f) {
        for (int i = 0; i < spread; i++) {
            if (cmd == 1)rectangle(width, height, xx++, yy++, 27, 38, 49);
            else if (cmd == 2) rectangle(width, height, xx--, yy--, 27, 38, 49);
        }
    }
    rectangle(width, height, lx, ly, r, g, b);
    if (f) {
        int x = lx + 10, y = ly + 20;
        int i = 0;
        while (x < width + lx) {
            while (y + 30 <= height + ly) {
                if (i % 4 == 0 and f) rectangle(wx, wy, x, y, 247, 220, 111);
                else if (i % 7 == 0 and f) rectangle(wx, wy, x, y, 214, 234, 248);
                else rectangle(wx, wy, x, y, 0, 0, 0);
                y += 30;
                i++;
            }
            x += 30;
            y = ly + 20;
        }
    }
    building(height, width, spread, cmd, lx + 100, ly, wx, wy, r, g, b, num, cnt + 1, f);
}