#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
///Down
glColor3ub (192, 192, 192);
glBegin(GL_POLYGON);
glVertex2d (150, 150);
glVertex2d (650, 150);
glVertex2d (650, 200);
glVertex2d (150, 200);
glEnd();
//square
  glColor3ub (218,165,32);
glBegin(GL_POLYGON);
glVertex2d (200, 200);
glVertex2d (600, 200);
glVertex2d (600, 500);
glVertex2d (200, 500);
glEnd();
///Top Triangle

glColor3ub (165,42,42);
glBegin(GL_POLYGON);
glVertex2d (150, 500);
glVertex2d (650, 500);
glVertex2d (400, 650);
glVertex2d (150, 500);
glEnd();
///Door
glColor3ub (154,205,50);
glBegin(GL_POLYGON);
glVertex2d (345, 200);
glVertex2d (465, 200);
glVertex2d (465, 450);
glVertex2d (345, 450);
glEnd();
///Left Window
glColor3ub (205,133,63);
glBegin(GL_POLYGON);
glVertex2d (210, 300);
glVertex2d (300, 300);
glVertex2d (300, 400);
glVertex2d (210, 400);
glEnd();
///Right Window
glColor3ub (205,133,63);
glBegin(GL_POLYGON);
glVertex2d (500, 300);
glVertex2d (590, 300);
glVertex2d (590, 400);
glVertex2d (500, 400);
glEnd();


/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (1.0, 1.0, 1.0, 1.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 700, 0, 700);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (700, 700);
glutInitWindowPosition (100, 100);
glutCreateWindow ("201-15-14218");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
