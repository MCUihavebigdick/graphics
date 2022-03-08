 #include <GL/glut.h>
 void myTeapot(float x,float y)
 {
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(1,1,0);
    glutSolidTeapot(0.3);

    glPopMatrix();
 }
 void display()
 {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    myTeapot(0.5,0.5);
    myTeapot(0.5,-0.5);
    myTeapot(-0.5,-0.5);
    myTeapot(-0.5,0.5);
    glutSwapBuffers();
 }
 int main(int argc, char *argv[])//main()主函式 進階版
 {
    glutInit(&argc,argv);//把參數送給glutInit初始化
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);//雙緩衝區+3D深度功能
    glutCreateWindow("第02週的程式喔!!");//開GLUT視窗

    glutDisplayFunc(display);//顯示用的函式

    glutMainLoop();
 }
