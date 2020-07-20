#include <windows.h>
#include <gl/glut.h>
#include <stdlib.h>

//Nadia Renatha Yuwono 672018004 & Jassen Vimala 672018030
void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void tembok();
void bangunan1();
void tebing();
void halaman();
void gerbang();
void jembatan();
void tembok1();
void bangunan2();
void bangunan3();
void bangunan4();
void pilar();
void salib();
void bangunan6();
void tembok2();
void tembok3();
void bangunan5();
void pilar1();
void bendera();
void mejakursi();
void pedang();
void perisai();
void lemari();
void lampu();
void jam();
void ukuran(int, int);
void mouseMotion(int x, int y);
void mouse(int button, int state, int x, int y);

int is_depth;

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;


int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1000, 800);
	glutInitWindowPosition(250,80);
	glutCreateWindow("Wartburg Eisenach - 672018004 672018030");
	init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(ukuran);
	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);
	glutIdleFunc(tampil);
	glutMainLoop();
	return 0;
}

void init(void){
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_LINE_SMOOTH);
//	glEnable(GL_LIGHTING);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	is_depth=1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(4.0f);
}

void tembok(){
	//depan
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(-220.0, -20.0,40.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-220.0, 40.0,40.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(50.0, 40.0,40.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(50.0, -20.0,40.0);
	glEnd();
	
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(-220.0, -20.0,20.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-220.0, 40.0,20.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(50.0, 40.0,20.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(50.0, -20.0,20.0);
	glEnd();
	
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-220.0, -20.0,40.0);
	glVertex3f(50.0, -20.0,40.0);
	glVertex3f(50.0, -20.0,20.0);
	glVertex3f(-220.0, -20.0,20.0);
	glEnd();
	
	//atas
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(-220.0, 40.0,15.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-220.0, 40.0,45.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(50.0, 40.0,45.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(50.0, 40.0,15.0);
	glEnd();
	
	//atas depan
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.2, 0.0);
	glVertex3f(-220.0, 40.0,45.0);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(-220.0, 60.0,35.0);
	glColor3f(0.8, 0.4, 0.0);
	glVertex3f(50.0, 60.0,35.0);
	glColor3f(0.8, 0.4, 0.2);
	glVertex3f(50.0, 40.0,45.0);
	glEnd();
	
	//atas belakang
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.2, 0.0);
	glVertex3f(-220.0, 40.0,15.0);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(-220.0, 60.0,35.0);
	glColor3f(0.8, 0.4, 0.0);
	glVertex3f(50.0, 60.0,35.0);
	glColor3f(0.8, 0.4, 0.2);
	glVertex3f(50.0, 40.0,15.0);
	glEnd();
	
}

void bangunan1(){
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.7, 0.4);
	glVertex3f(-50.0, -20.0,-170.0);
	glColor3f(0.8, 0.6, 0.3);
	glVertex3f(-50.0, 90.0,-170.0);
	glColor3f(0.6, 0.4, 0.2);
	glVertex3f(110.0, 90.0,-170.0);
	glColor3f(0.3, 0.1, 0.0);
	glVertex3f(110.0, -20.0,-170.0);
	glEnd();
	
	//kanan
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.7, 0.4);
	glVertex3f(110.0, 90.0,0.0);
	glColor3f(0.8, 0.6, 0.3);
	glVertex3f(110.0, -20.0,0.0);
	glColor3f(0.6, 0.4, 0.2);
	glVertex3f(110.0, -20.0,-170.0);
	glColor3f(0.3, 0.1, 0.0);
	glVertex3f(110.0, 90.0,-170.0);
	glEnd();
	
	//kiri1 di belakang
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.7, 0.4);
	glVertex3f(-50.0, 90.0,-100.0);
	glColor3f(0.8, 0.6, 0.3);
	glVertex3f(-50.0, -20.0,-100.0);
	glColor3f(0.6, 0.4, 0.2);
	glVertex3f(-50.0, -20.0,-170.0);
	glColor3f(0.3, 0.1, 0.0);
	glVertex3f(-50.0, 90.0,-170.0);
	glEnd();
	
	//kiri2 di depan
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.7, 0.4);
	glVertex3f(50.0, 90.0,0.0);
	glColor3f(0.8, 0.6, 0.3);
	glVertex3f(50.0, -20.0,0.0);
	glColor3f(0.6, 0.4, 0.2);
	glVertex3f(50.0, -20.0,-100.0);
	glColor3f(0.3, 0.1, 0.0);
	glVertex3f(50.0, 90.0,-100.0);
	glEnd();
	
	//pintu hitam
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(49.0, 50.0,-30.0);
	glVertex3f(49.0, -20.0,-30.0);
	glVertex3f(49.0, -20.0,-70.0);
	glVertex3f(49.0, 50.0,-70.0);
	glEnd();
	
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.7, 0.0);
	glVertex3f(-50.0, -20.0,-100.0);
	glVertex3f(50.0, -20.0,-100.0);
	glColor3f(0.8, 0.5, 0.0);
	glVertex3f(50.0, -20.0,-170.0);
	glVertex3f(-50.0, -20.0,-170.0);
	glEnd();
	
	//depan di tengah
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.7, 0.4);
	glVertex3f(-50.0, -20.0,-100.0);
	glColor3f(0.8, 0.6, 0.3);
	glVertex3f(-50.0, 90.0,-100.0);
	glColor3f(0.6, 0.4, 0.2);
	glVertex3f(50.0, 90.0,-100.0);
	glColor3f(0.3, 0.1, 0.0);
	glVertex3f(50.0, -20.0,-100.0);
	glEnd();
	
	//pintu oranye
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-15.0, -20.0,-99.0);
	glVertex3f(-15.0, 40.0,-99.0);
	glVertex3f(15.0, 40.0,-99.0);
	glVertex3f(15.0, -20.0,-99.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-15.0, 20.0,-99.0);
	glVertex3f(15.0, 20.0,-99.0);
	glEnd();
	
	
	// atap1
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-55.0, 90.0,-100.0);
	glVertex3f(-55.0, 90.0,-170.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-30.0, 130.0,-135.0);
	glEnd();
	
	//atap2
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-55.0, 90.0,-100.0);
	glVertex3f(50.0, 90.0,-100.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(80.0,130.0,-135.0);
	glVertex3f(-30.0, 130.0,-135.0);
	glEnd();
	
	//atap3
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(50.0, 90.0,-100.0);
	glVertex3f(50.0, 90.0,0.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(80.0,130.0,-15.0);
	glVertex3f(80.0,130.0,-135.0);
	glEnd();
	
	//atap4
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(50.0, 90.0,0.0);
	glVertex3f(110.0, 90.0,0.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(80.0,130.0,-15.0);
	glEnd();
	
	//atap5
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(110.0, 90.0,0.0);
	glVertex3f(110.0, 90.0,-170.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(80.0,130.0,-135.0);
	glVertex3f(80.0,130.0,-15.0);
	glEnd();
	
	//atap6
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(110.0, 90.0,-170.0);
	glVertex3f(-55.0, 90.0,-170.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-30.0, 130.0,-135.0);	
	glVertex3f(80.0,130.0,-135.0);
	glEnd();
	
}

void tebing(){
	//depan
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.8,0.0);
	glVertex3f(-720.0, -19.0,10.0);	
	glVertex3f(200.0, -19.0,40.0);
	glColor3f(0.0,0.5,0.0);
	glVertex3f(200.0, -30.0,60.0);
	glVertex3f(200.0, -50.0,60.0);
	glColor3f(0.0,0.3,0.0);
	glVertex3f(200.0, -50.0,80.0);
	glVertex3f(-720.0, -50.0,80.0);
	glColor3f(0.0,0.5,0.0);
	glVertex3f(-720.0, -50.0,60.0);
	glVertex3f(-720.0, -30.0,60.0);
	glEnd();
	
	
	//kiri
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.8, 0.0);
	glVertex3f(-750.0, -20.0,-190.0);
	glVertex3f(-700.0, -20.0,50.0);
	glColor3f(0.0,0.5,0.0);
	glVertex3f(-720.0, -20.0,50.0);
	glVertex3f(-720.0, -30.0,50.0);
	glColor3f(0.0,0.3,0.0);
	glVertex3f(-730.0, -40.0,50.0);
	glVertex3f(-730.0, -50.0,50.0);
	glVertex3f(-740.0, -50.0,50.0);
	glVertex3f(-800.0, -50.0,-190.0);
	glVertex3f(-790.0, -50.0,-190.0);
	glVertex3f(-790.0, -40.0,-190.0);
	glColor3f(0.0,0.5,0.0);
	glVertex3f(-770.0, -30.0,-190.0);
	glVertex3f(-770.0, -20.0,-190.0);
	glEnd();
	
	//kanan
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.8, 0.0);
	glVertex3f(110.0, -19.0,-190.0);
	glVertex3f(110.0, -19.0,10.0);
	glColor3f(0.0,0.5,0.0);
	glVertex3f(130.0, -19.0,10.0);
	glVertex3f(130.0, -30.0,10.0);
	glColor3f(0.0,0.3,0.0);
	glVertex3f(140.0, -40.0,10.0);
	glVertex3f(140.0, -50.0,10.0);
	glVertex3f(150.0, -50.0,10.0);
	glVertex3f(150.0, -50.0,-190.0);
	glVertex3f(140.0, -50.0,-190.0);
	glVertex3f(140.0, -40.0,-190.0);
	glColor3f(0.0,0.5,0.0);
	glVertex3f(130.0, -30.0,-190.0);
	glVertex3f(130.0, -19.0,-190.0);
	glEnd();
	
	//belakang
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.8,0.0);
	glVertex3f(-770.0, -20.0,-170.0);	
	glVertex3f(130.0, -20.0,-170.0);
	glColor3f(0.0,0.5,0.0);
	glVertex3f(130.0, -30.0,-190.0);
	glVertex3f(130.0, -50.0,-190.0);
	glColor3f(0.0,0.3,0.0);
	glVertex3f(130.0, -50.0,-210.0);
	glVertex3f(-770.0, -50.0,-210.0);
	glColor3f(0.0,0.5,0.0);
	glVertex3f(-770.0, -50.0,-190.0);
	glVertex3f(-770.0, -30.0,-190.0);
	glEnd();
	
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.3,0.5,0.0);
	glVertex3f(120.0, -50.0,80.0);
	glColor3f(0.3,0.6,0.0);
	glVertex3f(-700.0, -50.0,80.0);
	glColor3f(0.3,0.5,0.0);
	glVertex3f(-750.0, -50.0,-210.0);
	glColor3f(0.3,0.6,0.0);
	glVertex3f(120.0, -50.0,-210.0);
	glEnd();
	
	//belakang
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.8,0.0);
	glVertex3f(120.0, -19.0,10.0);	
	glVertex3f(200.0, -19.0,10.0);
	glColor3f(0.0,0.5,0.0);
	glVertex3f(200.0, -30.0,-10.0);
	glVertex3f(200.0, -50.0,-10.0);
	glColor3f(0.0,0.3,0.0);
	glVertex3f(200.0, -50.0,-30.0);
	glVertex3f(-120.0, -50.0,-30.0);
	glColor3f(0.0,0.5,0.0);
	glVertex3f(-120.0, -50.0,-10.0);
	glVertex3f(-120.0, -30.0,-10.0);
	glEnd();

	
}

