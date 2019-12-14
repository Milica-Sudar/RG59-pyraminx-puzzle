#include "Triangle.h"
#include <GL/glut.h>


Triangle::Triangle()
{
	p1 = Point();
	p2 = Point();
	p3 = Point();
	color = Red;
}

Triangle::Triangle(Point pp1, Point pp2, Point pp3, Color c1)
{
	p1 = Point(pp1);
	p2 = Point(pp2);
	p3 = Point(pp3);
	color = c1;

}

void Triangle::Draw()
{

	glBegin(GL_TRIANGLES);
	SetColor(color);
	glVertex3f(p1.x, p1.y, p1.z);
	glVertex3f(p2.x, p2.y, p2.z);
	glVertex3f(p3.x, p3.y, p3.z);
	glEnd();

  /*Iscrtavanje linija oko trougla*/
	glLineWidth(2);
	SetColor(Black);
	glBegin(GL_LINES);
    glVertex3f(p1.x, p1.y, p1.z);
	  glVertex3f(p2.x, p2.y, p2.z);

    glVertex3f(p1.x, p1.y, p1.z);
	  glVertex3f(p3.x, p3.y, p3.z);

	  glVertex3f(p3.x, p3.y, p3.z);
	  glVertex3f(p2.x, p2.y, p2.z);
	glEnd();
}