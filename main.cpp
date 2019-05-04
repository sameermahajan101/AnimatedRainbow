
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h
#include <Math.h>     // Needed for sin, cos
#define PI 3.14159265f
 
// Global variables
char title[] = "Rainbow (2D)";  
int windowWidth  = 800;     
int windowHeight = 400;     
int windowPosX   = 50;      // Windowed mode's top-left corner x
int windowPosY   = 50;      // Windowed mode's top-left corner y
 
GLfloat Radius = 1.0f;   // Radius of the Rainbow
GLfloat X = 0.0f;         // Rainbow's center (x, y) position
GLfloat Y = -0.9f;

GLfloat Radius1 = 0.9f;   
GLfloat X1 = 0.0f;         
GLfloat Y1 = -0.7f;   

GLfloat Radius2 = 0.8f;  
GLfloat X2 = 0.0f;         
GLfloat Y2 = -0.5f;   

GLfloat Radius3 = 0.7f;  
GLfloat X3 = 0.0f;         
GLfloat Y3 = -0.4f;
 
GLfloat Radius4 = 0.6f;  
GLfloat X4 = 0.0f;         
GLfloat Y4 = -0.4f;

GLfloat Radius5 = 0.5f;  
GLfloat X5 = 0.0f;         
GLfloat Y5 = -0.4f;

GLfloat Radius6 = 0.4f;  
GLfloat X6 = 0.0f;         
GLfloat Y6 = -0.4f;

GLfloat Radius7 = 0.3f;  
GLfloat X7 = 0.0f;         
GLfloat Y7 = -0.4f;
 
//SUN
GLfloat Radius8 = 0.1f;  
GLfloat X8 = 10;         
GLfloat Y8 = 7.7; 
 
/* Initialize OpenGL Graphics */
void initGL() {
   glClearColor(0.0, 1.0, 1.0, 0.0); // Set background (clear) color to CYAN (SKY's COLOR)
}
 