void halaman(){
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.5, 0.0);
	glVertex3f(-710.0, -20.0,20.0);
	glColor3f(0.6, 0.4, 0.0);
	glVertex3f(110.0, -20.0,20.0);
	glColor3f(0.8, 0.5, 0.0);
	glVertex3f(110.0, -20.0,-170.0);
	glColor3f(0.6, 0.4, 0.0);
	glVertex3f(-760.0, -20.0,-170.0);
	glEnd();
	glBegin(GL_QUADS); //kanan belakang
	glColor3f(0.6, 0.4, 0.0);
	glVertex3f(50.0, -20.0,-100.0);
	glColor3f(0.8, 0.5, 0.0);
	glVertex3f(110.0, -20.0,-100.0);
	glVertex3f(110.0, -20.0,-170.0);
	glColor3f(0.6, 0.4, 0.0);
	glVertex3f(50.0, -20.0,-170.0);
	glEnd();

}

void gerbang(){
	//depan
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.2, 0.2);
	glVertex3f(50.0, -20.0,50.0);
	glColor3f(0.3, 0.1, 0.0);
	glVertex3f(50.0, 110.0,50.0);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(120.0, 110.0,50.0);
	glColor3f(0.5, 0.2, 0.0);
	glVertex3f(120.0, -20.0,50.0);
	glEnd();
	
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(50.0, -20.2,50.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(50.0, -20.2,0.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(120.0, -20.2,0.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(120.0, -20.2,50.0);
	glEnd();
	
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.2, 0.2);
	glVertex3f(50.0, -20.0,0.0);
	glColor3f(0.3, 0.1, 0.0);
	glVertex3f(50.0, 110.0,0.0);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(120.0, 110.0,0.0);
	glColor3f(0.5, 0.2, 0.0);
	glVertex3f(120.0, -20.0,0.0);
	glEnd();

	//kiri
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.2, 0.2);
	glVertex3f(50.0, -20.0,50.0);
	glColor3f(0.3, 0.1, 0.0);
	glVertex3f(50.0, 110.0,50.0);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(50.0, 110.0,0.0);
	glColor3f(0.5, 0.2, 0.0);
	glVertex3f(50.0, -20.0,0.0);
	glEnd();
	
	//kanan
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.2, 0.2);
	glVertex3f(120.0, -20.0,50.0);
	glColor3f(0.3, 0.1, 0.0);
	glVertex3f(120.0, 110.0,50.0);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(120.0, 110.0,0.0);
	glColor3f(0.5, 0.2, 0.0);
	glVertex3f(120.0, -20.0,0.0);
	glEnd();
	
	//pintu
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(121.0, -20.0,40.0);
	glVertex3f(121.0, 60.0,40.0);
	glVertex3f(121.0, 60.0,10.0);
	glVertex3f(121.0, -20.0,10.0);
	glEnd();
	
	//atas
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(45.0, 110.2,55.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(45.0, 110.2,-5.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(125.0, 110.2,-5.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(125.0, 110.2,55.0);
	glEnd();
	
	//1
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(45.0, 110.2,55.0);
	glVertex3f(45.0, 110.2,-5.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(85.0,160.0,25.0);
	glEnd();
	
	//2
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(125.0, 110.2,55.0);
	glVertex3f(125.0, 110.2,-5.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(85.0,160.0,25.0);
	glEnd();
	
	//3
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(45.0, 110.2,-5.0);
	glVertex3f(125.0, 110.2,-5.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(85.0,160.0,25.0);
	glEnd();
	
	//4
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(45.0, 110.2,55.0);
	glVertex3f(125.0, 110.2,55.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(85.0,160.0,25.0);
	glEnd();
}

void jembatan(){
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(120.0, -20.0,40.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(120.0, -20.0,10.0);
	glVertex3f(200.0, -20.0,10.0);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(200.0, -20.0,40.0);
	glEnd();
	
	//depan
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(120.0, -20.0,40.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(120.0, 10.0,40.0);
	glVertex3f(200.0, 10.0,40.0);
	glColor3f(0.6, 0.6, 0.6);	
	glVertex3f(200.0, -20.0,40.0);
	glEnd();
	//1
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(120.0, -20.0,35.0);
	glVertex3f(120.0, 10.0,35.0);
	glVertex3f(200.0, 10.0,35.0);
	glVertex3f(200.0, -20.0,35.0);
	glEnd();
	//2
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(120.0, 10.0,40.0);
	glVertex3f(120.0, 10.0,35.0);
	glVertex3f(200.0, 10.0,35.0);
	glVertex3f(200.0, 10.0,40.0);
	glEnd();
	
	//3
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(200.0, -20.0,40.0);
	glVertex3f(200.0, -20.0,35.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(200.0, 10.0,35.0);
	glVertex3f(200.0, 10.0,40.0);
	glEnd();
	
	
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(120.0, -20.0,10.0);
	glVertex3f(120.0, 10.0,10.0);
	glVertex3f(200.0, 10.0,10.0);
	glVertex3f(200.0, -20.0,10.0);
	glEnd();
	//1
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(120.0, -20.0,15.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(120.0, 10.0,15.0);
	glVertex3f(200.0, 10.0,15.0);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(200.0, -20.0,15.0);
	glEnd();
	//2
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(120.0, 10.0,15.0);
	glVertex3f(120.0, 10.0,10.0);
	glVertex3f(200.0, 10.0,10.0);
	glVertex3f(200.0, 10.0,15.0);
	glEnd();
	//3
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(200.0, -20.0,15.0);
	glVertex3f(200.0, -20.0,10.0);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(200.0, 10.0,10.0);
	glVertex3f(200.0, 10.0,15.0);
	glEnd();
	
}

void tembok1(){
	//depan
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(-50.0, 40.0,-150.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-50.0, -20.0,-150.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-150.0, -20.0,-150.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-150.0, 40.0,-150.0);
	glEnd();
	
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(-50.0, 40.0,-160.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-50.0, -20.0,-160.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-150.0, -20.0,-160.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-150.0, 40.0,-160.0);
	glEnd();
	
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(-50.0, -20.0,-150.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-50.0, -20.0,-160.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-150.0, -20.0,-160.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-150.0, -20.0,-150.0);
	glEnd();
	
	//depan atas 
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-50.0, 40.0,-165.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-50.0, 40.0,-145.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-150.0, 40.0,-145.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-150.0, 40.0,-165.0);
	glEnd();
	
	//atas depan / atap
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.2, 0.0);
	glVertex3f(-50.0, 60.0,-155.0);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(-50.0, 40.0,-145.0);
	glColor3f(0.8, 0.4, 0.0);
	glVertex3f(-150.0, 40.0,-145.0);
	glColor3f(0.8, 0.4, 0.2);
	glVertex3f(-150.0, 60.0,-155.0);
	glEnd();
	
	//atas belakang / atap
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.2, 0.0);
	glVertex3f(-50.0, 60.0,-155.0);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(-50.0, 40.0,-165.0);
	glColor3f(0.8, 0.4, 0.0);
	glVertex3f(-150.0, 40.0,-165.0);
	glColor3f(0.8, 0.4, 0.2);
	glVertex3f(-150.0, 60.0,-155.0);
	glEnd();
}

void tembok2(){//belakang sebelah tembok 1
	//depan
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(-350.0, 40.0,-150.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-350.0, -20.0,-150.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-450.0, -20.0,-160.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-450.0, 40.0,-160.0);
	glEnd();
	
	//atas
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(-350.0, 40.0,-150.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-350.0, 40.0,-160.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-450.0, 40.0,-170.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-450.0, 40.0,-160.0);
	glEnd();
	
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(-350.0, 40.0,-160.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-350.0, -20.0,-160.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-450.0, -20.0,-170.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-450.0, 40.0,-170.0);
	glEnd();
	
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(-350.0, -20.0,-150.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-350.0, -20.0,-160.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-450.0, -20.0,-170.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-450.0, -20.0,-160.0);
	glEnd();

}

void bangunan2(){
	//depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-400.0, 100.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-400.0, -20.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-220.0, -20.0,60.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-220.0, 100.0,60.0);
	glEnd();
	
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-400.0, -20.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-400.0, -20.0,-10.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-220.0, -20.0,-10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-220.0, -20.0,60.0);
	glEnd();
	
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-400.0, 100.0,-10.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-400.0, -20.0,-10.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-220.0, -20.0,-10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-220.0, 100.0,-10.0);
	glEnd();
	
	//kanan
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-220.0, 100.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-220.0, -20.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-220.0, -20.0,-10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-220.0, 100.0,-10.0);
	glVertex3f(-220.0, 150.0,20.0);
	glEnd();
	
	//kiri
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-400.0, 100.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-400.0, -20.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-400.0, -20.0,-10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-400.0, 100.0,-10.0);
	glVertex3f(-400.0, 150.0,20.0);
	glEnd();
	
	//atap depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-400.0, 150.0,20.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-400.0, 100.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-220.0, 100.0,60.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-220.0, 150.0,20.0);
	glEnd();
	
	//atap belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-400.0, 150.0,20.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-400.0, 100.0,-10.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-220.0, 100.0,-10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-220.0, 150.0,20.0);
	glEnd();
	
}

void bangunan3(){
	//depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-350.0, 100.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-350.0, -20.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-150.0, -20.0,-110.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-150.0, 100.0,-110.0);
	glEnd();
	
	//kanan
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-150.0, 100.0,-170.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-150.0, -20.0,-170.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-150.0, -20.0,-110.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-150.0, 100.0,-110.0);
	glVertex3f(-150.0, 150.0,-140.0);
	glEnd();
	
	//kanan
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-350.0, 100.0,-170.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-350.0, -20.0,-170.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-350.0, -20.0,-110.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-350.0, 100.0,-110.0);
	glVertex3f(-350.0, 150.0,-140.0);
	glEnd();
	
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-350.0, 100.0,-170.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-350.0, -20.0,-170.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-150.0, -20.0,-170.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-150.0, 100.0,-170.0);
	glEnd();
	
	//atap depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-350.0, 150.0,-140.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-350.0, 100.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-150.0, 100.0,-110.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-150.0, 150.0,-140.0);
	glEnd();
	
	//atap belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-350.0, 150.0,-140.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-350.0, 100.0,-170.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-150.0, 100.0,-170.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-150.0, 150.0,-140.0);
	glEnd();
}

