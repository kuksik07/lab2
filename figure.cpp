#include "figure.h"

Line::Line(){
    x1=0;
    x2=0;
    y1=0;
    y2=0;
    alpha=0;
    zoom1=1.0;
}

void Line::draw(){
    cout<<"This is your Line:"<<endl;
    cout<<"Coordinates:"<<endl;
    cout<<"x1= "<<x1<<" ; "<<"y1= "<<y1<<" | "<<
          "x2= "<<x2<<" ; "<<"y2= "<<y2<<endl;
    cout<<"Rotation angle = "<<alpha<<endl;
    cout<<"Zoom: "<<zoom1<<endl;
}
void Line::hide(){
    x1=0;
    x2=0;
    y1=0;
    y2=0;
    alpha=0;
    zoom1=0.0;
}
void Line::rotate(){
    cout<<"Enter the angle: ";
    cin>>alpha;
    int x0,y0,X1,X2,Y1,Y2;
    X1=x1; X2=x2; Y1=y1; Y2=y2;
    x0=x1+((x2-x1)/2);
    y0=y1+((y2-y1)/2);
    x1=x0+(X1-x0)*cos(alpha*M_PI/180)-(Y1-y0)*sin(alpha*M_PI/180);
    y1=y0+(X1-x0)*sin(alpha*M_PI/180)+(Y1-y0)*cos(alpha*M_PI/180);
    x2=x0+(X2-x0)*cos(alpha*M_PI/180)-(Y2-y0)*sin(alpha*M_PI/180);
    y2=y0+(X2-x0)*sin(alpha*M_PI/180)+(Y2-y0)*cos(alpha*M_PI/180);

}
void Line::set_coord(){
    cout<<"Point A(x,y): ";
    cin>>x1>>y1;
    cout<<"Point B(x,y): ";
    cin>>x2>>y2;
    cout<<"Zoom: ";
    cin>>zoom1;
}

void Line::move(){
    int x,y;
    cout<<"Enter the coordinates of the vector you want to move the line to(x,y): ";
    cin>>x>>y;
    x1+=x;
    x2+=x;
    y1+=y;
    y2+=y;
}



