#include <GLUT/glut.h>

void display(void);

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutCreateWindow("Hello, world!");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

void display(void)
{
}