void bangunan4(){//bangunan antara 2 dan 3
	//kanan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-230.0, 40.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-230.0, -20.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-230.0, -20.0,-10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-230.0, 40.0,-10.0);
	glEnd();
	
	//pintu
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-229.0, 35.0,-80.0);
	glVertex3f(-229.0, -20.0,-80.0);
	glVertex3f(-229.0, -20.0,-40.0);
	glVertex3f(-229.0, 35.0,-40.0);
	glEnd();
	
	//kiri
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-280.0, 40.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-280.0, -20.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-280.0, -20.0,-10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-280.0, 40.0,-10.0);
	glEnd();	
	
	//kiri
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-281.0, 35.0,-80.0);
	glVertex3f(-281.0, -20.0,-80.0);
	glVertex3f(-281.0, -20.0,-40.0);
	glVertex3f(-281.0, 35.0,-40.0);
	glEnd();
		
	//atas
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-280.0, 40.0,-110.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-280.0, 40.0,-10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-230.0, 40.0,-10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-230.0, 40.0,-110.0);
	glEnd();
	//kanan atas
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-240.0, 60.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-240.0, 40.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-240.0, 40.0,-10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-240.0, 60.0,-10.0);
	glEnd();
	//kiri atas
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-270.0, 60.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-270.0, 40.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-270.0, 40.0,-10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-270.0, 60.0,-10.0);
	glEnd();	
	//atap kanan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-255.0, 70.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-240.0, 60.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-240.0, 60.0,-10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-255.0, 70.0,-10.0);
	glEnd();
	//atap kiri
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-255.0, 70.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-270.0, 60.0,-110.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-270.0, 60.0,-10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-255.0, 70.0,-10.0);
	glEnd();	
}

