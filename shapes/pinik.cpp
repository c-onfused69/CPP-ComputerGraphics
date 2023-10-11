#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT, gm;

    int pentagon[12]={340,150, 320,110, 360,70, 400,110, 380,150, 340,150};
    int hexagon[14] ={ 360,260, 340,240, 360,220, 400,220, 420,240, 400,260, 360,260};
    int octagon[18]={450,150, 430,120, 430,100, 450,70, 500,70, 520,100, 520,120, 500,150, 450,150};

    int poly2[12]={350,430, 350,390, 430,350, 350,310, 300,410, 350,430 };

    initgraph(&gd, &gm,NULL);

    outtextxy(150,15, "Polygon Drawing in Graphics.h using drawpoly() & fillpoly().");




    drawpoly(6,pentagon);
    outtextxy(330, 160, "Pentagon");
    drawpoly(9,octagon);
    outtextxy(450, 160, "Octagon");


    fillpoly(7,hexagon);
    outtextxy(362, 262, "Hexagon");


    drawpoly(6,poly2);
    outtextxy(400, 400, "Polygon");

    getch();
    closegraph();
    return 0;
}
