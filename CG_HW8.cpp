
#include<iostream>
#include<gl\glut.h>
void USA() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	//red lines
	glColor3ub(191.0, 11.0, 48.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1, 1);
	glVertex2f(1, 1);
	glVertex2f(1, 0.85);
	glVertex2f(-1, 0.85);
	glVertex2f(-1, 1);
	glEnd();

	glColor3ub(191.0, 11.0, 48.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1, 0.7);
	glVertex2f(1, 0.7);
	glVertex2f(1, 0.55);
	glVertex2f(-1, 0.55);
	glVertex2f(-1, 0.7);
	glEnd();

	glColor3ub(191.0, 11.0, 48.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1, 0.4);
	glVertex2f(1, 0.4);
	glVertex2f(1, 0.25);
	glVertex2f(-1, 0.25);
	glVertex2f(-1, 0.4);
	glEnd();

	glColor3ub(191.0, 11.0, 48.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1, 0.1);
	glVertex2f(1, 0.1);
	glVertex2f(1, -0.05);
	glVertex2f(-1,-0.05);
	glVertex2f(-1, 0.1);
	glEnd();

	glColor3ub(191.0, 11.0, 48.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1, -0.2);
	glVertex2f(1, -0.2);
	glVertex2f(1, -0.35);
	glVertex2f(-1, -0.35);
	glVertex2f(-1, -0.2);
	glEnd();

	glColor3ub(191.0, 11.0, 48.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1, -0.5);
	glVertex2f(1, -0.5);
	glVertex2f(1, -0.65);
	glVertex2f(-1, -0.65);
	glVertex2f(-1, -0.5);
	glEnd();

	glColor3ub(191.0, 11.0, 48.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1, -0.8);
	glVertex2f(1, -0.8);
	glVertex2f(1, -1.0);
	glVertex2f(-1, -1.0);
	glVertex2f(-1, -0.8);
	glEnd();
	//blue
	glColor3ub(0.0, 39.0,104.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1, 1);
	glVertex2f(-0.2, 1);
	glVertex2f(-0.2, -0.05);
	glVertex2f(-1, -0.05);
	glVertex2f(-1,1);
	glEnd();

	//stars
	glColor3ub(255.0, 255.0, 255.0);
	glPolygonMode(GL_FRONT, GLU_FILL);
	float f = 0, n = 0;
	for (int i = 1; i <= 6; i++) {//chon 5 radif setare 6 tayi va 4 radif setare 5 tayi darim,pas radif aval setare 6tayi ra rasm mikonim va mabagi ra ba while
		glBegin(GL_QUADS);
		glVertex2f(-0.96 + f, 0.88);
		glVertex2f(-0.935 + f, 0.99);
		glVertex2f(-0.91 + f, 0.88);
		glVertex2f(-0.935 + f, 0.908);
		glVertex2f(-0.97 + f, 0.95);
		glVertex2f(-0.9 + f, 0.95);
		glVertex2f(-0.935 + f, 0.908);
		glVertex2f(-0.97 + f, 0.95);
		glEnd();
		f = f + 0.13;
	}


	float a = 0.5;
	int s = 1;
	while (a <=4) {
		float f = 0,n=0;
		for (int i = 1; i <= 6; i++) {
			n = 0.23*s;
			glBegin(GL_QUADS);
			glVertex2f(-0.96 + f, 0.88-n);
			glVertex2f(-0.935 + f, 0.99-n);
			glVertex2f(-0.91 + f, 0.88-n);
			glVertex2f(-0.935 + f, 0.908-n);
			glVertex2f(-0.97 + f, 0.95-n);
			glVertex2f(-0.9 + f, 0.95-n);
			glVertex2f(-0.935 + f, 0.908-n);
			glVertex2f(-0.97 + f, 0.95-n);
			glEnd();
			f = f + 0.13;
		}
		//second row have 5 star
		float c = 0, m = 0;
		for (int i = 0; i < 5; i++) {
			c = c + 0.13;
			m = 0.23*a;
			if (i == 0)
				c = 0.07;
			glBegin(GL_QUADS);
			glVertex2f(-0.96 + c, 0.88 - m);
			glVertex2f(-0.935 + c, 0.99 - m);
			glVertex2f(-0.91 + c, 0.88 - m);
			glVertex2f(-0.935 + c, 0.908 - m);
			glVertex2f(-0.97 + c, 0.95 - m);
			glVertex2f(-0.9 + c, 0.95 - m);
			glVertex2f(-0.935 + c, 0.908 - m);
			glVertex2f(-0.97 + c, 0.95 - m);
			glEnd();
		}
		a = a + 1;
		s++;
	}
	glFlush();

	/*glVertex2f(-0.8, 0.7);
	glVertex2f(-0.75, 0.9);
	glVertex2f(-0.7, 0.7);
	glVertex2f(-0.75, 0.75);
	glVertex2f(-0.82, 0.8);
	glVertex2f(-0.68, 0.8);
	glVertex2f(-0.75, 0.75);
	glVertex2f(-0.82, 0.8);*/
}
void South_Africa(){
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(222.0,56.0,49.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1, 1);
	glVertex2f(1, 1);
	glVertex2f(1, 0.34);
	glVertex2f(-1, 0.34);
	glVertex2f(-1, 1);
	glEnd();

	glColor3ub(0.0, 122.0, 77.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1, 0.18);
	glVertex2f(1, 0.18);
	glVertex2f(1, -0.18);
	glVertex2f(-1, -0.18);
	glVertex2f(-1, 0.12);
	glEnd();

	glColor3ub(0.0, 35.0,149.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1,-0.33);
	glVertex2f(1, -0.33);
	glVertex2f(1, -1);
	glVertex2f(-1, -1);
	glVertex2f(-1, -0.33);
	glEnd();
	
	//white line
	glColor3ub(255.0, 255.0, 255.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.65, 1);
	glVertex2f(-1, 1);
	glVertex2f(-1, -1);
	glVertex2f(-0.65, -1);
	glVertex2f(0.15,0);
	glVertex2f(-1, 1);
	glEnd();

	glColor3ub(0.0, 122.0, 77.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.8, 1);
	glVertex2f(-1,1);
	glVertex2f(-1,-1);
	glVertex2f(-0.8,-1);
	glVertex2f(0,0);
	glVertex2f(-1, 1);
	glEnd();

	glColor3ub(0.0, 122.0, 77.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1, 0.18);
	glVertex2f(1, 0.18);
	glVertex2f(1, -0.18);
	glVertex2f(-1, -0.18);
	glVertex2f(-1, 0.12);
	glEnd();

	//yellow
	glColor3ub(255.0, 182.0, 18.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1, 0.75);
	glVertex2f(-1, -0.75);
	glVertex2f(-0.4, 0);
	glEnd();

	glColor3ub(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1,0.6);
	glVertex2f(-1,-0.6);
	glVertex2f(-0.5,0);
	glEnd();


   glFlush();



}
void DisplayFlag(){
	glClearColor(1.0, 1.0, 1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	//USA();
	//South_Africa();
	glFlush();

}
void my_menu(int id) {
	if (id == 11)
		USA();
	else if (id == 12)
		South_Africa();
	else if (id == 2)
		exit(0);
}
void my_keyboard(unsigned char key,int x,int y){
	switch (key)
	{
	case 'u': {
		USA();
		break; }
	case 's': {
		South_Africa();
		break; }
	}



}
int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 300);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Flag");
	glutDisplayFunc(DisplayFlag);
	glutKeyboardFunc(my_keyboard);
	int submenu =glutCreateMenu(my_menu);
	glutAddMenuEntry("United States Of America",11);
	glutAddMenuEntry("South Africa", 12);
	glutCreateMenu(my_menu);
	glutAddSubMenu("Flags", 1);
	glutAddMenuEntry("Exit", 2);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
}