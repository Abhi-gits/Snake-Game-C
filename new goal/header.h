#ifndef MY_HEADER
#define MY_HEADER

void getSize(int r, int c, int r_p, int c_p, int r_g, int c_g, int UNBEATABLE);
void draw(int height, int width, char *border[], int *snakePosition);
void input(int height, int width, char *border[], int food[], int head[], int tail[], int *snakePosition, int snakeSize, int UNBEATABLE);
int *getarray(int a[], char *border[]);
void position(int height, int width, char *border[], int food[], char input, int head[], int tail[], int *snakePosition, int snakeSize, int UNBEATABLE);


#endif
