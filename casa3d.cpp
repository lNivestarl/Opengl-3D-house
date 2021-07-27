#include <GL/glut.h>
#include <math.h>

//Amaury Ribeiro

int window;   

/* Initialize OpenGL Graphics */
void initGL() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClearDepth(1.0f);                   // Set background depth to farthest
	glEnable(GL_DEPTH_TEST);   // Enable depth testing for z-culling
	glDepthFunc(GL_LEQUAL);    // Set the type of depth-test
	glShadeModel(GL_SMOOTH);   // Enable smooth shading
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  // Nice perspective corrections
}

void sol(){
	glColor3f(1.0f, 0.841f, 0.0f);
	glPushMatrix();
	glTranslatef(20,12,-20);
	glutSolidSphere(3,50,20);
	glPopMatrix();	
}

void grama(){
	glColor3f(0.0f, 0.5f, 0.0f);
	glPushMatrix();
	glTranslatef(0,-5,0);
	glScalef(1,0,1);
	glutSolidCube(40);
	glPopMatrix();	
}

void parede(){ 	
 	glColor3f(0.69f, 0.8784f, 0.9f);
	glPushMatrix();
	glScalef(2,1,-2);
	glutSolidCube(10);
	glPopMatrix();	
}

void chao(){
	glColor3f(0.48f, 0.63f, 0.36f);
	glPushMatrix();
	glTranslatef(0,-5,0);
	glScalef(1,0,1);
	glutSolidCube(20);
	glPopMatrix();
}

void teto(){
	glColor3f(0.93f, 0.67f, 0.17f);
	glPushMatrix();
	glTranslatef(0,5,0);
	glScalef(1,0,1);
	glutSolidCube(21);
	glPopMatrix();
}

void porta(){ 	
 	glColor3f(0.60f, 0.30f, 0.1f);
	glPushMatrix();
	glTranslatef(0,-2,10);
	glScalef(1,2,0);
	glutSolidCube(3);
	glPopMatrix();	
}

void macaneta(){
	glColor3f(0.1f, 0.1f, 0.1f);
	glPushMatrix();
	glTranslatef(0.9,-2,10);
	glScalef(1,1,0);
	glutSolidCube(0.15);
	glPopMatrix();	
}

void mesa(){
	//base mesa
	glColor3f(0.4f, 0.2f, 0.1f);
	glPushMatrix();
	glTranslatef(4.4,-1,-7);
	glRotatef(-90, 0, 1, 0);
	glScalef(1,0.05,2);
	glutSolidCube(4);
	glPopMatrix();	
	
	//perna1
	glColor3f(0.4f, 0.2f, 0.1f);
	glPushMatrix();
	glTranslatef(8,-3,-6);
	glScalef(1,20,1);
	glutSolidCube(0.2);
	glPopMatrix();	
	
	//perna2
	glColor3f(0.4f, 0.2f, 0.1f);
	glPushMatrix();
	glTranslatef(8,-3,-9);
	glScalef(1,20,1);
	glutSolidCube(0.2);
	glPopMatrix();	
	
	//perna3
	glColor3f(0.4f, 0.2f, 0.1f);
	glPushMatrix();
	glTranslatef(1,-3,-6);
	glScalef(1,20,1);
	glutSolidCube(0.2);
	glPopMatrix();	
	
	//perna4
	glColor3f(0.4f, 0.2f, 0.1f);
	glPushMatrix();
	glTranslatef(1,-3,-9);
	glScalef(1,20,1);
	glutSolidCube(0.2);
	glPopMatrix();	
}

void bule(){
	glColor3f(0.41f, 0.41f, 0.41f);
	glPushMatrix();
	glTranslatef(4.4,-0.2,-7);
	glutSolidTeapot(1);
	glPopMatrix();	
}

void colchao(){
	glColor3f(0.03f, 0.3f, 0.43f);
	glPushMatrix();
	glTranslatef(-7,-4.5,-2);
	glScalef(1,0.2,2);
	glutSolidCube(5);
	glPopMatrix();	
}


