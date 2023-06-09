#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);    // Red
    glVertex2f(-0.5f, -0.5f);       // Bottom left vertex
    glColor3f(0.0f, 1.0f, 0.0f);    // Green
    glVertex2f(0.5f, -0.5f);        // Bottom right vertex
    glColor3f(0.0f, 0.0f, 1.0f);    // Blue
    glVertex2f(0.0f, 0.5f);         // Top vertex
    glEnd();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple OpenGL Project");
    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}