void pilar(){//yang ada salib
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.2, 0.2);
	glVertex3f(-380.0, 250.0,-30.0);
	glColor3f(0.3, 0.1, 0.0);
	glVertex3f(-380.0, -20.0,-30.0);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(-340.0, -20.0,-30.0);
	glColor3f(0.5, 0.2, 0.0);
	glVertex3f(-340.0, 250.0,-30.0);
	glEnd();
	
	//depan
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.2, 0.2);
	glVertex3f(-380.0, 130.0,10.0);
	glColor3f(0.3, 0.1, 0.0);
	glVertex3f(-380.0, 250.0,10.0);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(-340.0, 250.0,10.0);
	glColor3f(0.5, 0.2, 0.0);
	glVertex3f(-340.0, 130.0,10.0);
	glEnd();
	
	//kiri
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.2, 0.2);
	glVertex3f(-380.0, 250.0,-30.0);
	glColor3f(0.3, 0.1, 0.0);
	glVertex3f(-380.0, -20.0,-30.0);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(-380.0, -20.0,10.0);
	glColor3f(0.5, 0.2, 0.0);
	glVertex3f(-380.0, 250.0,10.0);
	glEnd();
	
	//kanan
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.2, 0.2);
	glVertex3f(-340.0, 250.0,-30.0);
	glColor3f(0.3, 0.1, 0.0);
	glVertex3f(-340.0, -20.0,-30.0);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(-340.0, -20.0,10.0);
	glColor3f(0.5, 0.2, 0.0);
	glVertex3f(-340.0, 250.0,10.0);
	glEnd();
	
	//atas
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-380.0, 240.0,-30.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-380.0, 240.0,10.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-340.0, 240.0,10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-340.0, 240.0,-30.0);
	glEnd();
	
	//atap belakang
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-380.0, 240.0,-30.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-340.0, 240.0,-30.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-360.0, 300.0,-10.0);
	glEnd();
	
	// atap depan
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-380.0, 240.0,10.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-340.0, 240.0,10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-360.0, 300.0,-10.0);
	glEnd();	
		
	//atap kanan
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-340.0, 240.0,-30.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-340.0, 240.0,10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-360.0, 300.0,-10.0);
	glEnd();
	
	//atap kiri
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-380.0, 240.0,-30.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-380.0, 240.0,10.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-360.0, 300.0,-10.0);
	glEnd();
	
}

void salib(){
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-360.0, 290.0,-10.0);
	glVertex3f(-360.0, 330.0,-10.0);
	glVertex3f(-360.0, 320.0,-20.0);
	glVertex3f(-360.0, 320.0,0.0);
	glEnd();
}