void janelas(){
     	glColor3f(1.0f, 0.96f, 0.933f);
	glPushMatrix();
	glTranslatef(-5.5,0,10);
	glScalef(1,0.7,0);
	glutSolidCube(3);
	glPopMatrix();	
	
	glColor3f(1.0f, 0.96f, 0.933f);
	glPushMatrix();
	glTranslatef(5.5,0,10);
	glScalef(1,0.7,0);
	glutSolidCube(3);
	glPopMatrix();	
	
	//lateral
	glColor3f(1.0f, 0.96f, 0.933f);
	glPushMatrix();
	glTranslatef(10,0,0);
	glScalef(0,0.4,1);
	glutSolidCube(5);
	glPopMatrix();	
	
	//lateral
	glColor3f(1.0f, 0.96f, 0.933f);
	glPushMatrix();
	glTranslatef(-10,0,0);
	glScalef(0,0.4,1);
	glutSolidCube(5);
	glPopMatrix();	
}

void telhado(){	
	glColor3f(0.70f, 0.32f, 0.0f);
	glPushMatrix();
	glTranslatef(0,5,0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(45, 0, 0, 1);
	glScalef(1,1,1);
	glutSolidCone(15,7,4,4);
	glPopMatrix();
}

void chamine(){ 	
 	glColor3f(1.0f, 0.599f, 0.0f);
	glPushMatrix();
	glTranslatef(7,8,-3);
	glScalef(1,3,1);
	glutSolidCube(1.5);
	glPopMatrix();	
}


void desenha() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
	sol();
	grama();
	parede();
	chao();
	telhado();
	teto();
	colchao();
	mesa();
	bule();
	porta();
	macaneta();
	janelas();
	chamine();
	glutSwapBuffers();  // Swap the front and back frame buffers (double buffering)
}

/* Handler for window re-size event. Called back when the window first appears and
   whenever the window is re-sized with its new width and height */
void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
   // Compute aspect ratio of the new window
	if (height == 0) height = 1;                // To prevent divide by 0
	GLfloat aspect = (GLfloat)width / (GLfloat)height;

	// Set the viewport to cover the new window
	glViewport(0, 0, width, height);

	// Set the aspect ratio of the clipping volume to match the viewport
	glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
	glLoadIdentity();           // Reset
	// Enable perspective projection with fovy, aspect, zNear and zFar
	gluPerspective(45.0f, aspect, 1.0f, 100.0f);
}

void keyboard(unsigned char key, int x, int y) {

	float veloT = 0.7;
	float veloR = 4;
	switch (key) {
	

		case 'a':
		case 'A':
			glTranslatef(-veloT, 0.0, 0.0);
			break;
			//para esquerda
		case 'd':
		case 'D':
			glTranslatef(veloT, 0.0, 0.0);
			break;
			//para direita
		case 'w':
		case 'W':
			glTranslatef(0.0, 0.0, veloT);
			break;
			//para tras
		case 's':
		case 'S':
			glTranslatef(0.0, 0.0, -veloT);
			break;
			//para frente
		case 'q':
		case 'Q':
			glTranslatef(0.0, veloT, 0.0);
			break;
			//para cima
		case 'e':
		case 'E':
			glTranslatef(0.0, -veloT, 0.0);
			break;
			//para baixo
		case 'i':
		case 'I':
			glRotatef(veloT, 0.0, -veloR, 0.0);
			break;
			//rotacionar horario eixo Y
		case 'u':
		case 'U':
			glRotatef(veloT, 0.0,veloR, 0.0);
			break;
			//rotacionar antihorario eixo Y
			
		case 'm':
		case 'M':
			glRotatef(veloT, 0.0, 0.0, -veloR);
			break;
			//rotacionar horario eixo Z
		case 'n':
		case 'N':
			glRotatef(veloT, 0.0, 0.0, veloR);
			break;
			//rotacionar antihorario eixo Z
		case 'j':
		case 'J':
			glRotatef(veloT, -veloR, 0.0, 0.0);
			break;
			//rotacionar horario eixo X
		case 'k':
		case 'K':
			glRotatef(1, veloR, 0.0, 0.0);
			break;
			//rotacionar antihorario eixo X
		case 27:    //tecla ESC 

			glutDestroyWindow(window); // fechandoa janela
			exit(0); 
			break;   
	}
	desenha();
	//glutPostRedisplay(); 
}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
	glutInit(&argc, argv);            // Initialize GLUT
	glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode
	glutInitWindowSize(1300, 700);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutCreateWindow("Amaury Casa 3D");          // Create window with the given title
	glutDisplayFunc(desenha);       // Register callback handler for window re-paint event
	glutReshapeFunc(reshape);       // Register callback handler for window re-size event
	glutKeyboardFunc(keyboard);
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the infinite event-processing loop
	return 0;
}

