#include "glwidget.h"

GLWidget::GLWidget(QWidget * parent) : QGLWidget(parent)
{
    connect(&timer, SIGNAL(timeout()), this, SLOT(updateGL()));
}

void GLWidget::initializeGL()
{
    glClearColor(0,0,0,1);
}

void GLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    glBegin(GL_TRIANGLES);
        glVertex3f(-0.9,-0.9,0);
        glVertex3f(-0.1,-0.9,0);
        glVertex3f(-0.4,0.2,0);
    glEnd();
}

void GLWidget::resizeGL(int w, int h)
{}
