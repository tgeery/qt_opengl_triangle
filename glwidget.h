#ifndef QGLWIDGET_H
#define QGLWIDGET_H

#include <QGLWidget>
#include <QTimer>

class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLWidget(QWidget * parent = 0);

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
    void draw();

private:
    QTimer timer;
};

#endif // QGLWIDGET_H