void bangunan5(){
 //depan
 glBegin(GL_QUADS);
 glColor3f(0.5, 0.3, 0.0);
 glVertex3f(-550.0, 100.0,-120.0);
 glColor3f(0.8, 0.6, 0.0);
 glVertex3f(-550.0, -20.0,-120.0);
 glColor3f(0.8, 0.6, 0.0);
 glVertex3f(-450.0, -20.0,-120.0);
 glColor3f(0.5, 0.3, 0.0);
 glVertex3f(-450.0, 100.0,-120.0);
 glEnd();
 
 //pintu
 glBegin(GL_QUADS);
 glColor3f(1.0, 0.3, 0.0);
 glVertex3f(-510.0, 50.0,-119.0);
 glVertex3f(-510.0, -20.0,-119.0);
 glVertex3f(-490.0, -20.0,-119.0);
 glVertex3f(-490.0, 50.0,-119.0);
 glEnd();
 
 //kanan
 glBegin(GL_POLYGON);
 glColor3f(0.5, 0.3, 0.0);
 glVertex3f(-450.0, 100.0,-180.0);
 glColor3f(0.8, 0.6, 0.0);
 glVertex3f(-450.0, -20.0,-180.0);
 glColor3f(0.8, 0.6, 0.0);
 glVertex3f(-450.0, -20.0,-120.0);
 glColor3f(0.5, 0.3, 0.0);
 glVertex3f(-450.0, 100.0,-120.0);
 glVertex3f(-450.0, 150.0,-150.0);
 glEnd();
 
 //kiri
 glBegin(GL_POLYGON);
 glColor3f(0.5, 0.3, 0.0);
 glVertex3f(-550.0, 100.0,-180.0);
 glColor3f(0.8, 0.6, 0.0);
 glVertex3f(-550.0, -20.0,-180.0);
 glColor3f(0.8, 0.6, 0.0);
 glVertex3f(-550.0, -20.0,-120.0);
 glColor3f(0.5, 0.3, 0.0);
 glVertex3f(-550.0, 100.0,-120.0);
 glVertex3f(-550.0, 150.0,-150.0);
 glEnd();
 
 //belakang
 glBegin(GL_QUADS);
 glColor3f(0.5, 0.3, 0.0);
 glVertex3f(-550.0, 100.0,-180.0);
 glColor3f(0.8, 0.6, 0.0);
 glVertex3f(-550.0, -20.0,-180.0);
 glColor3f(0.8, 0.6, 0.0);
 glVertex3f(-450.0, -20.0,-180.0);
 glColor3f(0.5, 0.3, 0.0);
 glVertex3f(-450.0, 100.0,-180.0);
 glEnd();
 
 //atap depan
 glBegin(GL_QUADS);
 glColor3f(0.5, 0.3, 0.0);
 glVertex3f(-550.0, 150.0,-150.0);
 glColor3f(0.8, 0.6, 0.0);
 glVertex3f(-550.0, 100.0,-120.0);
 glColor3f(0.8, 0.6, 0.0);
 glVertex3f(-450.0, 100.0,-120.0);
 glColor3f(0.5, 0.3, 0.0);
 glVertex3f(-450.0, 150.0,-150.0);
 glEnd();
 
 //atap belakang
 glBegin(GL_QUADS);
 glColor3f(0.5, 0.3, 0.0);
 glVertex3f(-550.0, 150.0,-150.0);
 glColor3f(0.8, 0.6, 0.0);
 glVertex3f(-550.0, 100.0,-180.0);
 glColor3f(0.8, 0.6, 0.0);
 glVertex3f(-450.0, 100.0,-180.0);
 glColor3f(0.5, 0.3, 0.0);
 glVertex3f(-450.0, 150.0,-150.0);
 glEnd();
}

void bangunan6(){
	//kanan
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-400.0, 140.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-400.0, -20.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-400.0, -20.0,-30.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-400.0, 140.0,-30.0);
	glVertex3f(-400.0, 180.0,5.0);
	glEnd();
	
	//depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-400.0, 140.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-400.0, -20.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-600.0, -20.0,60.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-600.0, 140.0,60.0);
	glEnd();
	
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-400.0, 140.0,-30.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-400.0, -20.0,-30.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-600.0, -20.0,-30.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-600.0, 140.0,-30.0);
	glEnd();
	
	//pintu
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.3, 0.0);
	glVertex3f(-490.0, 50.0,-31.0);
	glVertex3f(-490.0, -20.0,-31.0);
	glVertex3f(-510.0, -20.0,-31.0);
	glVertex3f(-510.0, 50.0,-31.0);
	glEnd();
	
	//kanan
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-600.0, 140.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-600.0, -20.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-600.0, -20.0,-30.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-600.0, 140.0,-30.0);
	glVertex3f(-600.0, 180.0,5.0);
	glEnd();
	
	//atas depan 
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-400.0, 180.0,5.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-400.0, 140.0,60.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-600.0, 140.0,60.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-600.0, 180.0,5.0);
	glEnd();	
	
	//atas belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-400.0, 180.0,5.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-400.0, 140.0,-30.0);
	glColor3f(0.8, 0.6, 0.0);
	glVertex3f(-600.0, 140.0,-30.0);
	glColor3f(0.5, 0.3, 0.0);
	glVertex3f(-600.0, 180.0,5.0);
	glEnd();
	
}

void tembok3(){
	//belakang1 depan
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-600.0, 40.0,10.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-600.0, -20.0,10.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-700.0, -20.0,0.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-700.0, 40.0,0.0);
	glEnd();
	
	//depan1
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-600.0, 40.0,20.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-600.0, -20.0,20.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-710.0, -20.0,10.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-710.0, 40.0,10.0);
	glEnd();
	
	//atas1 
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.8, 0.4);
	glVertex3f(-600.0, 40.0,20.0);
	glColor3f(0.8, 0.8, 0.2);
	glVertex3f(-600.0, 40.0,10.0);
	glColor3f(0.9, 0.7, 0.3);
	glVertex3f(-700.0, 40.0,0.0);
	glColor3f(0.8, 0.8, 0.3);
	glVertex3f(-710.0, 40.0,10.0);
	glEnd();
	
	//belakang2
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-700.0, 40.0,0.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-700.0, -20.0,0.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-750.0, -20.0,-160.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-750.0, 40.0,-160.0);
	glEnd();
	
	//depan2
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-710.0, 40.0,10.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-710.0, -20.0,10.0);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-760.0, -20.0,-170.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-760.0, 40.0,-170.0);
	glEnd();
	
	//atas2
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.8, 0.4);
	glVertex3f(-710.0, 40.0,10.0);
	glColor3f(0.8, 0.8, 0.2);
	glVertex3f(-700.0, 40.0,0.0);
	glColor3f(0.9, 0.7, 0.3);
	glVertex3f(-750.0, 40.0,-160.0);
	glColor3f(0.8, 0.8, 0.3);
	glVertex3f(-760.0, 40.0,-170.0);
	glEnd();
	
	//belakang3
 	glBegin(GL_POLYGON);
 	glColor3f(0.6, 0.6, 0.6);
 	glVertex3f(-550.0, 40.0,-170.0);
 	glColor3f(0.1, 0.1, 0.1);
 	glVertex3f(-550.0, -20.0,-170.0);
 	glColor3f(0.4, 0.4, 0.4);
 	glVertex3f(-760.0, -20.0,-170.0);
 	glColor3f(0.5, 0.5, 0.5);
 	glVertex3f(-760.0, 40.0,-170.0);
 	glEnd();
 	
	//depan3
 	glBegin(GL_POLYGON);
 	glColor3f(0.6, 0.6, 0.6);
 	glVertex3f(-550.0, 40.0,-160.0);
 	glColor3f(0.1, 0.1, 0.1);
 	glVertex3f(-550.0, -20.0,-160.0);
 	glColor3f(0.4, 0.4, 0.4);
 	glVertex3f(-750.0, -20.0,-160.0);
 	glColor3f(0.5, 0.5, 0.5);
 	glVertex3f(-750.0, 40.0,-160.0);
 	glEnd();
 	
 	//atas3
 	glBegin(GL_POLYGON);
 	glColor3f(0.8, 0.8, 0.4);
 	glVertex3f(-550.0, 40.0,-160.0);
 	glColor3f(0.8, 0.8, 0.2);
 	glVertex3f(-550.0, 40.0,-170.0);
 	glColor3f(0.9, 0.7, 0.3);
 	glVertex3f(-760.0, 40.0,-170.0);
 	glColor3f(0.8, 0.8, 0.3);
 	glVertex3f(-750.0, 40.0,-160.0);
 	glEnd();
 
}

