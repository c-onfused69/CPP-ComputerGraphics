#include <graphics.h>
using namespace std;
int main()
{
    int i, gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    ///////////////////////BG START///////////////////////
    int arrbgt[] = {0, 418, 0, 0, 640, 0, 640, 418, 0, 418};
    setfillstyle(1, LIGHTGRAY);
    fillpoly(5, arrbgt);
    int arrbgb[] = {0, 480, 0, 419, 640, 419, 640, 480, 0, 480};
    setfillstyle(1, LIGHTGREEN);
    fillpoly(5, arrbgb);
    ///////////////////////BG END///////////////////////

    ///////////////////////TREE START///////////////////////
    setcolor(BLACK);
    int arrt3[] = {40,418, 40,345, 66,345, 66,418, 40,418};
    setfillstyle(1, BROWN);
    fillpoly(5, arrt3);
    setcolor(BLACK);
    int arrt4[] = {6,345, 23,316, -2,318, 43,250, 20,255, 53,199, 86,255, 63,250, 108,318, 83,316, 100,345 ,6,345};
    setfillstyle(1, GREEN);
    fillpoly(12, arrt4);

    int arrt1[] = {80,418, 80,345, 106,345, 106,418, 80,418};
    setfillstyle(1, BROWN);
    fillpoly(5, arrt1);
    setcolor(BLACK);
    int arrt2[] = {46,345, 63,316, 38,318, 73,260, 60,265, 93,205, 126,265, 113,260, 148,318, 123,316, 140,345 ,46,345};
    setfillstyle(1, GREEN);
    fillpoly(12, arrt2);






    ///////////////////////TREE END///////////////////////

    ////////////////BUILDING START//////////////////
    setcolor(BLACK);
    int arr1[] = {217, 418, 247, 386, 327, 386, 327, 418, 217, 418};
    setfillstyle(9, DARKGRAY);
    fillpoly(5, arr1);

    int arr2[] = {327, 418, 327, 386, 416, 386, 416, 418, 327, 418};
    setfillstyle(9, DARKGRAY);
    fillpoly(5, arr2);

    int arr3[] = {180, 418, 180, 332, 246, 326, 246, 385, 218, 418, 180, 418};
    setfillstyle(1, RED);
    fillpoly(6, arr3);
    int arr4[] = {246, 385, 246, 326, 282, 298, 282, 385, 246, 385};
    setfillstyle(1, RED);
    fillpoly(5, arr4);

    int arr5[] = {282, 385, 282, 298, 325, 288, 325, 385, 282, 385};
    setfillstyle(9, LIGHTRED);
    fillpoly(5, arr5);
    int arr6[] = {325, 385, 325, 288, 397, 302, 397, 385, 325, 385};
    setfillstyle(10, LIGHTBLUE);
    fillpoly(5, arr6);

    int arr7[] = {397, 385, 397, 302, 408, 303, 408, 385, 397, 385};
    setfillstyle(1, LIGHTRED);
    fillpoly(5, arr7);

    int arr8[] = {408, 418, 408, 303, 416, 304, 416, 418, 408, 418};
    setfillstyle(1, RED);
    fillpoly(5, arr8);
    int arr9[] = {416, 418, 416, 247, 429, 243, 429, 418, 416, 418};
    setfillstyle(1, RED);
    fillpoly(5, arr9);
    int arr10[] = {429, 418, 429, 243, 466, 252, 466, 418, 429, 418};
    setfillstyle(1, LIGHTRED);
    fillpoly(5, arr10);

    int arr11[] = {466, 280, 466, 252, 483, 257, 466, 280};
    setfillstyle(1, RED);
    fillpoly(4, arr11);
    int arr12[] = {466, 418, 466, 280, 483, 257, 483, 418, 466, 418};
    setfillstyle(1, LIGHTRED);
    fillpoly(5, arr12);
    int arr13[] = {483, 418, 483, 284, 497, 285, 497, 418, 483, 418};
    setfillstyle(9, LIGHTRED);
    fillpoly(5, arr13);
    int arr14[] = {483, 284, 483, 258, 497, 261, 497, 285, 483, 284};
    setfillstyle(1, RED);
    fillpoly(5, arr14);

    int arr15[] = {141,328, 222,323, 249,295, 320,288, 416,305,325,295, 281,298, 246,326, 180,331 ,141,328};
    setfillstyle(9, RED);
    fillpoly(10, arr15);

    int arr16[] = {416,305, 320,288, 320,278, 416,296  , 416,305};
    setfillstyle(1, LIGHTRED);
    fillpoly(5, arr16);
    int arr17[] = {320,288, 249,295, 222,323, 141,328, 141,152, 318,106, 318,119, 149,164, 149,318, 220,312, 246,286, 320,278  ,320,288};
    setfillstyle(1, RED);
    fillpoly(13, arr17);
    int arr18[] = {318,106, 511,187,511,265, 317,213,317,203, 506,257,506,192  ,318,119,318,106};
    setfillstyle(1, LIGHTRED);
    fillpoly(9, arr18);
    int arr19[] = {317,213, 170,241,170,232 ,317,203, 317,213};
    setfillstyle(1, RED);
    fillpoly(5, arr19);
    int arr20[] = {428,243, 415,247,324,222,207,245,177,240,317,213 , 428,243};
    setfillstyle(9, RED);
    fillpoly(7, arr20);




    int arr21[] = {177,241, 208,246, 208,271, 177,274 ,177,241};
    setfillstyle(11, DARKGRAY);
    fillpoly(5, arr21);
    int arr22[] = {177,274,208,271,208,314,177,316  ,177,274};
    setfillstyle(9, LIGHTRED);
    fillpoly(5, arr22);
    int arr23[] = {208,314, 208,245,241,238,241,290,221,311 , 208,314};
    setfillstyle(9, LIGHTBLUE);
    fillpoly(6, arr23);
    int arr24[] = {241,290, 241,266, 325,252,325,279,319,278,246,285 ,241,290};
    setfillstyle(9, LIGHTRED);
    fillpoly(7, arr24);
    int arr25[] = {241,238, 281,231,281,259,241,265 ,241,238};
    setfillstyle(11, DARKGRAY);
    fillpoly(5, arr25);
    int arr26[] = {281,231, 325,223,325,253,281,258 ,281,231};
    setfillstyle(9, LIGHTCYAN);
    fillpoly(5, arr26);
    int arr27[] = {325,223,393,241,393,264  ,325,253,325,223};
    setfillstyle(9, LIGHTCYAN);
    fillpoly(5, arr27);
    int arr28[] = {325,279,325,253,393,265,393,293  ,325,279};
    setfillstyle(1, LIGHTRED);
    fillpoly(5, arr28);
    int arr29[] = {393,293,393,241,415,246,415,297 ,393,293};
    setfillstyle(9, RED);
    fillpoly(5, arr29);

    int arr30[] = {149,293, 193,288, 193,313, 149,317 ,149,293};
    setfillstyle(9, WHITE);
    fillpoly(5, arr30);
    int arr31[] = {193,288, 246,284,220,311 ,193,313,193,288};
    setfillstyle(9, WHITE);
    fillpoly(5, arr31);


    ////////////2ND FLOOR///////////
    int arr32[] = {177,230, 177,172, 341,128, 341,210,  318,203, 177,230};
    setfillstyle(9, LIGHTRED);
    fillpoly(6, arr32);
    int arr33[] = {177,200,149,164,318,118,341,128,177,172,177,200 };
    setfillstyle(9, RED);
    fillpoly(6, arr33);
    int arr34[] = {341,128,435,165,435,237, 341,210, 341,128 };
    setfillstyle(1, LIGHTRED);
    fillpoly(5, arr34);
    int arr35[] = {435,165,504,192,492,200,435,180,435,165 };
    setfillstyle(9, RED);
    fillpoly(5, arr35);
    int arr36[] = {492,200,505,191,505,256,492,252, 492,200 };
    setfillstyle(9, RED);
    fillpoly(5, arr36);
    int arr37[] = {435,180, 492,200,492,234, 435,216, 435,180 };
    setfillstyle(9, LIGHTBLUE);
    fillpoly(5, arr37);
    int arr38[] = {435,216,502,238,502,255,435,236, 435,216 };
    setfillstyle(9, WHITE);
    fillpoly(5, arr38);

    //////////WINDOWS////////
    int arr48[] = {350,170, 350,151, 406,170, 406,189 ,350,170 };
    setfillstyle(9, RED);
    fillpoly(5, arr48);
    int arr49[] = {350,170,350,155, 401,172, 401,188, 350,170 };
    setfillstyle(1, YELLOW);
    fillpoly(5, arr49);
    int arr50[] = {173,230,173,209,316,177,316,204, 173,230 };
    setfillstyle(9, WHITE);
    fillpoly(5, arr50);
    int arr51[] = {316,204,316,177,341,184,341,209,316,204 };
    setfillstyle(9, WHITE);
    fillpoly(5, arr51);
    int arr52[] = { };
    setfillstyle(9, WHITE);
    fillpoly(5, arr52);







    //////////////3RD FLOOR////////
    int arr39[] = {180,142,180,99,273,65,273,117,180,142};
    setfillstyle(9, LIGHTRED);
    fillpoly(5, arr39);
    int arr40[] = {180,99,147,90,266,43,273,65, 180,99};
    setfillstyle(9, RED);
    fillpoly(5, arr40);
    int arr41[] = {147,90,147,78,265,32,266,43,147,90};
    setfillstyle(1, RED);
    fillpoly(5, arr41);
    int arr42[] = {265,32, 482,137,482,147,266,43 ,265,32};
    setfillstyle(1, LIGHTRED);
    fillpoly(5, arr42);
    int arr43[] = {266,43, 482,147, 453,150, 394,126 ,394,116, 273,65, 266,43};
    setfillstyle(9, LIGHTRED);
    fillpoly(7, arr43);

    int arr44[] = {273,108, 273,65, 356,100, 356,112, 319,96, 273,108, 273,108};
    setfillstyle(9, LIGHTBLUE);
    fillpoly(7, arr44);
    int arr45[] = {273,108, 319,96, 356,112, 356,120, 318,106, 273,117 , 273,108};
    setfillstyle(9, WHITE);
    fillpoly(7, arr45);
    int arr46[] = {356,122, 356,100, 395,116, 395,138 ,356,122};
    setfillstyle(9, RED);
    fillpoly(5, arr46);
    int arr47[] = {395,138, 395,126, 493,166,493,179 ,395,138};
    setfillstyle(9, WHITE);
    fillpoly(5, arr47);







    ////////////////BUILDING END//////////////////

    ////////////////////CLOUDS START//////////////////
    // cloud1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    circle(28, 73, 18);
    floodfill(29, 74, WHITE);
    // cloud1
    setfillstyle(SOLID_FILL, WHITE);
    circle(54, 47, 24);
    floodfill(55, 48, WHITE);
    // cloud1
    setfillstyle(SOLID_FILL, WHITE);
    circle(46, 85, 10);
    floodfill(47, 86, WHITE);
    // cloud1
    setfillstyle(SOLID_FILL, WHITE);
    circle(70, 67, 27);
    floodfill(71, 68, WHITE);
    // Cloud2
    setfillstyle(SOLID_FILL, WHITE);
    circle(490, 97, 25);
    floodfill(491, 98, WHITE);
    // cloud2
    setfillstyle(SOLID_FILL, WHITE);
    circle(521, 98, 25);
    floodfill(522, 99, WHITE);
    // Cloud2
    setfillstyle(SOLID_FILL, WHITE);
    circle(552, 97, 25);
    floodfill(553, 98, WHITE);
    // cloud2
    setfillstyle(SOLID_FILL, WHITE);
    circle(521, 68, 30);
    floodfill(522, 69, WHITE);
    ////////////////////CLOUDS END//////////////////



    getch();
    closegraph();
    return 0;
}