/* Callback handler for window re-paint event */
void display() {
   glClear(GL_COLOR_BUFFER_BIT);  // Clear the color buffer
   glMatrixMode(GL_MODELVIEW);    // To operate on the model-view matrix
   glLoadIdentity();              // Reset model-view matrix
 
 
 
  glTranslatef(X, Y, 1.0f);  // Translate to (xPos, yPos)
   // Use triangular segments to form a circle I.E. TRIANGLE FAN
   
//		RED   
   glBegin(GL_TRIANGLE_FAN);
      glColor3f(1.0f, 0.0f, 0.0f);  // Blue
      glVertex2f(0.0f, 0.0f);       // Center of circle
      int numSegments = 100;
      GLfloat angle;
      for (int i = 0; i <= numSegments; i++) // Last vertex same as first vertex
         
	  {	 angle = i * 2.0f * PI / numSegments;  // 360 deg for all segments
         glVertex2f(cos(angle) * Radius, sin(angle) * Radius);
          //glutTimerFunc(40,makedelay,1);
         // Sleep(1000);
      }
         glEnd();
      ///////////////////////////////////////////////////////////////////////
    
       //  ORANGE
        glBegin(GL_TRIANGLE_FAN);
      		 glColor3f(1,0.5,0);
             glVertex2f(0.0f, -0.7f);       // Center of circle
	         int numSegments1 = 100;
             GLfloat angle1;
              for (int a = 0; a <= numSegments1; a++) 
			  {
               angle1 = a * 2.0f * PI / numSegments1;  
                glVertex2f(cos(angle1) * Radius1, sin(angle1) * Radius1);
              }
             glEnd();
   
    //////////////////////////////////
    
    //    YELLOW
   glBegin(GL_TRIANGLE_FAN);
      		glColor3f(1,1,0);
      glVertex2f(0.0f, -0.7f);       // Center of circle
	  int numSegments2 = 100;
      GLfloat angle2;
      for (int a = 0; a <= numSegments2; a++) 
	  { 
         angle2 = a * 2.0f * PI / numSegments2; 
         glVertex2f(cos(angle2) * Radius2, sin(angle2) * Radius2);
      }
   glEnd();
   /////////////////////////////////////////////////////////
   
   glBegin(GL_TRIANGLE_FAN);
      		glColor3f(0,1,0);
      glVertex2f(0.0f, -0.7f);       // Center of circle
	  int numSegments3 = 100;
      GLfloat angle3;
      for (int a = 0; a <= numSegments3; a++) 
	  { 
         angle3 = a * 2.0f * PI / numSegments3;  
         glVertex2f(cos(angle3) * Radius3, sin(angle3) * Radius3);
      }
   glEnd();
   ////////////////////////////////////////////////////////////////
   
   glBegin(GL_TRIANGLE_FAN);
      		glColor3f(0,0,1);
      glVertex2f(0.0f, -0.7f);       // Center of circle
	  int numSegments4 = 100;
      GLfloat angle4;
      for (int a = 0; a <= numSegments4; a++)
	   {
         angle4 = a * 2.0f * PI / numSegments4; 
         glVertex2f(cos(angle4) * Radius4, sin(angle4) * Radius4);
      }
   glEnd();
   
   
   ////////////////////////////////////////////////////////////////
   
   glBegin(GL_TRIANGLE_FAN);
      		glColor3f(1,0,0.5);//black color
      glVertex2f(0.0f, -0.7f);       // Center of circle
	  int numSegments5 = 100;
      GLfloat angle5;
      for (int a = 0; a <= numSegments5; a++)
	   { 
         angle5 = a * 2.0f * PI / numSegments5; 
         glVertex2f(cos(angle5) * Radius5, sin(angle5) * Radius5);
       }
   glEnd();
   ////////////////////////////////////////////////////////////////
   
   
   glBegin(GL_TRIANGLE_FAN);
      		glColor3f(1,0,1);
      glVertex2f(0.0f, -0.7f);       // Center of circle
	  int numSegments6 = 100;
      GLfloat angle6;
      for (int a = 0; a <= numSegments6; a++) 
	  { 
         angle6 = a * 2.0f * PI / numSegments6;  
         glVertex2f(cos(angle6) * Radius6, sin(angle6) * Radius6);
      }
   glEnd();
   ////////////////////////////////////////////////////////////////
   
    
   glBegin(GL_TRIANGLE_FAN);
      		glColor3f(0,1,1);
      glVertex2f(0.0f, -0.7f);       // Center of circle
	  int numSegments7 = 100;
      GLfloat angle7;
      for (int a = 0; a <= numSegments7; a++) 
	  { 
         angle7 = a * 2.0f * PI / numSegments7;  
         glVertex2f(cos(angle7) * Radius7, sin(angle7) * Radius7);
      }
   glEnd();
   
   ////////////////////////////////////////////////////////////////
   
glTranslatef(X3, Y3, 0.0f); 

	glBegin(GL_TRIANGLE_FAN);
   {     
   Sleep(500);
      		glColor3f(1,1,0);
      glVertex2f(100, 10);       // Center of circle
	  int numSegments8 = 100;
      GLfloat angle8;
      for (int a = 0; a <= numSegments8; a++) 
	  { 
	  glTranslatef(X3, Y3, 0.0f); 

         angle8 = a * 2.0f * PI / numSegments8;  
         glVertex2f(cos(angle8) * Radius8, sin(angle8) * Radius8);
      }

   }
   glEnd();
    glutSwapBuffers();  
   
   
   glFlush();
 
 
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
   glutInit(&argc, argv);            // Initialize GLUT
   glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode
   glutInitWindowSize(windowWidth, windowHeight);  // Initial window width and height
   glutInitWindowPosition(windowPosX, windowPosY); // Initial window top-left corner (x, y)
   glutCreateWindow(title);      // Create window with given title
   glutDisplayFunc(display);     // Register callback handler for window re-paint
   initGL();                     // Our own OpenGL initialization
   glutMainLoop();               // Enter event-processing loop
   

   
   return 0;
}