void pilar1(){//yang ada bendera
	//belakang
 	glBegin(GL_POLYGON);
 	glColor3f(0.4, 0.2, 0.2);
 	glVertex3f(-600.0, 300.0,-150.0);
 	glColor3f(0.3, 0.1, 0.0);
 	glVertex3f(-600.0, -20.0,-150.0);
 	glColor3f(0.6, 0.2, 0.0);
 	glVertex3f(-700.0, -20.0,-150.0);
 	glColor3f(0.5, 0.2, 0.0);
 	glVertex3f(-700.0, 300.0,-150.0);
 	glEnd();
 	
	//kiri
 	glBegin(GL_POLYGON);
 	glColor3f(0.4, 0.2, 0.2);
 	glVertex3f(-700.0, 300.0,-150.0);
 	glColor3f(0.3, 0.1, 0.0);
 	glVertex3f(-700.0, -20.0,-150.0);
 	glColor3f(0.6, 0.2, 0.0);
 	glVertex3f(-700.0, -20.0,-100.0);
 	glColor3f(0.5, 0.2, 0.0);
 	glVertex3f(-700.0, 300.0,-100.0);
 	glEnd();
 	
 	//kanan
 	glBegin(GL_POLYGON);
 	glColor3f(0.4, 0.2, 0.2);
 	glVertex3f(-600.0, 300.0,-150.0);
 	glColor3f(0.3, 0.1, 0.0);
 	glVertex3f(-600.0, -20.0,-150.0);
 	glColor3f(0.6, 0.2, 0.0);
 	glVertex3f(-600.0, -20.0,-100.0);
 	glColor3f(0.5, 0.2, 0.0);
 	glVertex3f(-600.0, 300.0,-100.0);
 	glEnd();
 	
	//depan
 	glBegin(GL_POLYGON);
 	glColor3f(0.4, 0.2, 0.2);
 	glVertex3f(-600.0, 300.0,-100.0);
 	glColor3f(0.3, 0.1, 0.0);
 	glVertex3f(-600.0, -20.0,-100.0);
 	glColor3f(0.6, 0.2, 0.0);
 	glVertex3f(-700.0, -20.0,-100.0);
 	glColor3f(0.5, 0.2, 0.0);
 	glVertex3f(-700.0, 300.0,-100.0);
 	glEnd();
 	
 	//pintu
 	glBegin(GL_POLYGON);
 	glColor3f(0.0, 0.0, 0.0);
 	glVertex3f(-640.0, 40.0,-99.0);
 	glVertex3f(-640.0, -20.0,-99.0);
 	glVertex3f(-660.0, -20.0,-99.0);
 	glVertex3f(-660.0, 40.0,-99.0);
 	glEnd();
 	
 	//atas
 	glBegin(GL_POLYGON);
 	glColor3f(0.4, 0.2, 0.2);
 	glVertex3f(-600.0, 290.0,-150.0);
 	glColor3f(0.3, 0.1, 0.0);
 	glVertex3f(-600.0, 290.0,-100.0);
 	glColor3f(0.6, 0.2, 0.0);
 	glVertex3f(-700.0, 290.0,-100.0);
 	glColor3f(0.5, 0.2, 0.0);
 	glVertex3f(-700.0, 290.0,-150.0);
 	glEnd();
}

void bendera(){
	//tiang
 	glBegin(GL_LINES);
 	glColor3f(0.0, 0.0, 0.0);
 	glVertex3f(-650.0, 290.0,-125.0);
 	glColor3f(0.0, 0.0, 0.0);
 	glVertex3f(-650.0, 370.0,-125.0);
 	glEnd();	
 	
 	glBegin(GL_QUADS);//hitam
 	glColor3f(0.0, 0.0, 0.0);
 	glVertex3f(-650.0, 370.0,-125.0);
 	glVertex3f(-690.0, 370.0,-125.0);
 	glVertex3f(-690.0, 360.0,-125.0);
 	glVertex3f(-650.0, 360.0,-125.0);
 	glEnd();
 	glBegin(GL_QUADS);//merah
 	glColor3f(1.0, 0.0, 0.0);
 	glVertex3f(-650.0, 360.0,-125.0);
 	glVertex3f(-690.0, 360.0,-125.0);
 	glVertex3f(-690.0, 350.0,-125.0);
 	glVertex3f(-650.0, 350.0,-125.0);
 	glEnd();
 	glBegin(GL_QUADS);//kuning
 	glColor3f(1.0, 1.0, 0.0);
 	glVertex3f(-650.0, 350.0,-125.0);
 	glVertex3f(-690.0, 350.0,-125.0);
 	glVertex3f(-690.0, 340.0,-125.0);
 	glVertex3f(-650.0, 340.0,-125.0);
 	glEnd();
}

void karpet(){
	glBegin(GL_QUADS);
	glColor3f(0.0,0.0,0.0); 
	glVertex3f(-229.0, -19.0,-85.0);
 	glVertex3f(-229.0, -19.0,-35.0);
	glVertex3f(49.0, -19.0,-25.0);
 	glVertex3f(49.0, -19.0,-75.0);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0,0.0,0.0); 
	glVertex3f(-229.0, -18.0,-80.0);
 	glVertex3f(-229.0, -18.0,-40.0);
 	glVertex3f(49.0, -18.0,-30.0);
 	glVertex3f(49.0, -18.0,-70.0);
	glEnd();
}



