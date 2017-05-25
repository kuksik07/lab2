#include <iostream>
#include <math.h>

using namespace std;

class Figure{
public:
    virtual void draw()=0;
    virtual void set_coord()=0;
    virtual void move()=0;
    virtual void hide()=0;
    virtual void rotate()=0;
};

class Line:public Figure{
    int x1,x2,y1,y2;
    int alpha;
    float zoom1;
public:
    Line();
    void draw();
    void hide();
    void rotate();
    void set_coord();
    void move();
    ~Line(){}
};
