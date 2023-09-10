#include<graphics.h>
int main()
{
    int i, gd = DETECT , gm;
    initgraph (&gd,&gm,(char*)"");
    //cloud1
    setfillstyle(SOLID_FILL,WHITE);
    circle(28,73,18);

    floodfill(29,74,WHITE);
    //cloud1
    setfillstyle(SOLID_FILL,WHITE);
    circle(54,47,24);
    floodfill(55,48,WHITE);
    //cloud1
    setfillstyle(SOLID_FILL,WHITE);
    circle(46,85,10);
    floodfill(47,86,WHITE);
    //cloud1
    setfillstyle(SOLID_FILL,WHITE);
    circle(70,67,27);
    floodfill(71,68,WHITE);
    //Cloud2
    setfillstyle(SOLID_FILL,WHITE);
    circle(490,97,25);
    floodfill(491,98,WHITE);
    //cloud2
    setfillstyle(SOLID_FILL,WHITE);
    circle(521,98,25);
    floodfill(522,99,WHITE);
    //Cloud2
    setfillstyle(SOLID_FILL,WHITE);
    circle(552,97,25);
    floodfill(553,98,WHITE);
    //cloud2
    setfillstyle(SOLID_FILL,WHITE);
    circle(521,68,30);
    floodfill(522,69,WHITE);




    //BG
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(0,0,640,418);
    floodfill(1,1,WHITE);
    //GREEN
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    rectangle(0,419,640,480);
    floodfill(1,420,WHITE);





line(15,418,630,418); // base line
line(180,418,180,331);//H Line 1
line(219,418,219,381);// L2
line(300,418,300,356);// L5
line(411,418,411,387);
line(419,418,419,248);// L6
line(435,418,435,242);// L7
line(471,418,471,254);// L8
line(490,418,490,257);//L9
line(490,396,540,396);//L10
line(540,396,556,418);//slide
line(501,396,501,266);//L11
line(327,386,327,295);
//horizontal lines first floor done

line(141,328,181,331);
line(181,331,246,326);
line(246,326,281,299);
line(281,299,325,295);
line(325,295,418,305);
line(219,418,246,386);
line(246,386,246,326);
line(246,386,410,386);
line(253,386,253,359);
line(219,381,253,359);
line(253,359,300,356);
line(300,356,326,360);


//SH
line(141,328,222,323);
line(222,323,249,295);
line(249,295,320,288);
line(320,288,418,305);
line(147,318,220,312);//Top layer HZ
line(220,312,246,285);
line(246,285,321,279);
line(321,279,321,288);//Hline small joint
line(321,279,418,296);

//Hlines 2nd floor
line(141,328,141,153);
line(147,318,147,164);
line(147,164,177,200);
line(176,315,176,240);
line(325,279,325,222);
line(400,294,400,243);
//2nd floor wall h lines
line(193,288,193,314);
line(246,285,246,265);
line(246,265,325,251);
//V line
line(147,293,193,288);
line(193,288,246,285);

//Top V lines
line(176,240,207,245);
line(207,245,324,222);
line(324,222,419,248);
line(419,248,435,242);
//Top 2 V lines
line(170,242,319,213);
line(319,213,435,242);
line(435,242,512,263);
line(512,263,501,266);//Edge det small
line(501,266,490,265);//Edge det small
line(170,230,319,204);
line(319,204,504,255);
//H lines
line(504,255,504,192);
line(504,192,490,200);//depth
line(512,263,512,187);
line(319,213,319,204);
line(170,242,170,230);

//3rd floor h lines
line(173,230,173,208);
line(173,208,202,211);// v small
line(202,209,202,213);// v atc
line(173,208,316,177);//v line balc
line(316,177,342,184);//v
line(177,229,177,172);
line(316,203,316,177);
line(342,211,342,130);
line(438,237,438,165);
line(490,252,490,200);
line(490,200,438,179);
line(504,192,438,165);//v
line(438,165,318,119);//vv
line(318,119,147,164);//vvv
line(177,172,342,130);


//vvv3
line(141,153,319,106);
line(319,106,319,119);//hh con
line(319,106,512,186);




//4th floor H lines
line(180,142,180,99);
line(274,117,274,66);
line(357,121,357,100);
line(393,136,393,116);
line(493,179,493,166);
//hh val
line(273,108,319,96);
line(319,96,357,112);
line(393,126,493,166);

// vvr
line(180,99,274,66);
line(274,66,393,116);
//r ang
line(180,99,147,90);
line(274,66,266,42);
line(266,42,482,147);//v
line(482,147,453,150);
line(147,90,266,42);
line(147,90,147,79);
line(266,42,266,32);
line(147,79,266,32);//v
line(482,147,482,137);
line(266,32,482,137);



//window 3fr
line(348,151,348,169);
line(348,151,406,170);
line(406,170,406,187);
line(348,169,406,187);
line(348,154,403,172);
line(406,170,403,172);
line(403,172,403,185);



















    getch();
    closegraph();
    return 0;
}
