#include <conio.h>
#include "figure.h"
//kakoe-to tam izmenenie
//kakoe-to tam izmenenie
//kakoe-to tam izmenenie
//kakoe-to tam izmenenie
int menu();
int main(){
    Figure *a = new Line;
    int answer, vopros;
        do{
        answer=menu();
        switch(answer){
            case 0: cout<<"***Coordinates***"<<endl;
                    a->set_coord(); break;
            case 1: cout<<"***Rotate***"<<endl;
                    a->rotate(); break;
            case 2: cout<<"***Move***"<<endl;
                    a->move();
            case 3: cout<<"***Hide***"<<endl;
                    a->hide();
            case 4: cout<<"***Draw***"<<endl;
                    a->draw();

        }
        cout<<"\nTo return to the menu, press 1 \n";
        cin>>vopros;
        }while(vopros);
    delete []a;
    return 0;
}

int menu(){
    int key=0;
    int code;
    do{
        system("cls");
        key=(key+5)%5;
        cout<<"Choose operation:"<<endl;
        if(key==0) cout<<"-> Coordinates"<<endl;
            else cout<<"Coordinates"<<endl;
        if(key==1) cout<<"-> Rotate"<<endl;
            else cout<<"Rotate"<<endl;
        if(key==2) cout<<"-> Move"<<endl;
            else cout<<"Move"<<endl;
        if(key==3) cout<<"-> Hide"<<endl;
            else cout<<"Hide"<<endl;
        if(key==4) cout<<"-> Draw"<<endl;
            else cout<<"Draw"<<endl;
        code=getch();
        if(code==80) key++;
        if(code==72) key--;
    }while(code!=13);
    system("cls");
    return key;
}