void mejakursi(){
	//meja
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.6, 0.0);
	glVertex3f(-150.0, 10.0,-20.0);
	glVertex3f(-150.0, 10.0,20.0);
	glVertex3f(-70.0, 10.0,20.0);
	glVertex3f(-70.0, 10.0,-20.0);
	glEnd();
	
	//kaki meja
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-150.0, 10.0,-20.0);
	glVertex3f(-150.0, -20.0,-20.0);
	glVertex3f(-150.0, 10.0,20.0);
	glVertex3f(-150.0, -20.0,20.0);
	glVertex3f(-70.0, 10.0,20.0);
	glVertex3f(-70.0, -20.0,20.0);
	glVertex3f(-70.0, 10.0,-20.0);
	glVertex3f(-70.0, -20.0,-20.0);
	glEnd();
	
	//payung
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-110.0, 10.0,0.0);
	glVertex3f(-110.0, 80.0,0.0);
	glEnd();
	//1
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-110.0, 80.0,0.0);
	glVertex3f(-80.0, 60.0,-20.0);
	glVertex3f(-140.0, 60.0,-20.0);
	glEnd();
	//2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-110.0, 80.0,0.0);
	glVertex3f(-80.0, 60.0,20.0);
	glVertex3f(-140.0, 60.0,20.0);
	glEnd();
	//3
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-110.0, 80.0,0.0);
	glVertex3f(-80.0, 60.0,-20.0);
	glVertex3f(-80.0, 60.0,20.0);
	glEnd();
	//4
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-110.0, 80.0,0.0);
	glVertex3f(-140.0, 60.0,-20.0);
	glVertex3f(-140.0, 60.0,20.0);
	glEnd();
	
	//kursi kiri dudukan
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.6, 0.0);
	glVertex3f(-50.0, 0.0,-15.0);
	glVertex3f(-50.0, 0.0,20.0);
	glVertex3f(-20.0, 0.0,20.0);
	glVertex3f(-20.0, 0.0,-15.0);
	glEnd();
	//kursi kiri senderan
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.6, 0.0);
	glVertex3f(-50.0, 0.0,19.0);
	glVertex3f(-50.0, 30.0,19.0);
	glVertex3f(-20.0, 30.0,19.0);
	glVertex3f(-20.0, 0.0,19.0);
	glEnd();
	//kaki kursi kiri
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50.0, 0.0,-15.0);
	glVertex3f(-50.0, -20.0,-15.0);	
	glVertex3f(-50.0, 0.0,20.0);
	glVertex3f(-50.0, -20.0,20.0);
	glVertex3f(-20.0, 0.0,20.0);
	glVertex3f(-20.0, -20.0,20.0);
	glVertex3f(-20.0, 0.0,-15.0);
	glVertex3f(-20.0, -20.0,-15.0);
	glEnd();
	
	//kursi kanan dudukan
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.6, 0.0);
	glVertex3f(-200.0, 0.0,-15.0);
	glVertex3f(-200.0, 0.0,20.0);
	glVertex3f(-170.0, 0.0,20.0);
	glVertex3f(-170.0, 0.0,-15.0);
	glEnd();
	
	//kursi kanan senderan
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.6, 0.0);
	glVertex3f(-200.0, 0.0,19.0);
	glVertex3f(-200.0, 30.0,19.0);
	glVertex3f(-170.0, 30.0,19.0);
	glVertex3f(-170.0, 0.0,19.0);
	glEnd();
	
	//kaki kursi kanan
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-200.0, 0.0,-15.0);
	glVertex3f(-200.0, -20.0,-15.0);
	glVertex3f(-200.0, 0.0,20.0);
	glVertex3f(-200.0, -20.0,20.0);
	glVertex3f(-170.0, 0.0,20.0);
	glVertex3f(-170.0, -20.0,20.0);
	glVertex3f(-170.0, 0.0,-15.0);
	glVertex3f(-170.0, -20.0,-15.0);
	glEnd();
	
}

void pedang(){
	//1
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-100.0, 40.0,-149.0);
	glVertex3f(-95.0, 30.0,-149.0);
	glVertex3f(-95.0, 10.0,-149.0);
	glVertex3f(-105.0, 10.0,-149.0);
	glVertex3f(-105.0, 30.0,-149.0);
	glEnd();
	//gagang1
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.3, 0.0);
	glVertex3f(-90.0, 10.0,-149.0);
	glVertex3f(-110.0, 10.0,-149.0);
	glVertex3f(-110.0, 5.0,-149.0);
	glVertex3f(-105.0, 5.0,-149.0);
	glVertex3f(-105.0, -5.0,-149.0);
	glVertex3f(-95.0, -5.0,-149.0);
	glVertex3f(-95.0, 5.0,-149.0);
	glVertex3f(-90.0, 5.0,-149.0);
	glEnd();
	//2
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-400.0, 40.0,-149.0);
	glVertex3f(-395.0, 30.0,-149.0);
	glVertex3f(-395.0, 10.0,-149.0);
	glVertex3f(-405.0, 10.0,-149.0);
	glVertex3f(-405.0, 30.0,-149.0);
	glEnd();
	//gagang2
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.3, 0.0);
	glVertex3f(-390.0, 10.0,-149.0);
	glVertex3f(-410.0, 10.0,-149.0);
	glVertex3f(-410.0, 5.0,-149.0);
	glVertex3f(-405.0, 5.0,-149.0);
	glVertex3f(-405.0, -5.0,-149.0);
	glVertex3f(-395.0, -5.0,-149.0);
	glVertex3f(-395.0, 5.0,-149.0);
	glVertex3f(-390.0, 5.0,-149.0);
	glEnd();

}

void perisai(){
	glBegin(GL_POLYGON);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(121.0, 90.0,40.0);
	glVertex3f(121.0, 70.0,25.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(121.0, 90.0,10.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(121.0, 90.0,10.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(121.0, 95.0,17.5);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(121.0, 90.0,25.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(121.0, 90.0,25.0);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(121.0, 95.0,32.5);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(121.0, 90.0,40.0);
	glEnd();
}

void lemari(){
	//lemari belakang
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-351.0, 40.0,-149.0);
	glVertex3f(-351.0, -20.0,-149.0);
	glVertex3f(-380.0, -20.0,-149.0);
	glVertex3f(-380.0, 40.0,-149.0);
	glEnd();
	//depan
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-351.0, 40.0,-140.0);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-351.0, -20.0,-140.0);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-380.0, -20.0,-140.0);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-380.0, 40.0,-140.0);
	glEnd();
	
	//kanan
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-351.0, 40.0,-140.0);
	glVertex3f(-351.0, -20.0,-140.0);
	glVertex3f(-351.0, -20.0,-149.0);
	glVertex3f(-351.0, 40.0,-149.0);
	glEnd();
	
	//kiri
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-380.0, 40.0,-140.0);
	glVertex3f(-380.0, -20.0,-140.0);
	glVertex3f(-380.0, -20.0,-149.0);
	glVertex3f(-380.0, 40.0,-149.0);
	glEnd();
	
	//atas
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-351.0, 40.0,-140.0);
	glVertex3f(-351.0, -20.0,-140.0);
	glVertex3f(-380.0, -20.0,-149.0);
	glVertex3f(-380.0, 40.0,-149.0);
	glEnd();
	
	//atas
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-351.0, 45.0,-140.0);
	glVertex3f(-351.0, 40.0,-140.0);
	glVertex3f(-380.0, 40.0,-140.0);
	glVertex3f(-380.0, 45.0,-140.0);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-365.0, 50.0,-140.0);
	glEnd();
}

