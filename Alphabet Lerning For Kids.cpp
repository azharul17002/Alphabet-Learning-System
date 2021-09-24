#include<graphics.h>
#include<iostream>
using namespace std;
void Capital_A()

{

    int maxx=getmaxx();
    for(int i=1,color=1;i<maxx;i++,color++){
    ///PLANE
        setcolor(color);
        if(color>15)
             color=1;

    /// Front AREA
        line(450-i,100,500-i,100);
        line(450-i,100,440-i,105);
        line(450-i,110,500-i,110);
        line(450-i,110,440-i,105);
    /// TOP FRONT WING
        line(500-i,100,520-i,30);
        line(520-i,30,520-i,100);
    /// BOTTOM FRONT WING
        line(500-i,110,520-i,180);
        line(520-i,180,520-i,110);
    /// REAR AREA
        line(520-i,100,570-i,100);
        line(520-i,110,570-i,110);
   /// TOP REAR AREA
        line(570-i,100,580-i,70);
        line(580-i,70,580-i,100);
   ///BOTTOM REAR WING
        line(570-i,110,580-i,140);
        line(580-i,140,580-i,110);
   /// LAST AREA
        line(580-i,100,585-i,100);
        line(580-i,110,585-i,110);
        line(585-i,110,585-i,100);
        line(0,410,maxx,410);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"A FOR Airplane");
        setcolor(WHITE);
        line(130+i,150,100+i,200);
        line(131+i,150,101+i,200);
        line(130+i,150,160+i,200);
        line(131+i,150,160+i,200);
        line(115+i,175,145+i,175);
        line(116+i,175,146+i,175);
        if(i==5||i==150){
            PlaySound(TEXT("A.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

void Capital_B()

{
    int maxx=getmaxx();
    for(int i=0;i<maxx;i++){
    ///BUS
        setcolor(RED);
        rectangle(100+i,300,200+i,360);
        setcolor(GREEN);
        circle(120+i,370,10);
        circle(180+i,370,10);
        setcolor(WHITE);
        line(0,380,maxx,380);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,400,"B FOR BUS  ");
        line(129+i,150,129+i,240);
        line(130+i,150,130+i,240);
        arc(129+i,172.5,-90,90,22.5);
        arc(130+i,172.5,-90,90,22.5);
        arc(129+i,217.5,-90,90,22.5);
        arc(130+i,217.5,-90,90,22.5);
        if(i==5||i==150){
            PlaySound(TEXT("B.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

void Capital_C()

{
    int maxx=getmaxx();
    for(int i=0;i<=maxx;i++){
        line(0,410,maxx,410);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"C FOR CUP  ");
        ellipse(200,380,0,360,50,10);
        ellipse(200,300,0,360,70,10);
        line(130,300,150,380);
        line(270,300,250,380);
        ellipse(270,340,-110,100,30,15);
        ellipse(270,340,-110,100,31,14);
        arc(100+i,150,70,290,55);
        arc(101+i,150,71,291,55);
        arc(102+i,150,71,292,55);
        line(120+i,92,120+i,108);
        line(121+i,92,121+i,108);
        if(i==5||i==150){
            PlaySound(TEXT("C.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

void Capital_D()

{
    int maxx=getmaxx();
    for(int i=0;i<maxx;i++){
        setcolor(WHITE);
        line(0,410,maxx,410);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"D FOR DOLL  ");
        line(200,278,200,282);
        circle(200,280,20);
        rectangle(180,310,220,360);
        rectangle(190,300,210,310);
        line(190,310,160,350);
        line(191,310,161,350);
        line(189,310,159,350);
        line(210,310,240,350);
        line(211,310,241,350);
        line(209,310,239,350);
        rectangle(207,360,212,405);
        rectangle(190,360,195,405);
        circle(194,270,3);
        circle(207,270,3);
        ellipse(200,285,180,360,8,10);
        floodfill(181,311,WHITE);
        floodfill(219,311,WHITE);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(200,315,WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(208,361,WHITE);
        floodfill(191,361,WHITE);
        setfillstyle(SOLID_FILL,RED);
        floodfill(191,301,WHITE);
        line(100+i,100,100+i,200);
        line(101+i,100,101+i,200);
        arc(100+i,150,-90,90,50);
        arc(101+i,150,-90,90,50);
        if(i==5||i==150){
            PlaySound(TEXT("D.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

void Capital_E()

{
    int maxx=getmaxx();
    for(int i=0;i<maxx;i++){
        line(0,410,maxx,410);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"E FOR EGG  ");
        setcolor(7);
        ellipse(210,340,0,360,25,40);
        ellipse(280,355,0,360,40,25);
        setfillstyle(SOLID_FILL,7);
        floodfill(210,340,7);
        floodfill(280,355,7);
        line(100+i,100,100+i,200);//|
        line(100+i,100,150+i,100);
        line(100+i,150,150+i,150);//-
        line(100+i,200,150+i,200);//_
        if(i==5||i==150){
            PlaySound(TEXT("E.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

void Capital_F()

{
    int maxx=getmaxx();
    for(int i=0;i<maxx;i++){
        setcolor(WHITE);
        line(0,410,maxx,410);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"F FOR FAN ");
        ellipse(250,330,0,360,20,8);
        line(243,322,243,295);
        line(255,322,255,295);
        ellipse(190,330,0,360,40,4);
        ellipse(310,330,0,360,40,4);
        ellipse(250,320,203,336,4,40);
        setfillstyle(SOLID_FILL,RED);
        floodfill(250,330,WHITE);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(190,330,WHITE);
        floodfill(310,330,WHITE);
        floodfill(250,350,WHITE);
        line(100+i,100,100+i,200);//|
        line(100+i,100,150+i,100);
        line(100+i,150,150+i,150);//-
        if(i==5||i==150){
            PlaySound(TEXT("F.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

void Capital_G()

{
    int maxx=getmaxx();
    for(int i=0;i<maxx;i++){
        line(0,410,maxx,410);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"G FOR GLASS  ");
        ellipse(200,380,0,360,35,8);
        ellipse(200,290,0,360,45,10);
        line(155,290,165,380);
        line(245,290,235,380);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(200,380,WHITE);
        arc(100+i,150,70,290,55);
        arc(101+i,150,71,291,55);
        arc(102+i,150,71,292,55);
        line(120+i,92,120+i,108);
        line(121+i,92,121+i,108);
        line(121+i,200,121+i,170);
        line(122+i,200,122+i,170);
        line(100+i,170,130+i,170);
        line(100+i,169,130+i,169);
        if(i==5||i==150){
            PlaySound(TEXT("G.wav"),NULL,SND_SYNC);
        }
        delay(2);
        cleardevice();
    }
}

void Capital_H()

{   int maxx=getmaxx();
    for(int i=0;i<maxx;i++){
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"H FOR HAT  ");
        ellipse(250,350,0,360,23,9);
        line(227,350,220,370);
        line(273,350,280,370);
        ellipse(250,390,112,428,80,20);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(250,380,WHITE);
        setfillstyle(SOLID_FILL,BROWN);
        floodfill(250,350,WHITE);
        line(100+i,100,100+i,200);
        line(180+i,100,180+i,200);
        line(100+i,150,180+i,150);
        if(i==5||i==150){
            PlaySound(TEXT("H.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

void Capital_I()

{
    int maxx=getmaxx();
    for(int i=0;i<maxx;i++){
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"I FOR ICE-CREAM  ");
        ellipse(200,320,0,180,40,100);
        line(160,320,240,320);
        line(193,320,193,375);
        line(207,320,207,375);
        line(193,375,207,375);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(220,300,WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(200,350,WHITE);
        line(100+i,100,100+i,200);
        line(101+i,100,101+i,200);
        line(70+i,100,130+i,100);
        line(71+i,100,131+i,100);
        line(70+i,200,130+i,200);
        line(71+i,200,131+i,200);
        if(i==5||i==150){
            PlaySound(TEXT("I.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

void Capital_J()

{
    int maxx=getmaxx();
    for(int i=0;i<maxx;i++){
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"J FOR JACKFRUIT  ");
        ellipse(200,300,41,319,100,40);
        arc(200,300,-20,20,80);
        line(280,298,315,298);
        line(280,302,315,302);
        circle(319,300,4);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(190,290,WHITE);
        setfillstyle(SOLID_FILL,6);
        floodfill(319,300,WHITE);
        floodfill(300,300,WHITE);
        line(140,290,140,295);
        line(180,290,180,295);
        line(220,290,220,295);
        line(200,270,200,275);
        line(160,270,160,275);
        line(150,310,150,315);
        line(190,310,190,315);
        line(230,310,230,315);
        line(150+i,100,150+i,200);
        arc(125+i,200,180,0,25);
        line(100+i,200,100+i,190);
        line(135+i,100,165+i,100);
        if(i==5||i==150){
            PlaySound(TEXT("J.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

void Capital_K()

{
    int maxx=getmaxx();
    for(int i=0;i<maxx;i++){
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"K FOR KITE  ");
        line(180,270,140,320);
        line(180,270,220,320);
        line(140,320,180,370);
        line(220,320,180,370);
        line(180,370,170,390);
        line(180,370,190,390);
        line(170,390,190,390);
        setfillstyle(SOLID_FILL,14);
        floodfill(200,330,WHITE);
        setfillstyle(SOLID_FILL,7);
        floodfill(180,380,WHITE);
        line(100+i,100,100+i,200);
        line(95+i,100,105+i,100);
        line(95+i,200,105+i,200);
        line(100+i,150,150+i,100);
        line(145+i,100,155+i,100);
        line(100+i,150,150+i,200);
        line(145+i,200,155+i,200);
        if(i==5||i==150){
            PlaySound(TEXT("K.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}
void Capital_L()

{

    int maxx=getmaxx();
    for(int i=0;i<maxx;i++){
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"L FOR LEAF  ");
        ellipse(250,300,0,360,40,60);
        rectangle(245,360,255,400);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(250,300,WHITE);
        setfillstyle(SOLID_FILL,50);
        floodfill(250,370,WHITE);
        line(100+i,100,100+i,200);
        line(100+i,200,150+i,200);
        line(95+i,100,105+i,100);
        line(95+i,200,105+i,200);
        line(150+i,200,150+i,195);
        if(i==5||i==150){
            PlaySound(TEXT("L.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

void Capital_M()

{
    int maxx=getmaxx();
    for(int i=0;i<maxx;i++){
        setcolor(WHITE);
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,320,"M FOR MOON ");
        arc(580,60,0,360,55);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(580,60,WHITE);
        line(100+i,100,100+i,200);
        line(190+i,100,190+i,200);
        line(95+i,100,105+i,100);
        line(95+i,200,105+i,200);
        line(185+i,100,195+i,100);
        line(185+i,200,195+i,200);
        line(100+i,100,147.5+i,150);
        line(190+i,100,147.5+i,150);
        if(i==5||i==150){
            PlaySound(TEXT("M.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

void Capital_N()

{
    int maxx=getmaxx();
    for(int i=0;i<=maxx;i++){
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"N FOR NUT ");
        ellipse(350,350,0,360,30,20);
        ellipse(410,350,0,360,30,20);
        ellipse(250,300,0,360,20,30);
        ellipse(250,360,0,360,20,30);
        setfillstyle(SOLID_FILL,BROWN);
        floodfill(250,300,WHITE);
        floodfill(250,360,WHITE);
        floodfill(350,350,WHITE);
        floodfill(410,350,WHITE);
        line(100+i,100,100+i,200);
        line(200+i,100,200+i,200);
        line(100+i,100,200+i,200);
        line(195+i,100,205+i,100);
        line(95+i,200,105+i,200);
        if(i==5||i==150){
            PlaySound(TEXT("N.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

Capital_O()

{
    int maxx=getmaxx();
    for(int i=0;i<=maxx;i++){
        setcolor(WHITE);
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"O FOR ONION ");
        circle(250,350,60);
        arc(200,300,10,100,50);
        arc(297,300,70,170,50);
        line(248,289,248,235);
        setfillstyle(SOLID_FILL,6);
        floodfill(250,350,WHITE);
        circle(150+i,150,60);
        if(i==5||i==150){
            PlaySound(TEXT("O.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
    cleardevice();
}

Capital_P()

{
    int maxx=getmaxx();
    for(int i=0;i<=maxx;i++){
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"P FOR PENCIL  ");
        rectangle(100,330,400,350);
        line(400,330,435,340);
        line(400,350,435,340);
        setfillstyle(SOLID_FILL,RED);
        floodfill(300,340,WHITE);
        line(100+i,100,100+i,200);
        arc(112.5+i,125,-120,120,25);
        line(95+i,100,100+i,100);
        line(95+i,200,105+i,200);
        if(i==5||i==150){
            PlaySound(TEXT("P.wav"),NULL,SND_SYNC);
        }
        delay(2);
        cleardevice();
    }
    cleardevice();

}

Capital_Q()

{
    int maxx=getmaxx();
    for(int i=0;i<=maxx;i++){
        setcolor(WHITE);
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"Q FOR QUILT  ");
        bar3d(100,300,300,330,100,1);
        circle(150+i,150,60);
        line(180+i,180,210+i,210);
        if(i==5||i==150){
            PlaySound(TEXT("Q.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

Capital_R()

{
    int maxx=getmaxx();
    for(int i=0;i<=maxx;i++){
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"R FOR RECTANGLE ");
        rectangle(180,250,350,350);
        setfillstyle(SOLID_FILL,13);
        floodfill(300,300,WHITE);
        line(100+i,100,100+i,200);
        arc(112.5+i,125,-120,120,25);
        line(95+i,100,100+i,100);
        line(95+i,200,105+i,200);
        line(100+i,145,140+i,200);
        line(135+i,200,145+i,200);
        if(i==5||i==150){
            PlaySound(TEXT("R.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

Capital_S()

{
    int maxx=getmaxx();
    for(int i=0;i<=maxx;i++){
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,320,"S FOR SUN  ");
        arc(580-i,60,0,360,55);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(580-i,60,WHITE);
        arc(112.5+i,125,25,-100,30);
        arc(112.5+i,183,-155,105,30);
        if(i==5||i==150){
            PlaySound(TEXT("S.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

Capital_T()

{
    int maxx=getmaxx();
    for(int i=0;i<=maxx;i++){
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"T FOR TRIANGLE  ");
        line(250,250,200,340);
        line(250,250,300,340);
        line(200,340,300,340);
        setfillstyle(SOLID_FILL,RED);
        floodfill(250,300,WHITE);
        line(70+i,100,130+i,100);
        line(100+i,100,100+i,200);
        line(70+i,100,70+i,105);
        line(130+i,100,130+i,105);
        line(94+i,200,106+i,200);
        if(i==5||i==150){
            PlaySound(TEXT("T.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}
Capital_U()

{
    int maxx=getmaxx();
    for(int i=0;i<=maxx;i++){
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"U FOR UMBRELLA ");
        ellipse(250,300,0,180,85,70);
        line(165,300,335,300);
        line(248,300,248,380);
        line(252,300,252,385);
        line(252,385,236,385);
        line(236,385,236,370);
        line(240,380,248,380);
        line(240,380,240,370);
        line(236,370,240,370);
        setfillstyle(SOLID_FILL,4);
        floodfill(250,350,WHITE);
        setfillstyle(SOLID_FILL,13);
        floodfill(250,280,WHITE);
        arc(100+i,200,180,0,40);
        line(60+i,200,60+i,130);
        line(140+i,200,140+i,130);
        line(55+i,130,65+i,130);
        line(135+i,130,145+i,130);
        if(i==5||i==150){
            PlaySound(TEXT("U.wav"),NULL,SND_SYNC);
        }
        delay(1);
        cleardevice();
    }
}

Capital_V()

{
    int maxx=getmaxx();
    for(int i=0,color=1;i<=maxx;color++,i++){
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"V FOR VEHICLE");
        setcolor(DARKGRAY);
        line(0,370,maxx,370);
        ///BUS
        setcolor(RED);
        rectangle(100+i,300,200+i,350);
        setcolor(GREEN);
        circle(120+i,360,10);
        circle(180+i,360,10);
        ///FLYING BUSES
        setcolor(RED);
        rectangle(0+i*5,50,50+i*5,60);
        setcolor(CYAN);
        rectangle(100+i*5,70,150+i*5,80);
        setcolor(GREEN);
        rectangle(200+i*5,30,250+i*5,40);
        setcolor(CYAN);
        rectangle(-400+i*5,30,-350+i*5,40);
        setcolor(RED);
        rectangle(-1000+i*5,70,-950+i*5,80);
        ///PLANE
        setcolor(color);
        if(color>15)
            color=1;
        /// Front AREA
        line(450-i,100,500-i,100);
        line(450-i,100,440-i,105);
        line(450-i,110,500-i,110);
        line(450-i,110,440-i,105);
        /// TOP FRONT WING
        line(500-i,100,520-i,30);
        line(520-i,30,520-i,100);
        /// BOTTOM FRONT WING
        line(500-i,110,520-i,180);
        line(520-i,180,520-i,110);
        /// REAR AREA
        line(520-i,100,570-i,100);
        line(520-i,110,570-i,110);
        /// TOP REAR AREA
        line(570-i,100,580-i,70);
        line(580-i,70,580-i,100);
        ///BOTTOM REAR WING
        line(570-i,110,580-i,140);
        line(580-i,140,580-i,110);
        /// LAST AREA
        line(580-i,100,585-i,100);
        line(580-i,110,585-i,110);
        line(585-i,110,585-i,100);
        setcolor(WHITE);
        line(100+i,100,150+i,200);
        line(200+i,100,150+i,200);
        line(95+i,100,105+i,100);
        line(195+i,100,205+i,100);
        if(i==5||i==150){
            PlaySound(TEXT("V.wav"),NULL,SND_SYNC);
        }
        delay(3);
        cleardevice();
    }
}

Capital_W()

{
    setcolor(WHITE);
    int maxx=getmaxx();
    for(int i=0;i<=maxx;i++){
        setcolor(WHITE);
        line(0,380,maxx,380);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,400,"W FOR WHITE  ");
        setcolor(WHITE);
        rectangle(80,280,190,350);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(85,300,WHITE);
        line(100+i,100,120+i,200);
        line(120+i,200,150+i,140);
        line(150+i,140,180+i,200);
        line(180+i,200,200+i,100);
        line(95+i,100,105+i,100);
        line(195+i,100,205+i,100);
        if(i==5||i==150){
            PlaySound(TEXT("W.wav"),NULL,SND_SYNC);
        }
        delay(2);
        cleardevice();
    }
}

Capital_X()

{
    int maxx=getmaxx();
    for(int i=0;i<=maxx;i++){
        line(0,380,maxx,380);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,400,"X FOR X-OR GATE  ");
        setcolor(WHITE);
        line(100,280,200,280);
        line(100,330,200,330);
        ellipse(170,305,-90,90,35,50);
        ellipse(190,305,-75,75,30,55);
        line(198.5,251,280,305);
        line(198.5,357,280,305);
        circle(290,305,10);
        line(100+i,100,200+i,200);
        line(200+i,100,100+i,200);
        line(95+i,100,105+i,100);
        line(95+i,200,105+i,200);
        line(195+i,100,205+i,100);
        line(195+i,200,205+i,200);
        if(i==5||i==150){
            PlaySound(TEXT("X.wav"),NULL,SND_SYNC);
        }
        delay(2);
        cleardevice();
    }
}

Capital_Y()

{
    int maxx=getmaxx();
    for(int i=0;i<=maxx;i++){
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"Y FOR YELLOW ");
        setcolor(YELLOW);
        line(250,250,200,340);
        line(250,250,300,340);
        line(200,340,300,340);
        rectangle(350,270,470,340);
        arc(100,300,0,360,40);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(250,300,YELLOW);
        floodfill(370,300,YELLOW);
        floodfill(100,300,YELLOW);
        setcolor(WHITE);
        line(100+i,100,140+i,140);
        line(180+i,100,140+i,140);
        line(140+i,140,140+i,200);
        line(95+i,100,105+i,100);
        line(175+i,100,185+i,100);
        line(135+i,200,145+i,200);
        if(i==5||i==150){
            PlaySound(TEXT("Y.wav"),NULL,SND_SYNC);
        }
        delay(2);
        cleardevice();
    }
}

Capital_Z()

{
    int maxx=getmaxx();
    for(int i=0;i<=maxx;i++){
        line(0,415,maxx,415);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(50,420,"Z FOR Zebra-Crossing");
        rectangle(0,270,800,380);
        line(80,270,80,380);
        line(160,270,160,380);
        line(240,270,240,380);
        line(320,270,320,380);
        line(400,270,400,380);
        line(480,270,480,380);
        line(560,270,560,380);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(50,320,WHITE);
        floodfill(200,320,WHITE);
        floodfill(340,320,WHITE);
        floodfill(500,320,WHITE);
        line(100+i,100,180+i,100);
        line(100+i,200,180+i,200);
        line(180+i,100,100+i,200);
        line(100+i,108,100+i,100);
        line(180+i,200,180+i,192);
        if(i==5||i==150){
            PlaySound(TEXT("Z.wav"),NULL,SND_SYNC);
        }
        delay(1);
        cleardevice();
    }
}
int main()

{
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGT ");
    settextstyle(4,HORIZ_DIR,5);
    outtextxy(60,20,"Alphabet Learning");
    outtextxy(120,90," Application ");
    outtextxy(180,170,"For Kids");
    settextstyle(8,HORIZ_DIR,4);
    outtextxy(100,380,"(One After Another)");
    outtextxy(170,440,"(1 To Exit)");
    char c;
    while(1){
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(70,320,"Press any Alphabet");
        c=getch();
        if(c=='1')
            break;
        else {
            switch(c){
                case 'a': Capital_A();
                           break;
                case 'b': Capital_B();
                           break;
                case 'c': Capital_C();
                           break;
                case 'd': Capital_D();
                           break;
                case 'e': Capital_E();
                           break;
                case 'f': Capital_F();
                           break;
                case 'g': Capital_G();
                           break;
                case 'h': Capital_H();
                           break;
                case 'i': Capital_I();
                           break;
                case 'j': Capital_J();
                           break;
                case 'k': Capital_K();
                           break;
                case 'l': Capital_L();
                           break;
                case 'm': Capital_M();
                           break;
                case 'n': Capital_N();
                           break;
                case 'o': Capital_O();
                           break;
                case 'p': Capital_P();
                           break;
                case 'q': Capital_Q();
                           break;
                case 'r': Capital_R();
                           break;
                case 's': Capital_S();
                           break;
                case 't': Capital_T();
                           break;
                case 'u': Capital_U();
                           break;
                case 'v': Capital_V();
                           break;
                case 'w': Capital_W();
                           break;
                case 'x': Capital_X();
                           break;
                case 'y': Capital_Y();
                           break;
                case 'z': Capital_Z();
                           break;
                default :  {
                    outtextxy(90,210,"It must be");
                    outtextxy(80,250,"between a to z");
                }
            }
        }
    }
    /*Capital_A();
    Capital_B();

    Capital_C();
    Capital_D();
    Capital_E();

    Capital_F();
    Capital_G();
    Capital_H();

    Capital_I();
    Capital_J();
    Capital_K();

    Capital_L();
    Capital_M();
    Capital_N();

    Capital_O();
    Capital_P();
    Capital_Q();

    Capital_R();
    Capital_S();
    Capital_T();

    Capital_U();
    Capital_V();
    Capital_W();

    Capital_X();
    Capital_Y();
    Capital_Z();*/

    getch();
    closegraph();
    return 0;
}