void lampu(){

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(121.0, 60.0,45.0);
	glVertex3f(128.0, 60.0,45.0);
	glVertex3f(128.0, 60.0,45.0);
	glVertex3f(128.0, 70.0,45.0);
	glVertex3f(121.0, 60.0,5.0);
	glVertex3f(128.0, 60.0,5.0);
	glVertex3f(128.0, 60.0,5.0);
	glVertex3f(128.0, 70.0,5.0);
	glEnd();
	//1
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(128.0, 70.0,45.0);
	glVertex3f(133.0, 80.0,40.0);
	glVertex3f(123.0, 80.0,50.0);
	glEnd();
	
	//2
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(128.0, 70.0,5.0);
	glVertex3f(133.0, 80.0,0.0);
	glVertex3f(123.0, 80.0,10.0);
	glEnd();
	
	
}

void jam(){
	//belakang
	glBegin(GL_POLYGON);
 	glColor3f(1.0, 0.3, 0.0);
 	glVertex3f(-625.0, 285.0,-151.0);
 	glVertex3f(-625.0, 235.0,-151.0);
 	glVertex3f(-675.0, 235.0,-151.0);
 	glVertex3f(-675.0, 285.0,-151.0);
 	glEnd();
 	glBegin(GL_POLYGON);
 	glColor3f(1.0, 1.0, 1.0);
 	glVertex3f(-630.0, 280.0,-152.0);
 	glVertex3f(-630.0, 240.0,-152.0);
 	glVertex3f(-670.0, 240.0,-152.0);
 	glVertex3f(-670.0, 280.0,-152.0);
 	glEnd();
 	
 	glBegin(GL_LINES);
 	glColor3f(0.0, 0.0, 0.0);
 	glVertex3f(-650.0, 275.0,-153.0);
 	glVertex3f(-650.0, 260.0,-153.0);
 	glVertex3f(-650.0, 260.0,-153.0);
 	glVertex3f(-665.0, 260.0,-153.0);
 	glEnd();
 	
 	//depan
	glBegin(GL_POLYGON);
 	glColor3f(1.0, 0.3, 0.0);
 	glVertex3f(-625.0, 285.0,-99.0);
 	glVertex3f(-625.0, 235.0,-99.0);
 	glVertex3f(-675.0, 235.0,-99.0);
 	glVertex3f(-675.0, 285.0,-99.0);
 	glEnd();
 	glBegin(GL_POLYGON);
 	glColor3f(1.0, 1.0, 1.0);
 	glVertex3f(-630.0, 280.0,-98.0);
 	glVertex3f(-630.0, 240.0,-98.0);
 	glVertex3f(-670.0, 240.0,-98.0);
 	glVertex3f(-670.0, 280.0,-98.0);
 	glEnd();
 	
 	glBegin(GL_LINES);
 	glColor3f(0.0, 0.0, 0.0);
 	glVertex3f(-650.0, 275.0,-97.0);
 	glVertex3f(-650.0, 260.0,-97.0);
 	glVertex3f(-650.0, 260.0,-97.0);
 	glVertex3f(-665.0, 260.0,-97.0);
 	glEnd();
 	
 	
}

void tampil(void){
	glPushMatrix();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f,0.0f,0.0f, 1.0f, 0.0f);
	glRotatef(xrot,1.0f,0.0f,0.0f);
	glRotatef(yrot,0.0f,1.0f,0.0f);	

	tembok();
	bangunan1();
	tebing();
	halaman();
	gerbang();
	jembatan();
	tembok1();
	bangunan2();
	bangunan3();
	bangunan4();
	pilar();
	salib();
	bangunan5();
	bangunan6();
	tembok3();
	tembok2();
	pilar1();
	bendera();
	mejakursi();
	pedang();
	perisai();
	lemari();
	lampu();
	jam();
	karpet();
	
	glPopMatrix();
	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y){
	switch(key)
	{
		case 'w':
		case 'W':
			glTranslatef(0.0,0.0,3.0);
			break;
		case 'd':
		case 'D':
			glTranslatef(3.0,0.0,0.0);
			break;
		case 's':
		case 'S':
			glTranslatef(0.0,0.0,-3.0);
			break;
		case 'a':
		case 'A':
			glTranslatef(-3.0,0.0,0.0);
			break;
		case '7':
			glTranslatef(0.0,3.0,0.0);
			break;
		case '9':
			glTranslatef(0.0,-3.0,0.0);
			break;
		case '2':
			glRotatef(2.0,1.0,0.0,0.0);
			break;	
		case '8':
			glRotatef(-2.0,1.0,0.0,0.0);
			break;
		case '6':
			glRotatef(2.0,0.0,1.0,0.0);
			break;
		case '4':
			glRotatef(-2.0,0.0,1.0,0.0);
			break;	
		case '1':
			glRotatef(2.0,0.0,0.0,1.0);
			break;	
		case '3':
			glRotatef(-2.0,0.0,0.0,1.0);
			break;	
		case '5':
			if(is_depth)
			{
				is_depth = 0;
				glDisable(GL_DEPTH_TEST);
			}
			else
			{
				is_depth = 1;
				glEnable(GL_DEPTH_TEST);
			}
			
	}
	tampil();
}

void idle(){
	if(!mouseDown){
		xrot += 0.3f;
		yrot += 0.4f;
	}
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y){
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		mouseDown = true;
		xdiff = x- yrot;
		ydiff = -y + xrot;
	}
	else
	mouseDown = false;
}

void mouseMotion(int x, int y){
	if(mouseDown){
		yrot = x - xdiff;
		xrot = y + ydiff;
		
		glutPostRedisplay();
	}
}

void ukuran(int lebar, int tinggi){
	if (tinggi == 0 ) tinggi = 1;
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(150.0, lebar / tinggi, 5.0, 1000.0);
	glTranslatef(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
}


