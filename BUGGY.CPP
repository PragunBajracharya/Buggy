#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>


 void level1();
 void level2();
 void level3();
 void level4();
 void lvlscrn();

  void main()
    {
       int gd=DETECT,gm,i;
       initgraph(&gd,&gm,"C:\\WinRoot\\TURBOC3\\BGI");
	setcolor(15);
     settextstyle(3,0,5);
       outtextxy(250,200,"PA");
	outtextxy(220,230,"GAMES");
	delay(3000);
	cleardevice();
	settextstyle(3,0,4);
	outtextxy(150,130,"MADE AND DESIGNED BY:");
	settextstyle(3,0,2);
	outtextxy(250,170,"ANKIT SUBEDI");
	outtextxy(190,200,"PRAGUN BAJRACHARYA");
	delay(2000);
	cleardevice();
	settextstyle(3,0,7);
	for(i=0;i<=15;i++)
	{
	setcolor(i);
	outtextxy(100,150,"BUGGY:THE CAR");
	delay(200);
	}
	cleardevice();
	lvlscrn();
	getch();
	   closegraph();
	}




       void lvlscrn()
       {
	 int lvl;
	 a:
	 cleardevice();
	 setbkcolor(BLACK);
	 setfillstyle(SOLID_FILL,BLUE);

	   bar(5,5,400,90);
	   setcolor(GREEN);
	   settextstyle(3,0,4);
	   outtextxy(43,20,"SELECT LEVEL") ;
	      settextstyle(2,0,5);
	      outtextxy(370,200,"lvl 1-Buggy needs a friend");
	      outtextxy(370,220,"lvl 2-Buggy with the new friend");
	      outtextxy(370,240,"lvl 3-Save your friend BUGGY..");
	      outtextxy(370,260,"lvl 4-The Happy Ending");



	  settextstyle(2,0,5);


	  outtextxy(100,400,"press the respective level number to play the game");
	  outtextxy(100,420,"'a' and 'd' to select");

	   lvl=getch();

	   if(lvl==49)
	   {
	   level1();

	   }
	   else if(lvl==50)
	   {
	   level2();
	   }

	   else if(lvl==51)
	   {
	   level3();
	   }
	   else if(lvl==52)
	   {
	   level4();
	   }
	   else if(lvl==27)
	   {
	   setcolor(0);
	    setfillstyle(SOLID_FILL,DARKGRAY);
	    bar (270,340,550,420);
	    bar(280,350,540,410);
	    outtextxy(290,380,"Do you want to exit??(Y/N)");
	    if(getch()==121)
	   exit(0);
	   else
	   lvlscrn();
	   }
	   else
	   {
	     cleardevice();
	     settextstyle(2,0,5);
	     setcolor(GREEN);
	     outtextxy(20,200,"sorry this level is not avaiable in demo version, please try the avaiable ones");
	     outtextxy(50,400,"press esc to continue.....");
	     if(getch()==27)
	     lvlscrn();
	     goto a;
	   }

		   }






      void level1()
      {

      int i=0,a=0,b=0,x,B,y,e,p,bo,Bo,X,c,I=0,E=0,O=0,Zz2,Zzz=0;
      int Lx,Ly,v1,v2=0,z1=0,z2=0,k=2,M=0,ZZz,CCc=0,Ccc,S=0,D=0,BB=0;
      int Bb=0, Mm=0,F=0,J=0;
	while(1)
	{
	cleardevice();
	setfillstyle(SOLID_FILL,GREEN);
	bar(50,-10,149 ,500);
	bar(451,-10,550,500);
	setfillstyle(SOLID_FILL,DARKGRAY);
	bar(150,-10,450,500);
	setfillstyle(SOLID_FILL,WHITE);
	bar(295,-1020+i,315,-1041+i);
	bar(295,-910+i,315,-1030+i);
	bar(295,-900+i,315,-920+i);
	bar(295,-890+i,315,-810+i);
	bar(295,-780+i,315,-700+i);
	bar(295,-670+i,315,-590+i);
	bar(295,-560+i,315,-480+i);
	bar(295,-450+i,315,-370+i);
	bar(295,-340+i,315,-260+i);
	bar(295,-230+i,315,-150+i);
	bar(295,-120+i,315,-60+i);
	bar(295,-30+i,315,50+i);
	bar(295,80+i,315,160+i);
	bar(295,190+i,315,270+i);
	bar(295,300+i,315,380+i);
	bar(295,410+i,315,490+i);
	bar(295,520+i,315,600+i);
	bar(295,630+i,315,710+i);
	bar(295,740+i,315,820+i);
	bar(295,850+i,315,930+i);
	//BUGGY
	//joints

	setfillstyle(SOLID_FILL,RED);
	bar(210+a,410,215+a,413);
	bar(210+a,440,215+a,443);
	bar(180+a,410,175+a,413);
	bar(180+a,440,175+a,443);
	//wheels


	setfillstyle(SOLID_FILL,BLACK);
	bar(e=175+a,405,e=170+a,417);
	bar(175+a,435,170+a,447);
	bar(215+a,405,220+a,417);
	bar(p=215+a,435,p=220+a,447);

		//body
		setfillstyle(SLASH_FILL,LIGHTBLUE);
		bar(185+a,v1=390,205+a,400);
		setfillstyle(LINE_FILL,BLUE);
		bar(bo=180+a,400,Bo=210+a,v2=450);


		//obstacle1
		if(z1<500)
		{
		setlinestyle(SOLID_LINE,1,2);
		 setfillstyle(SLASH_FILL,6);
		 setcolor(6);
		 bar3d(180,z1=150+O,250,z2=180+O,3,1);
		 O=O+25;
		//intro1
		if(z2>150 && z2<201)
		{
		settextstyle(2,0,4);
		setcolor(0);
		outtextxy(175,250,"press 'A' & 'D' to move buggy");
		outtextxy(175,280,"dont touch any boxes or fall in ditches");
		settextstyle(2,0,5);
		outtextxy(180,350,"press esc to quit game");
		delay(5000);
		}


		if(z2>=v1 && bo>=180 && Bo<=250 && z2<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the blocks..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
	       }

		// obstacle2
		 if(z2>400 && z2<600)
		 {
		  setlinestyle(SOLID_LINE,1,2);
		 setfillstyle(SLASH_FILL,6);
		 setcolor(6);

		 bar3d(300,10+I,360,Zz2=40+I,3,1);
		 I=I+80;


		if(bo>=300 && Bo<=360 && Zz2>=v1 && Zz2<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the blocks");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		}

	// obstacle3
	if(z2>500 && Zz2>300 )
	 {
		     if( Zzz<900)
		 {
		 setcolor(0);
		 setfillstyle(SOLID_FILL,0);
		 fillellipse(225,Zzz=10+E,70,30);

		   E=E+35;

		if(Zzz>=v1 && Bo<=295 && bo>=155 && Zzz<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall on the ditch");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		   }
	      }
	      //intro2
	      if(Zzz>600)
	      {
	       if(k>1 && k<3)
		 {
			setcolor(0);
			 settextstyle(2,0,4);
			 outtextxy(170,110,"Good job in telling buggy what to do..");
			 delay(1500);
			 outtextxy(170,150,"Now, let me tell u a story..");
			 delay(1500);
			 outtextxy(170,170,"This car here is named 'Buggy'..");
			 delay(1500);
			 outtextxy(170,190,"He is all alone in this world");
			 delay(1500);
			 outtextxy(170,210,"He rides far everyday to find a companion");
			 delay(1500);
			 outtextxy(170,230,"He has not found any friend.. will he today???");
			 delay(1500);
			 outtextxy(170,260,"why dont you take him out for a ride");
			 delay(3500);

			 k=k+2;
		 }
		 //obstacle4
		  setlinestyle(SOLID_LINE,1,2);
		 setfillstyle(SLASH_FILL,6);
		 setcolor(6);

		 bar3d(260,-70+M,449,ZZz=-60+M,3,1);
		 M=M+50;


		if(bo>260 && bo<449 && ZZz>=v1 && ZZz<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the blocks");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

	      }

	      //obstacle5
	      if(ZZz>650)
		{
			 setcolor(0);
		 setfillstyle(SOLID_FILL,0);
		 fillellipse(210,CCc=10+S,60,25);
		 fillellipse(390,Ccc=50+S,60,20);

		   S=S+35;

		if( (CCc>=v1 && Bo<=250 && bo>=150 && CCc<=v2) || (Ccc<=v2 && Ccc>=v1 && Bo<=450 && bo>=350) )
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall on the ditch");
			 delay(2000);
			 if(getch())
			 lvlscrn();
			 }

		  }
		  //obstacle6
		  if(CCc>650)
		  {
		     if(CCc<690)
		     {
		     settextstyle(2,0,5);
		       outtextxy(150,170,"Beware, Dont touch the animals");
		       delay(2000);
		      }
		  setfillstyle(10,15);
		    line(265,-52+D,265,-45+D);
		    line(270,-52+D,270,-45+D);;
		    bar(250,-45+D,280,-25+D);
		    bar(280,-40+D,330,-10+D);
		    bar(290,-10+D,295,BB=0+D);
		    bar(315,-10+D,320,0+D);
		    line(330,-35+D,345,-5+D);
		    D=D+45;
		    if(bo>=250 && Bo<=330 && BB>=v1 && BB<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont smash the animal");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		  }
	      //obstacle 7


		    if(BB>350)
		  {

		  setfillstyle(10,15);
		    line(365,-52+J,365,-45+J);
		    line(370,-52+J,370,-45+J);
		    bar(350,-45+J,380,-25+J);
		    bar(380,-40+J,430,-10+J);
		    bar(390,-10+J,395,Bb=0+J);
		    bar(415,-10+J,420,0+J);
		    line(430,-35+J,445,-5+J);
		    J=J+85;
		    if(bo>=250 && Bo<=330 && Bb>=v1 && Bb<=v2+25)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont smash the animal");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		  }
		  //obstacle 8

		  if(Bb>550)
		  {

		  setfillstyle(10,15);
		    line(165,-52+F,165,-45+F);
		    line(170,-52+F,170,-45+F);
		    bar(150,-45+F,180,-25+F);
		    bar(180,-40+F,230,-10+F);
		    bar(190,-10+F,195,Mm=0+F);
		    bar(215,-10+F,220,0+F);
		    line(230,-35+F,245,-5+F);
		    F=F+45;
		    if(bo>=150 && Bo<=230 && Mm>=v1 && Mm>=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont smash the animal");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		  }

		  //conclusion
		  if(Mm>600)

		    break;



		if(e<150 || p>450)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont go out of the road");
			 delay(2000);
			 if(getch())
			lvlscrn();
			 }


		if(kbhit())
	  {
		    B=getch();
		if(B==97 || B==129)
		     {
			x=-20;
			y=0;

			a=a+x;
			b=b+y;
     delay(1);
		      }


		  if(B==100 || B==132)
		     {
			  x=20;
			    y=0;
		    a=a+x;
			b=b+y;
     delay(1);
		    }
		   if(B==27)
		     lvlscrn();


	      }
	i=i+25;
	delay(150);
	if(i==1000)
	i=0;
}

    while(b<=300)
	{
	cleardevice();

       //BG
	setfillstyle(SOLID_FILL,GREEN);
	bar(50,-10,149 ,500);
	bar(451,-10,550,500);
	setfillstyle(SOLID_FILL,DARKGRAY);
	bar(150,-10,450,500);
	setfillstyle(SOLID_FILL,WHITE);
	bar(295,-30,315,50);
	bar(295,80,315,160);
	bar(295,190,315,270);
	bar(295,300,315,380);
	bar(295,410,315,490);
	bar(295,520,315,600);
	bar(295,630,315,710);
	bar(295,740,315,820);
	bar(295,850,315,930);
	//BUGGY
	//joints

	setfillstyle(SOLID_FILL,RED);
	bar(210,410-b,215,413-b);
	bar(210,440-b,215,443-b);
	bar(180,410-b,175,413-b);
	bar(180,440-b,175,443-b);
	//wheels


	setfillstyle(SOLID_FILL,BLACK);
	bar(175,405-b,170,417-b);
	bar(175,435-b,170,447-b);
	bar(215,405-b,220,417-b);
	bar(215,435-b,220,447-b);

		//body
		setfillstyle(SLASH_FILL,LIGHTBLUE);
		bar(185,390-b,205,400-b);
		setfillstyle(LINE_FILL,BLUE);
		bar(180,400-b,210,v2=450-b);
   b=b+25;
   delay(50);
   if(b>=300)

   {
		//BUGGY FRIEND
	//joints

	setfillstyle(SOLID_FILL,RED);
	bar(260,10,265,13);
	bar(260,40,265,43);
	bar(230,10,225,13);
	bar(230,40,225,43);
	//wheels


	setfillstyle(SOLID_FILL,BLACK);
	bar(225,5,220,17);
	bar(225,35,220,47);
	bar(265,5,270,17);
	bar(265,35,270,47);

		//body
		setfillstyle(SLASH_FILL,LIGHTBLUE);
		bar(235,50,255,60);
		setfillstyle(LINE_FILL,GREEN);
		bar(230,0,260,50);
		    delay(1000);
		    settextstyle(2,0,4);
		    outtextxy(150,200,"WOW... A New Car");
		    delay(500);
		    outtextxy(150,220,"This is great.. now buggy has a friend");
		    delay(3000);
   cleardevice();
   setbkcolor(2);
   setcolor(20);
   settextstyle(2,0,5);
   outtextxy(150,150,"LVL 1 COMPLETE");

   outtextxy(150,190,"Congratulations");

   settextstyle(2,0,4);
   outtextxy(250,300,"press a to go to next lvl...");
   outtextxy(250,320,"press any other key to go to lvl screen");
   if(getch()==97)
   {
   setbkcolor(0);
   level2();
   }
   else
   lvlscrn();
   }
 }
}






       void level2()
      {
      int i=0,B,a=0,x,y,e,p,A=0,E,P,X,bo,BO,bO,Bo,v2,v1,V2,V1,mm=0,MM=0;
      int t=0,T=0,r=0,R=0,g=0,G=0,c=0,C=0,w=0,W=0,u=0,U=0,xx=0,XX=0,ZZ=0,zz=0;
      int s=0,S=0,h=0,H=0,k=0,K=0,l=0,L=0,n=0,N=0,j=0,J=0,z=0,Z=0,q=0,Q=0;
      cleardevice();

      settextstyle(3,0,4);
      outtextxy(270,100,"LVL 2");
      outtextxy(270,150,"BUGGY and his friend");
      settextstyle(2,0,5);
      outtextxy(270,140,"Double player mode");
      settextstyle(2,0,4);
      outtextxy(350,350,"press any key to start lvl and esc to exit");
      outtextxy(350,370,"use 'j' and 'l' to move buggys friend");
      if(getch()!=27)
      {
	while(1)
      {


      cleardevice();
	setfillstyle(SOLID_FILL,BLUE);
	bar(0,-10,50,500);
	bar(550,-10,600,500);
	setfillstyle(SOLID_FILL,DARKGRAY);


	bar(50,-10,550,500);
	setfillstyle(10,BROWN);
	bar(295,-10,315,500);
	setfillstyle(SOLID_FILL,WHITE);
	bar(170,-1020+i,180,-1041+i);
	bar(170,-910+i,180,-1030+i);
	bar(170,-900+i,180,-920+i);
	bar(170,-890+i,180,-810+i);
	bar(170,-780+i,180,-700+i);
	bar(170,-670+i,180,-590+i);
	bar(170,-560+i,180,-480+i);
	bar(170,-450+i,180,-370+i);
	bar(170,-340+i,180,-260+i);
	bar(170,-230+i,180,-150+i);
	bar(170,-120+i,180,-60+i);
	bar(170,-30+i,180,50+i);
	bar(170,80+i,180,160+i);
	bar(170,190+i,180,270+i);
	bar(170,300+i,180,380+i);
	bar(170,410+i,180,490+i);
	bar(170,520+i,180,600+i);
	bar(170,630+i,180,710+i);
	bar(170,740+i,180,820+i);
	bar(170,850+i,180,930+i);


	//road 2
	setfillstyle(SOLID_FILL,WHITE);
	bar(430,-1020+i,440,-1041+i);
	bar(430,-910+i,440,-1030+i);
	bar(430,-900+i,440,-920+i);
	bar(430,-890+i,440,-810+i);
	bar(430,-780+i,440,-700+i);
	bar(430,-670+i,440,-590+i);
	bar(430,-560+i,440,-480+i);
	bar(430,-450+i,440,-370+i);
	bar(430,-340+i,440,-260+i);
	bar(430,-230+i,440,-150+i);
	bar(430,-120+i,440,-60+i);
	bar(430,-30+i,440,50+i);
	bar(430,80+i,440,160+i);
	bar(430,190+i,440,270+i);
	bar(430,300+i,440,380+i);
	bar(430,410+i,440,490+i);
	bar(430,520+i,440,600+i);
	bar(430,630+i,440,710+i);
	bar(430,740+i,440,820+i);
	bar(430,850+i,440,930+i);
	i=i+25;
	if(i==1000)
	i=0;

		//BUGGY
	//joints

	setfillstyle(SOLID_FILL,RED);
	bar(210+a,410,215+a,413);
	bar(210+a,440,215+a,443);
	bar(180+a,410,175+a,413);
	bar(180+a,440,175+a,443);
	//wheels


	setfillstyle(SOLID_FILL,BLACK);
	bar(e=175+a,405,e=170+a,417);
	bar(175+a,435,170+a,447);
	bar(215+a,405,220+a,417);
	bar(p=215+a,435,p=220+a,447);

		//body
		setfillstyle(SLASH_FILL,LIGHTBLUE);
		bar(185+a,v1=390,205+a,400);
		setfillstyle(LINE_FILL,BLUE);
		bar(BO=180+a,400,Bo=210+a,v2=450);



		//buggy friend

			//BUGGY
	//joints

	setfillstyle(SOLID_FILL,RED);
	bar(410+A,410,415+A,413);
	bar(410+A,440,415+A,443);
	bar(380+A,410,375+A,413);
	bar(380+A,440,375+A,443);
	//wheels


	setfillstyle(SOLID_FILL,BLACK);
	bar(E=375+A,405,E=370+A,417);
	bar(375+A,435,370+A,447);
	bar(415+A,405,420+A,417);
	bar(P=415+A,435,P=420+A,447);

		//body
		setfillstyle(SLASH_FILL,LIGHTBLUE);
		bar(385+A,V1=390,405+A,400);
		setfillstyle(LINE_FILL,GREEN);
		bar(bO=380+A,400,bo=410+A,V2=450);

		   //obstacle 1 for buggy 1

		    setcolor(BROWN);
		    setfillstyle(4,BROWN);
		    bar3d(100,-10+S,195,s=5+S,0,3);
		    S=S+45;
		    if(BO>=100 && Bo<=195 && s>=v1 && s<=v2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont hit the block");
			 delay(2000);
			 if(getch())
			lvlscrn();
		      }

		      //obstacle 1 for buggy 2

		    setcolor(BROWN);
		    setfillstyle(4,BROWN);
		    bar3d(400,-40+H,545,h=-30+H,0,3);
		    H=H+45;
		    if(bO>=400 && bo<=545 && h>=V1 && h<=V2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy's friend is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont hit the block");
			 delay(2000);
			 if(getch())
			lvlscrn();
		      }

		       //obstacle 2 for buggy 1

		       if(s>=500)
		       {
		    setcolor(BROWN);
		    setfillstyle(4,BROWN);
		    bar3d(200,-10+K,280,k=10+K,0,3);
		    K=K+45;
		    if(BO>=200 && Bo<=280 && k>=v1 && k<=v2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont hit the block");
				delay(2000);
				if(getch())
				lvlscrn();
		      }
		   }

		       //obstacle 2 for buggy 2

		      if(h>=300)
		       {
		    setcolor(BLACK);
		    setfillstyle(SOLID_FILL,BLACK);
		    fillellipse(365,l=-10+L,50,20);
		    L=L+25;
		    if(bO>=315 && bo<=415 && l>=V1 && l<=V2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy's friend is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall on the ditch");
			delay(2000);
			if(getch())
			lvlscrn();
		      }
		   }

		     //obstacle 3 for buggy 1

		       if(k>=450)
		       {
		   setcolor(BLACK);
		    setfillstyle(SOLID_FILL,BLACK);
		    fillellipse(225,n=-10+N,70,30);
		    N=N+45;
		    if(BO>=155 && Bo<=295 && n>=v1 && n<=v2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall on th ditch");
			delay(2000);
			if(getch())
			lvlscrn();
		      }
		   }

		    //obstacle 3 for buggy 2

		     if(l>450)
		  {

		  setfillstyle(10,15);
		    line(365,-52+J,365,-45+J);
		    line(370,-52+J,370,-45+J);
		    bar(350,-45+J,380,-25+J);
		    bar(380,-40+J,430,-10+J);
		    bar(390,-10+J,395,j=0+J);
		    bar(415,-10+J,420,0+J);
		    line(430,-35+J,445,-5+J);
		    J=J+45;
		    if(bO>=350 && bo<=445 && j>=v1 && j<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy's friend is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont smash the animal");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		  }
		   //obstacle 4 for buggy 1

		       if(n>=450)
		       {
		   setcolor(BLACK);
		    setfillstyle(SOLID_FILL,BLACK);
		    fillellipse(120,z=-10+Z,70,40);
		    Z=Z+45;
		    if(BO>=50 && Bo<=190 && z>=v1 && z<=v2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall on th ditch");
			delay(2000);
			if(getch())
			lvlscrn();
		      }
		   }

		      //obstacle 4 for buggy 2
		    if(j>450)
		    {
		    setcolor(BROWN);
		    setfillstyle(4,BROWN);
		    bar3d(315,-40+Q,450,q=-20+Q,0,3);
		    Q=Q+45;
		    if(bO>=315 && bo<=450 && q>=V1 && q<=V2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy's friend is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont hit the block");
			delay(2000);
			if(getch())
			lvlscrn();
		      }
		    }


		    //obstacle 5 for buggy 1

		     if(z>450)
		  {

		  setfillstyle(10,15);
		  setcolor(0);
		    line(225,-52+T,225,-45+T);
		    line(230,-52+T,230,-45+T);
		    bar(210,-45+T,240,-25+T);
		    bar(240,-40+T,290,-10+T);
		    bar(250,-10+T,255,t=0+T);
		    bar(275,-10+T,280,0+T);
		    line(290,-35+T,295,-5+T);
		    T=T+45;
		    if(BO>=190 && Bo<=275 && t>=V1 && t<=V2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont smash the animal");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		  }


		    //obstacle 5 for buggy 2
		    if(q>450)
		    {
		    setcolor(BROWN);
		    setfillstyle(4,BROWN);
		    bar3d(315,-40+R,380,r=-20+R,0,3);
		    bar3d(475,-40+R,550,r=-20+R,0,3);
		    R=R+45;
		    if((bO>=315 && bo<=380 && r>=V1 && r<=V2) || (bO>=475 && bo<=550 && r>=V1 && r<=V2))
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy's friend is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont hit the block");
		      delay(2000);
		      if(getch())
			lvlscrn();
		      }
		    }

		     //obstacle 6 for buggy 1

		     if(t>450)
		  {

		  setfillstyle(10,15);
		  setcolor(0);
		    line(205,-52+G,205,-45+G);
		    line(210,-52+G,210,-45+G);
		    bar(190,-45+G,220,-25+G);
		    bar(220,-40+G,270,-10+G);
		    bar(230,-10+G,235,g=0+G);
		    bar(255,-10+G,260,0+G);
		    line(270,-35+G,275,-5+G);
		    //2nd cattle
		    line(65,-52+G,65,-45+G);
		    line(55,-52+G,55,-45+G);
		    bar(50,-45+G,80,-25+G);
		    bar(80,-40+G,130,-10+G);
		    bar(90,-10+G,95,g=0+G);
		    bar(115,-10+G,120,0+G);
		    line(130,-35+G,135,-5+G);
		    G=G+45;
		    if((BO>=190 && Bo<=275 && g>=V1 && g<=V2) || (BO>=50 && Bo<=135 && g>=V1 && g<=V2))
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont smash the animal");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		  }

		  //obstacle 6 for buggy 2
		  if(r>=400)
		       {
		    setcolor(BLACK);
		    setfillstyle(SOLID_FILL,BLACK);
		    fillellipse(450,c=-10+C,60,20);
		    C=C+45;
		    if(bO>=390 && bo<=502 && c>=V1 && c<=V2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy's friend is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall on the ditch");
			delay(2000);
			if(getch())
			lvlscrn();
		      }
		   }


		    //obstacle 7 for buggy 2
		  if(c>=450)
		       {
		    setcolor(BLACK);
		    setfillstyle(SOLID_FILL,BLACK);
		    fillellipse(365,w=-10+W,50,20);
		    W=W+65;
		    if(bO>=315 && bo<=415 && w>=V1 && w<=V2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy's friend is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall on the ditch");
			 delay(2000);
			if(getch())
			lvlscrn();
		      }
		   }

		     //obstacle 8 for buggy 2
		  if(w>=450)
		       {
		    setcolor(BLACK);
		    setfillstyle(SOLID_FILL,BLACK);
		    fillellipse(500,u=-10+U,50,20);
		    U=U+65;
		    if(bO>=450 && bo<=550 && u>=V1 && u<=V2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy's friend is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall on the ditch");
			delay(2000);
			if(getch())
			lvlscrn();
		      }
		   }
		     //obstacle 9 for buggy 2
		     if(u>=500)
		       {
		    setcolor(BLACK);
		    setfillstyle(SOLID_FILL,BLACK);
		    fillellipse(400,xx=-10+XX,85,20);
		    XX=XX+45;
		    if(bO>=315 && bo<=485 && xx>=V1 && xx<=V2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy's friend is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall on the ditch");
			delay(2000);
			if(getch())
			lvlscrn();
		      }
		   }
			  //obstacle 10 for buggy 2
		   if(xx>=450)
		       {
		    setcolor(BLACK);
		    setfillstyle(SOLID_FILL,BLACK);
		    fillellipse(485,zz=-10+ZZ,65,20);
		    ZZ=ZZ+45;
		    if(bO>=400 && bo<=550 && zz>=V1 && zz<=V2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy's friend is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall on the ditch");
			delay(2000);
			if(getch())
			lvlscrn();
		      }
		   }

		   //lvl 2 final
		   if(zz>=450)
		       {
		    setcolor(BLACK);
		    setfillstyle(SOLID_FILL,BLACK);
		    fillellipse(432,mm=-10+MM,118,40);
		    MM=MM+65;
		    if(mm>=V1)
		       break;
		      }


		if(e<=50|| p>=295)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont go out of the road");
			delay(2000);
			if(getch())
			lvlscrn();
			 }
			if(E<=315|| P>=550)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy's friend is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont go out of the road");
			 delay(2000);
			 if(getch())
			lvlscrn();
			 }






	if(kbhit())
	  {
		    B=getch();
		if(B==97 || B==65)
		     {
			x=-20;

			a=a+x;
			delay(1);
		      }


		  if(B==100 || B==68)
		     {
			  x=20;
		    a=a+x;
		    delay(1);
		    }
		    if(B==74 || B==106)
		     {
			X=-20;

			A=A+X;
			delay(1);
		      }


		  if(B==76 || B==108)
		     {
			  X=20;
		    A=A+X;
		    delay(1);
		    }
		   if(B==27)
		     lvlscrn();



	      }

	      i=i+25;
	      delay(150);
	      if(i==1000)
	      i=0;

     }

      cleardevice();
      i=0;
	setfillstyle(SOLID_FILL,BLUE);
	bar(0,-10,50,500);
	bar(550,-10,600,500);
	setfillstyle(SOLID_FILL,DARKGRAY);


	bar(50,-10,550,500);
	setfillstyle(10,BROWN);
	bar(295,-10,315,500);
	setfillstyle(SOLID_FILL,WHITE);
	bar(170,-1020+i,180,-1041+i);
	bar(170,-910+i,180,-1030+i);
	bar(170,-900+i,180,-920+i);
	bar(170,-890+i,180,-810+i);
	bar(170,-780+i,180,-700+i);
	bar(170,-670+i,180,-590+i);
	bar(170,-560+i,180,-480+i);
	bar(170,-450+i,180,-370+i);
	bar(170,-340+i,180,-260+i);
	bar(170,-230+i,180,-150+i);
	bar(170,-120+i,180,-60+i);
	bar(170,-30+i,180,50+i);
	bar(170,80+i,180,160+i);
	bar(170,190+i,180,270+i);
	bar(170,300+i,180,380+i);
	bar(170,410+i,180,490+i);
	bar(170,520+i,180,600+i);
	bar(170,630+i,180,710+i);
	bar(170,740+i,180,820+i);
	bar(170,850+i,180,930+i);


	//road 2
	setfillstyle(SOLID_FILL,WHITE);
	bar(430,-1020+i,440,-1041+i);
	bar(430,-910+i,440,-1030+i);
	bar(430,-900+i,440,-920+i);
	bar(430,-890+i,440,-810+i);
	bar(430,-780+i,440,-700+i);
	bar(430,-670+i,440,-590+i);
	bar(430,-560+i,440,-480+i);
	bar(430,-450+i,440,-370+i);
	bar(430,-340+i,440,-260+i);
	bar(430,-230+i,440,-150+i);
	bar(430,-120+i,440,-60+i);
	bar(430,-30+i,440,50+i);
	bar(430,80+i,440,160+i);
	bar(430,190+i,440,270+i);
	bar(430,300+i,440,380+i);
	bar(430,410+i,440,490+i);
	bar(430,520+i,440,600+i);
	bar(430,630+i,440,710+i);
	bar(430,740+i,440,820+i);
	bar(430,850+i,440,930+i);

		//BUGGY
	//joints

	setfillstyle(SOLID_FILL,RED);
	bar(210+a,410,215+a,413);
	bar(210+a,440,215+a,443);
	bar(180+a,410,175+a,413);
	bar(180+a,440,175+a,443);
	//wheels


	setfillstyle(SOLID_FILL,BLACK);
	bar(e=175+a,405,e=170+a,417);
	bar(175+a,435,170+a,447);
	bar(215+a,405,220+a,417);
	bar(p=215+a,435,p=220+a,447);

		//body
		setfillstyle(SLASH_FILL,LIGHTBLUE);
		bar(185+a,v1=390,205+a,400);
		setfillstyle(LINE_FILL,BLUE);
		bar(BO=180+a,400,Bo=210+a,v2=450);

	 settextstyle(2,0,5);
	outtextxy(320,100,"OH NO!!!");
	delay(200);
	outtextxy(320,120,"BUGGY's friend fell on that ditch");
	delay(300);
	outtextxy(320,140,"Buggy needs to go get his friend");
	delay(400);
	outtextxy(320,160,"Help him .. get his friend back");
	settextstyle(2,0,4);
	 outtextxy(380,450,"press any key to go to next lvl");
	 if (getch()!=27)
	 level3();
	 else
	 lvlscrn();


    }

      else
      lvlscrn();
    }



       void level3()
      {

      int i=0,B=0,a=0,x,y,e,p,PP=0,L,v1=0,v2=0,bo=0,Bo=0,O=0,o=0,OO=0,oo=0;
      int ll=0,LL=0,JJ=0,jj=0,bb=0,BB=0,xx=0,XX=0,dd=0,DD=0,ZZ=0,zz=0;
      int KK=0,kk=0,tt=0,TT=0,QQ=0,qq=0,b=0,w=0,F,R;

      cleardevice();
      setcolor(2);
      settextstyle(3,0,4);
      outtextxy(270,100,"LVL 3");
      outtextxy(270,150,"Save your friend Buggy!!");
      settextstyle(2,0,5);
      outtextxy(270,140,"Single player mode");
      settextstyle(2,0,4);
      outtextxy(350,350,"press any key to start lvl and esc to exit");
      outtextxy(350,370,"use 'a' and 'd' to move Buggy");
       if(getch()==27)
       lvlscrn();
       else
       {
	 while(1)
      {
	U:
	cleardevice();
	setbkcolor(0);
	setfillstyle(SOLID_FILL,RED);
	bar(50,-10,149 ,500);
	bar(451,-10,550,500);

	setfillstyle(SOLID_FILL,DARKGRAY);


	bar(150,-10,450,500);
	setfillstyle(SOLID_FILL,WHITE);
	bar(295,-1020+i,315,-1041+i);
	bar(295,-910+i,315,-1030+i);
	bar(295,-900+i,315,-920+i);
	bar(295,-890+i,315,-810+i);
	bar(295,-780+i,315,-700+i);
	bar(295,-670+i,315,-590+i);
	bar(295,-560+i,315,-480+i);
	bar(295,-450+i,315,-370+i);
	bar(295,-340+i,315,-260+i);
	bar(295,-230+i,315,-150+i);
	bar(295,-120+i,315,-60+i);
	bar(295,-30+i,315,50+i);
	bar(295,80+i,315,160+i);
	bar(295,190+i,315,270+i);
	bar(295,300+i,315,380+i);
	bar(295,410+i,315,490+i);
	bar(295,520+i,315,600+i);
	bar(295,630+i,315,710+i);
	bar(295,740+i,315,820+i);
	bar(295,850+i,315,930+i);



	//BUGGY
	//joints

	setfillstyle(SOLID_FILL,RED);
	bar(210+a,410,215+a,413);
	bar(210+a,440,215+a,443);
	bar(180+a,410,175+a,413);
	bar(180+a,440,175+a,443);
	//wheels


	setfillstyle(SOLID_FILL,BLACK);
	bar(e=175+a,405,e=170+a,417);
	bar(175+a,435,170+a,447);
	bar(215+a,405,220+a,417);
	bar(p=215+a,435,p=220+a,447);

		//body
		setfillstyle(SLASH_FILL,LIGHTBLUE);
		bar(185+a,v1=390,205+a,400);
		setfillstyle(LINE_FILL,BLUE);
		bar(bo=180+a,400,Bo=210+a,v2=450);

	//rain
	setcolor(3);
	line(0+PP,0+PP,5+PP,10+PP);
	line(100+PP,0+PP,105+PP,10+PP);
	line(200+PP,0+PP,205+PP,10+PP);
	line(300+PP,0+PP,305+PP,10+PP);
	line(400+PP,0+PP,405+PP,10+PP);
	line(500+PP,0+PP,505+PP,10+PP);
	line(80+PP,50+PP,85+PP,60+PP);
	line(180+PP,50+PP,185+PP,60+PP);
	line(280+PP,50+PP,285+PP,60+PP);
	line(380+PP,50+PP,385+PP,60+PP);
	line(480+PP,50+PP,485+PP,60+PP);
	line(580+PP,50+PP,585+PP,60+PP);
	line(60+PP,100+PP,65+PP,110+PP);
	line(160+PP,100+PP,165+PP,110+PP);
	line(260+PP,100+PP,265+PP,110+PP);
	line(360+PP,100+PP,365+PP,115+PP);
	line(460+PP,100+PP,465+PP,115+PP);
	line(560+PP,100+PP,565+PP,115+PP);
	line(40+PP,150+PP,45+PP,160+PP);
	line(140+PP,150+PP,145+PP,160+PP);
	line(240+PP,150+PP,245+PP,160+PP);
	line(340+PP,150+PP,345+PP,160+PP);
	line(440+PP,150+PP,445+PP,160+PP);
	line(540+PP,150+PP,545+PP,160+PP);
	line(20+PP,200+PP,25+PP,210+PP);
	line(120+PP,200+PP,125+PP,210+PP);
	line(220+PP,200+PP,225+PP,210+PP);
	line(320+PP,200+PP,325+PP,210+PP);
	line(420+PP,200+PP,425+PP,210+PP);
	line(520+PP,200+PP,525+PP,210+PP);
	line(-20+PP,250+PP,-15+PP,260+PP);
	line(120+PP,250+PP,125+PP,260+PP);
	line(220+PP,250+PP,225+PP,260+PP);
	line(320+PP,250+PP,325+PP,260+PP);
	line(420+PP,250+PP,425+PP,260+PP);
	line(520+PP,250+PP,525+PP,260+PP);
	line(40+PP,300+PP,45+PP,310+PP);
	line(140+PP,300+PP,145+PP,310+PP);
	line(240+PP,300+PP,245+PP,310+PP);
	line(340+PP,300+PP,345+PP,310+PP);
	line(440+PP,300+PP,445+PP,310+PP);
	line(540+PP,300+PP,545+PP,310+PP);
	line(60+PP,350+PP,65+PP,360+PP);
	line(160+PP,350+PP,165+PP,360+PP);
	line(260+PP,350+PP,265+PP,360+PP);
	line(360+PP,350+PP,365+PP,360+PP);
	line(460+PP,350+PP,465+PP,360+PP);
	line(560+PP,350+PP,565+PP,360+PP);
	line(80+PP,400+PP,85+PP,410+PP);
	line(180+PP,400+PP,185+PP,410+PP);
	line(280+PP,400+PP,285+PP,410+PP);
	line(380+PP,400+PP,385+PP,410+PP);
	line(480+PP,400+PP,485+PP,410+PP);
	line(580+PP,400+PP,585+PP,410+PP);

	PP=PP+25;
	if(PP>=100)
	PP=0;
	    //obstacle1
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);
	    bar3d(150,-10+O,180,o=0+O,3,1);
	    bar3d(180,-10+O,210,0+O,3,1);
	    bar3d(210,-10+O,240,0+O,3,1);
	    bar3d(240,-10+O,245,0+O,3,1);
	    bar3d(150,-20+O,165,-10+O,3,1);
	    bar3d(165,-20+O,195,-10+O,3,1);
	    bar3d(195,-20+O,215,-10+O,3,1);
	    bar3d(215,-20+O,245,-10+O,3,1);
	    bar3d(150,-30+O,180,-20+O,3,1);
	    bar3d(180,-30+O,210,-20+O,3,1);
	    bar3d(210,-30+O,240,-20+O,3,1);
	    bar3d(240,-30+O,245,-20+O,3,1);
	    bar3d(150,-40+O,165,-30+O,3,1);
	    bar3d(165,-40+O,195,-30+O,3,1);
	    bar3d(195,-40+O,215,-30+O,3,1);
	    bar3d(215,-40+O,245,-30+O,3,1);
	    O=O+45;

		if(o>=v1 && bo>=150 && Bo<=240 && o<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }


			 //obstacle2
			  if(o>=450)
			  {
			if(o>=450 && o<=500)
			{
			  setbkcolor(15);
			  cleardevice();
			  delay(200);
			  cleardevice();
			  goto U;
			  }
			setcolor(15);
	    setfillstyle(SOLID_FILL,12);

	    bar3d(320,-10+OO,350,oo=0+OO,3,1);
	    bar3d(350,-10+OO,380,0+OO,3,1);
	    bar3d(380,-10+OO,410,0+OO,3,1);
	    bar3d(410,-10+OO,440,0+OO,3,1);
	    bar3d(440,-10+OO,445,0+OO,3,1);
	    bar3d(320,-20+OO,335,-10+OO,3,1);
	    bar3d(335,-20+OO,365,-10+OO,3,1);
	    bar3d(365,-20+OO,395,-10+OO,3,1);
	    bar3d(395,-20+OO,415,-10+OO,3,1);
	    bar3d(415,-20+OO,445,-10+OO,3,1);
	    bar3d(320,-30+OO,350,-20+OO,3,1);
	    bar3d(350,-30+OO,380,-20+OO,3,1);
	    bar3d(380,-30+OO,410,-20+OO,3,1);
	    bar3d(410,-30+OO,440,-20+OO,3,1);
	    bar3d(440,-30+OO,445,-20+OO,3,1);
	    bar3d(320,-40+OO,350,-30+OO,3,1);
	    bar3d(350,-40+OO,365,-30+OO,3,1);
	    bar3d(365,-40+OO,395,-30+OO,3,1);
	    bar3d(395,-40+OO,415,-30+OO,3,1);
	    bar3d(415,-40+OO,445,-30+OO,3,1);

	    OO=OO+45;

		if(oo>=v1 && bo>=350 && Bo<=450 && oo<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

	       }

		  //obstacle3
		  if(oo>=400)
		  {
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);
	    bar3d(150,-10+TT,180,tt=0+TT,3,1);
	    bar3d(180,-10+TT,210,0+TT,3,1);
	    bar3d(210,-10+TT,240,0+TT,3,1);
	    bar3d(240,-10+TT,245,0+TT,3,1);
	    bar3d(150,-20+TT,165,-10+TT,3,1);
	    bar3d(165,-20+TT,195,-10+TT,3,1);
	    bar3d(195,-20+TT,215,-10+TT,3,1);
	    bar3d(215,-20+TT,245,-10+TT,3,1);
	    bar3d(150,-30+TT,180,-20+TT,3,1);
	    bar3d(180,-30+TT,210,-20+TT,3,1);
	    bar3d(210,-30+TT,240,-20+TT,3,1);
	    bar3d(240,-30+TT,245,-20+TT,3,1);
	    bar3d(150,-40+TT,165,-30+TT,3,1);
	    bar3d(165,-40+TT,195,-30+TT,3,1);
	    bar3d(195,-40+TT,215,-30+TT,3,1);
	    bar3d(215,-40+TT,245,-30+TT,3,1);
	    TT=TT+65;

		if(tt>=v1 && bo>=150 && Bo<=240 && tt<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
	    bar3d(320,-10+QQ,350,qq=0+QQ,3,1);
	    bar3d(350,-10+QQ,380,0+QQ,3,1);
	    bar3d(380,-10+QQ,410,0+QQ,3,1);
	    bar3d(410,-10+QQ,440,0+QQ,3,1);
	    bar3d(440,-10+QQ,445,0+QQ,3,1);
	    bar3d(320,-20+QQ,335,-10+QQ,3,1);
	    bar3d(335,-20+QQ,365,-10+QQ,3,1);
	    bar3d(365,-20+QQ,395,-10+QQ,3,1);
	    bar3d(395,-20+QQ,415,-10+QQ,3,1);
	    bar3d(415,-20+QQ,445,-10+QQ,3,1);
	    bar3d(320,-30+QQ,350,-20+QQ,3,1);
	    bar3d(350,-30+QQ,380,-20+QQ,3,1);
	    bar3d(380,-30+QQ,410,-20+QQ,3,1);
	    bar3d(410,-30+QQ,440,-20+QQ,3,1);
	    bar3d(440,-30+QQ,445,-20+QQ,3,1);
	    bar3d(320,-40+QQ,350,-30+QQ,3,1);
	    bar3d(350,-40+QQ,365,-30+QQ,3,1);
	    bar3d(365,-40+QQ,395,-30+QQ,3,1);
	    bar3d(395,-40+QQ,415,-30+QQ,3,1);
	    bar3d(415,-40+QQ,445,-30+QQ,3,1);

	    QQ=QQ+65;

		if(qq>=v1 && bo>=350 && Bo<=450 && qq<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

	       }
	       //obstacle   4
		if(tt>=400)
			{
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);

	    bar3d(270,-10+LL,300,ll=0+LL,3,1);
	    bar3d(300,-10+LL,330,0+LL,3,1);
	    bar3d(330,-10+LL,360,0+LL,3,1);
	    bar3d(360,-10+LL,390,0+LL,3,1);
	    bar3d(390,-10+LL,395,0+LL,3,1);
	    bar3d(270,-20+LL,385,-10+LL,3,1);
	    bar3d(285,-20+LL,315,-10+LL,3,1);
	    bar3d(315,-20+LL,345,-10+LL,3,1);
	    bar3d(345,-20+LL,365,-10+LL,3,1);
	    bar3d(365,-20+LL,395,-10+LL,3,1);
	    bar3d(270,-30+LL,350,-20+LL,3,1);
	    bar3d(300,-30+LL,330,-20+LL,3,1);
	    bar3d(330,-30+LL,360,-20+LL,3,1);
	    bar3d(360,-30+LL,390,-20+LL,3,1);
	    bar3d(390,-30+LL,395,-20+LL,3,1);
	    bar3d(270,-40+LL,300,-30+LL,3,1);
	    bar3d(300,-40+LL,315,-30+LL,3,1);
	    bar3d(315,-40+LL,345,-30+LL,3,1);
	    bar3d(345,-40+LL,365,-30+LL,3,1);
	    bar3d(365,-40+LL,395,-30+LL,3,1);

	    LL=LL+45;

		if(ll>=v1 && bo>=270 && Bo<=395 && ll<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

	       }


		//obstacle5
		if(ll>400)
		{
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);
	    bar3d(150,-10+XX,180,xx=0+XX,3,1);
	    bar3d(180,-10+XX,210,0+XX,3,1);
	    bar3d(210,-10+XX,240,0+XX,3,1);
	    bar3d(240,-10+XX,245,0+XX,3,1);
	    bar3d(150,-20+XX,165,-10+XX,3,1);
	    bar3d(165,-20+XX,195,-10+XX,3,1);
	    bar3d(195,-20+XX,215,-10+XX,3,1);
	    bar3d(215,-20+XX,245,-10+XX,3,1);
	    bar3d(150,-30+XX,180,-20+XX,3,1);
	    bar3d(180,-30+XX,210,-20+XX,3,1);
	    bar3d(210,-30+XX,240,-20+XX,3,1);
	    bar3d(240,-30+XX,245,-20+XX,3,1);
	    bar3d(150,-40+XX,165,-30+XX,3,1);
	    bar3d(165,-40+XX,195,-30+XX,3,1);
	    bar3d(195,-40+XX,215,-30+XX,3,1);
	    bar3d(215,-40+XX,245,-30+XX,3,1);
	    XX=XX+45;

		if(xx>=v1 && bo>=150 && Bo<=240 && xx<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

		   }

		 //obstacle   6
      if(xx>=400)
	 {
		if(xx>=400 && xx<=450)
			{
			  setbkcolor(15);
			  cleardevice();
			  delay(200);
			  cleardevice();
			  goto U;
			  }
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);

	    bar3d(270,-10+KK,300,kk=0+KK,3,1);
	    bar3d(300,-10+KK,330,0+KK,3,1);
	    bar3d(330,-10+KK,360,0+KK,3,1);
	    bar3d(360,-10+KK,390,0+KK,3,1);
	    bar3d(390,-10+KK,395,0+KK,3,1);
	    bar3d(270,-20+KK,385,-10+KK,3,1);
	    bar3d(285,-20+KK,315,-10+KK,3,1);
	    bar3d(315,-20+KK,345,-10+KK,3,1);
	    bar3d(345,-20+KK,365,-10+KK,3,1);
	    bar3d(365,-20+KK,395,-10+KK,3,1);
	    bar3d(270,-30+KK,350,-20+KK,3,1);
	    bar3d(300,-30+KK,330,-20+KK,3,1);
	    bar3d(330,-30+KK,360,-20+KK,3,1);
	    bar3d(360,-30+KK,390,-20+KK,3,1);
	    bar3d(390,-30+KK,395,-20+KK,3,1);
	    bar3d(270,-40+KK,300,-30+KK,3,1);
	    bar3d(300,-40+KK,315,-30+KK,3,1);
	    bar3d(315,-40+KK,345,-30+KK,3,1);
	    bar3d(345,-40+KK,365,-30+KK,3,1);
	    bar3d(365,-40+KK,395,-30+KK,3,1);

	    KK=KK+55;

		if(kk>=v1 && bo>=270 && Bo<=395 && kk<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

	       }
		 //obstacle 7
		 if(kk>450)
		 {
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);
	    bar3d(150,-10+BB,180,bb=0+BB,3,1);
	    bar3d(180,-10+BB,210,0+BB,3,1);
	    bar3d(210,-10+BB,240,0+BB,3,1);
	    bar3d(240,-10+BB,245,0+BB,3,1);
	    bar3d(150,-20+BB,165,-10+BB,3,1);
	    bar3d(165,-20+BB,195,-10+BB,3,1);
	    bar3d(195,-20+BB,215,-10+BB,3,1);
	    bar3d(215,-20+BB,245,-10+BB,3,1);
	    bar3d(150,-30+BB,180,-20+BB,3,1);
	    bar3d(180,-30+BB,210,-20+BB,3,1);
	    bar3d(210,-30+BB,240,-20+BB,3,1);
	    bar3d(240,-30+BB,245,-20+BB,3,1);
	    bar3d(150,-40+BB,165,-30+BB,3,1);
	    bar3d(165,-40+BB,195,-30+BB,3,1);
	    bar3d(195,-40+BB,215,-30+BB,3,1);
	    bar3d(215,-40+BB,245,-30+BB,3,1);
	    BB=BB+55;

		if(bb>=v1 && bo>=150 && Bo<=240 && bb<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

		//obstacle 8
	    bar3d(320,-10+JJ,350,jj=0+JJ,3,1);
	    bar3d(350,-10+JJ,380,0+JJ,3,1);
	    bar3d(380,-10+JJ,410,0+JJ,3,1);
	    bar3d(410,-10+JJ,440,0+JJ,3,1);
	    bar3d(440,-10+JJ,445,0+JJ,3,1);
	    bar3d(320,-20+JJ,335,-10+JJ,3,1);
	    bar3d(335,-20+JJ,365,-10+JJ,3,1);
	    bar3d(365,-20+JJ,395,-10+JJ,3,1);
	    bar3d(395,-20+JJ,415,-10+JJ,3,1);
	    bar3d(415,-20+JJ,445,-10+JJ,3,1);
	    bar3d(320,-30+JJ,350,-20+JJ,3,1);
	    bar3d(350,-30+JJ,380,-20+JJ,3,1);
	    bar3d(380,-30+JJ,410,-20+JJ,3,1);
	    bar3d(410,-30+JJ,440,-20+JJ,3,1);
	    bar3d(440,-30+JJ,445,-20+JJ,3,1);
	    bar3d(320,-40+JJ,350,-30+JJ,3,1);
	    bar3d(350,-40+JJ,365,-30+JJ,3,1);
	    bar3d(365,-40+JJ,395,-30+JJ,3,1);
	    bar3d(395,-40+JJ,415,-30+JJ,3,1);
	    bar3d(415,-40+JJ,445,-30+JJ,3,1);

	    JJ=JJ+55;


		if(jj>=v1 && bo>=350 && Bo<=450 && jj<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

	       }
	       //obstacle 9
	       if(jj>=400)
		  {
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);
	    bar3d(150,-10+DD,180,dd=0+DD,3,1);
	    bar3d(180,-10+DD,210,0+DD,3,1);
	    bar3d(210,-10+DD,240,0+DD,3,1);
	    bar3d(240,-10+DD,245,0+DD,3,1);
	    bar3d(150,-20+DD,165,-10+DD,3,1);
	    bar3d(165,-20+DD,195,-10+DD,3,1);
	    bar3d(195,-20+DD,215,-10+DD,3,1);
	    bar3d(215,-20+DD,245,-10+DD,3,1);
	    bar3d(150,-30+DD,180,-20+DD,3,1);
	    bar3d(180,-30+DD,210,-20+DD,3,1);
	    bar3d(210,-30+DD,240,-20+DD,3,1);
	    bar3d(240,-30+DD,245,-20+DD,3,1);
	    bar3d(150,-40+DD,165,-30+DD,3,1);
	    bar3d(165,-40+DD,195,-30+DD,3,1);
	    bar3d(195,-40+DD,215,-30+DD,3,1);
	    bar3d(215,-40+DD,245,-30+DD,3,1);
	    DD=DD+55;

		if(dd>=v1 && bo>=150 && Bo<=240 && dd<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

	      }


	    //obstacle10
	    if(dd>=500)
	    {
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);
	    bar3d(250,-10+ZZ,280,zz=0+ZZ,3,1);
	    bar3d(280,-10+ZZ,310,0+ZZ,3,1);
	    bar3d(310,-10+ZZ,340,0+ZZ,3,1);
	    bar3d(340,-10+ZZ,345,0+ZZ,3,1);
	    bar3d(250,-20+ZZ,265,-10+ZZ,3,1);
	    bar3d(265,-20+ZZ,295,-10+ZZ,3,1);
	    bar3d(295,-20+ZZ,315,-10+ZZ,3,1);
	    bar3d(315,-20+ZZ,345,-10+ZZ,3,1);
	    bar3d(250,-30+ZZ,280,-20+ZZ,3,1);
	    bar3d(280,-30+ZZ,310,-20+ZZ,3,1);
	    bar3d(310,-30+ZZ,340,-20+ZZ,3,1);
	    bar3d(340,-30+ZZ,345,-20+ZZ,3,1);
	    bar3d(250,-40+ZZ,265,-30+ZZ,3,1);
	    bar3d(265,-40+ZZ,295,-30+ZZ,3,1);
	    bar3d(295,-40+ZZ,315,-30+ZZ,3,1);
	    bar3d(315,-40+ZZ,345,-30+ZZ,3,1);
	    ZZ=ZZ+45;

		if(zz>=v1 && bo>=250 && Bo<=340 && zz<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		 }


   if(zz>=500)
   break;



		if(e<150 || p>450)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont go out of the road");
			 delay(3000);
			lvlscrn();
			 }


	if(kbhit())
	  {
		    B=getch();
		if(B==97 || B==129)
		     {
			x=-20;

			a=a+x;
			delay(1);
		      }


		  if(B==100 || B==132)
		     {
			  x=20;
		    a=a+x;
		    delay(1);
		    }
		   if(B==27)
		     lvlscrn();



	      }

	      i=i+25;
	      delay(100);
	      if(i==1000)
	      i=0;
	   }


	     if(zz>=500)
{
		 while(b<=300)
	{
	cleardevice();

       //BG
	setfillstyle(SOLID_FILL,RED);
	bar(50,-10,149 ,500);
	bar(451,-10,550,500);
	setfillstyle(SOLID_FILL,DARKGRAY);
	bar(150,-10,450,500);
	setfillstyle(SOLID_FILL,WHITE);
	bar(295,-30,315,50);
	bar(295,80,315,160);
	bar(295,190,315,270);
	bar(295,300,315,380);
	bar(295,410,315,490);
	bar(295,520,315,600);
	bar(295,630,315,710);
	bar(295,740,315,820);
	bar(295,850,315,930);
	//BUGGY
	//joints

	setfillstyle(SOLID_FILL,RED);
	bar(210,410-b,215,413-b);
	bar(210,440-b,215,443-b);
	bar(180,410-b,175,413-b);
	bar(180,440-b,175,443-b);
	//wheels


	setfillstyle(SOLID_FILL,BLACK);
	bar(175,405-b,170,417-b);
	bar(175,435-b,170,447-b);
	bar(215,405-b,220,417-b);
	bar(215,435-b,220,447-b);

		//body
		setfillstyle(SLASH_FILL,LIGHTBLUE);
		bar(185,390-b,205,400-b);
		setfillstyle(LINE_FILL,BLUE);
		bar(180,400-b,210,v2=450-b);
   b=b+30;

		//BUGGY FRIEND
	//joints

	setfillstyle(SOLID_FILL,RED);
	bar(350-w,15,353-w,20);
	bar(380-w,15,383-w,20);
	bar(350-w,50,353-w,55);
	bar(380-w,50,383-w,55);
	//wheels


	setfillstyle(SOLID_FILL,BLACK);
	bar(345-w,10,357-w,15);
	bar(375-w,10,387-w,15);
	bar(345-w,55,357-w,60);
	bar(375-w,55,387-w,60);

		//body
		setfillstyle(SLASH_FILL,LIGHTBLUE);
		bar(340-w,25,320-w,45);
		setfillstyle(LINE_FILL,GREEN);
		bar(340-w,20,390-w,50);
		 w=w+15;
		 delay(50);
   }
   delay(2000);
   setcolor(1);
   settextstyle(2,0,5);
   outtextxy(270,200,"Thats buggys friend");
   delay(200);
   outtextxy(270,240,"Now they can go home");
   delay(200);
   settextstyle(2,0,4);
   outtextxy(270,350,"press 4 to go to next lvl");
   outtextxy(270,370,"press esc to go to level screen");
  F:
    R=getch();
   if(R==27)
   lvlscrn();
   else if(R==52)
   level4();
   else
   goto F;
   }

	}
       }



       void level4()
      {

      int i=0,B,a=0,x,y,e,p,v1=0,v2=0,bo=0,Bo=0,BB=0,bb=0,jj=0,JJ=0;
      int I=0,Zz2=0,D=0,n=0,N=0,dd=0,oo=0,OO=0,g=0,G=0,ll=0,LL=0;
      int CC=0,cc=0,S=0,s=0,t=0,T=0,X=0,b=0,w=0;
     Q:
	    cleardevice();

	 setcolor(2);
      settextstyle(3,0,4);
      outtextxy(270,100,"LVL 4");
      outtextxy(270,150,"THE HAPPY ENDING");
      settextstyle(2,0,5);
      outtextxy(270,140,"Single player mode");
      settextstyle(2,0,4);
      outtextxy(350,370,"use 'a' and 'd' to move Buggy");
      outtextxy(250,300,"press 1 to select byggy");
      outtextxy(250,320,"press 2 to select buggy's friend");
      outtextxy(250,340,"press esc to exit");
       X=getch();
       if(X==27)
       lvlscrn();
	else if (X==49)
	{

	 while(1)
	{


		 cleardevice();


	setfillstyle(SOLID_FILL,WHITE);
	bar(50,-10,149 ,500);
	bar(451,-10,550,500);

	setfillstyle(SOLID_FILL,DARKGRAY);


	bar(150,-10,450,500);
	setfillstyle(SOLID_FILL,WHITE);
	bar(295,-1020+i,315,-1041+i);
	bar(295,-910+i,315,-1030+i);
	bar(295,-900+i,315,-920+i);
	bar(295,-890+i,315,-810+i);
	bar(295,-780+i,315,-700+i);
	bar(295,-670+i,315,-590+i);
	bar(295,-560+i,315,-480+i);
	bar(295,-450+i,315,-370+i);
	bar(295,-340+i,315,-260+i);
	bar(295,-230+i,315,-150+i);
	bar(295,-120+i,315,-60+i);
	bar(295,-30+i,315,50+i);
	bar(295,80+i,315,160+i);
	bar(295,190+i,315,270+i);
	bar(295,300+i,315,380+i);
	bar(295,410+i,315,490+i);
	bar(295,520+i,315,600+i);
	bar(295,630+i,315,710+i);
	bar(295,740+i,315,820+i);
	bar(295,850+i,315,930+i);
	i=i+25;



		//BUGGY
	//joints

	setfillstyle(SOLID_FILL,RED);
	bar(210+a,410,215+a,413);
	bar(210+a,440,215+a,443);
	bar(180+a,410,175+a,413);
	bar(180+a,440,175+a,443);
	//wheels


	setfillstyle(SOLID_FILL,BLACK);
	bar(e=175+a,405,e=170+a,417);
	bar(175+a,435,170+a,447);
	bar(215+a,405,220+a,417);
	bar(p=215+a,435,p=220+a,447);

		//body
		setfillstyle(SLASH_FILL,LIGHTBLUE);
		bar(185+a,v1=390,205+a,400);
		setfillstyle(LINE_FILL,BLUE);
		bar(bo=180+a,400,Bo=210+a,v2=450);


		 //obstacle 1
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);
	    bar3d(150,-10+BB,180,bb=0+BB,3,1);
	    bar3d(180,-10+BB,210,0+BB,3,1);
	    bar3d(210,-10+BB,240,0+BB,3,1);
	    bar3d(240,-10+BB,245,0+BB,3,1);
	    bar3d(150,-20+BB,165,-10+BB,3,1);
	    bar3d(165,-20+BB,195,-10+BB,3,1);
	    bar3d(195,-20+BB,215,-10+BB,3,1);
	    bar3d(215,-20+BB,245,-10+BB,3,1);
	    bar3d(150,-30+BB,180,-20+BB,3,1);
	    bar3d(180,-30+BB,210,-20+BB,3,1);
	    bar3d(210,-30+BB,240,-20+BB,3,1);
	    bar3d(240,-30+BB,245,-20+BB,3,1);
	    bar3d(150,-40+BB,165,-30+BB,3,1);
	    bar3d(165,-40+BB,195,-30+BB,3,1);
	    bar3d(195,-40+BB,215,-30+BB,3,1);
	    bar3d(215,-40+BB,245,-30+BB,3,1);
	    BB=BB+55;

		if(bb>=v1 && bo>=150 && Bo<=240 && bb<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
	    bar3d(320,-10+JJ,350,jj=0+JJ,3,1);
	    bar3d(350,-10+JJ,380,0+JJ,3,1);
	    bar3d(380,-10+JJ,410,0+JJ,3,1);
	    bar3d(410,-10+JJ,440,0+JJ,3,1);
	    bar3d(440,-10+JJ,445,0+JJ,3,1);
	    bar3d(320,-20+JJ,335,-10+JJ,3,1);
	    bar3d(335,-20+JJ,365,-10+JJ,3,1);
	    bar3d(365,-20+JJ,395,-10+JJ,3,1);
	    bar3d(395,-20+JJ,415,-10+JJ,3,1);
	    bar3d(415,-20+JJ,445,-10+JJ,3,1);
	    bar3d(320,-30+JJ,350,-20+JJ,3,1);
	    bar3d(350,-30+JJ,380,-20+JJ,3,1);
	    bar3d(380,-30+JJ,410,-20+JJ,3,1);
	    bar3d(410,-30+JJ,440,-20+JJ,3,1);
	    bar3d(440,-30+JJ,445,-20+JJ,3,1);
	    bar3d(320,-40+JJ,350,-30+JJ,3,1);
	    bar3d(350,-40+JJ,365,-30+JJ,3,1);
	    bar3d(365,-40+JJ,395,-30+JJ,3,1);
	    bar3d(395,-40+JJ,415,-30+JJ,3,1);
	    bar3d(415,-40+JJ,445,-30+JJ,3,1);

	    JJ=JJ+55;


		if(jj>=v1 && bo>=350 && Bo<=450 && jj<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

			// obstacle2
		 if(jj>400)
		 {
		  setlinestyle(SOLID_LINE,1,2);
		 setfillstyle(SLASH_FILL,6);
		 setcolor(6);

		 bar3d(300,10+I,360,Zz2=40+I,3,1);
		 I=I+80;


		if(bo>=300 && Bo<=360 && Zz2>=v1 && Zz2<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the blocks");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		}
		  if(Zz2>450)
		  {
			  setfillstyle(10,15);
		    line(365,-52+D,365,-45+D);
		    line(370,-52+D,370,-45+D);;
		    bar(350,-45+D,380,-25+D);
		    bar(380,-40+D,430,-10+D);
		    bar(390,-10+D,395,dd=0+D);
		    bar(415,-10+D,420,0+D);
		    line(430,-35+D,445,-5+D);
		    D=D+55;
		    if(bo>=350 && Bo<=430 && dd>=v1 && dd<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont smash the animal");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		  }
		  //obstacle 3
		   if(dd>=450)
		       {
		   setcolor(BLACK);
		    setfillstyle(SOLID_FILL,BLACK);
		    fillellipse(225,n=-10+N,70,30);
		    N=N+45;
		    if(bo>=155 && Bo<=295 && n>=v1 && n<=v2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall on th ditch");
			delay(2000);
			if(getch())
			lvlscrn();
		      }
		   }


			 //obstacle4
			  if(n>=450)
			  {
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);

	    bar3d(320,-10+OO,350,oo=0+OO,3,1);
	    bar3d(350,-10+OO,380,0+OO,3,1);
	    bar3d(380,-10+OO,410,0+OO,3,1);
	    bar3d(410,-10+OO,440,0+OO,3,1);
	    bar3d(440,-10+OO,445,0+OO,3,1);
	    bar3d(320,-20+OO,335,-10+OO,3,1);
	    bar3d(335,-20+OO,365,-10+OO,3,1);
	    bar3d(365,-20+OO,395,-10+OO,3,1);
	    bar3d(395,-20+OO,415,-10+OO,3,1);
	    bar3d(415,-20+OO,445,-10+OO,3,1);
	    bar3d(320,-30+OO,350,-20+OO,3,1);
	    bar3d(350,-30+OO,380,-20+OO,3,1);
	    bar3d(380,-30+OO,410,-20+OO,3,1);
	    bar3d(410,-30+OO,440,-20+OO,3,1);
	    bar3d(440,-30+OO,445,-20+OO,3,1);
	    bar3d(320,-40+OO,350,-30+OO,3,1);
	    bar3d(350,-40+OO,365,-30+OO,3,1);
	    bar3d(365,-40+OO,395,-30+OO,3,1);
	    bar3d(395,-40+OO,415,-30+OO,3,1);
	    bar3d(415,-40+OO,445,-30+OO,3,1);

	    OO=OO+45;

		if(oo>=v1 && bo>=350 && Bo<=450 && oo<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

	       }

	       //obstacle 5
	       if(oo>=400)
			{
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);

	    bar3d(270,-10+LL,300,ll=0+LL,3,1);
	    bar3d(300,-10+LL,330,0+LL,3,1);
	    bar3d(330,-10+LL,360,0+LL,3,1);
	    bar3d(360,-10+LL,390,0+LL,3,1);
	    bar3d(390,-10+LL,395,0+LL,3,1);
	    bar3d(270,-20+LL,385,-10+LL,3,1);
	    bar3d(285,-20+LL,315,-10+LL,3,1);
	    bar3d(315,-20+LL,345,-10+LL,3,1);
	    bar3d(345,-20+LL,365,-10+LL,3,1);
	    bar3d(365,-20+LL,395,-10+LL,3,1);
	    bar3d(270,-30+LL,350,-20+LL,3,1);
	    bar3d(300,-30+LL,330,-20+LL,3,1);
	    bar3d(330,-30+LL,360,-20+LL,3,1);
	    bar3d(360,-30+LL,390,-20+LL,3,1);
	    bar3d(390,-30+LL,395,-20+LL,3,1);
	    bar3d(270,-40+LL,300,-30+LL,3,1);
	    bar3d(300,-40+LL,315,-30+LL,3,1);
	    bar3d(315,-40+LL,345,-30+LL,3,1);
	    bar3d(345,-40+LL,365,-30+LL,3,1);
	    bar3d(365,-40+LL,395,-30+LL,3,1);

	    LL=LL+45;

		if(ll>=v1 && bo>=270 && Bo<=395 && ll<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

	       }

		//obstacle 6
		    if(ll>450)
		  {

		  setfillstyle(10,15);
		  setcolor(0);
		    line(375,-52+G,375,-45+G);
		    line(380,-52+G,380,-45+G);
		    bar(360,-45+G,390,-25+G);
		    bar(390,-40+G,440,-10+G);
		    bar(400,-10+G,405,g=0+G);
		    bar(425,-10+G,430,0+G);
		    line(440,-35+G,445,-5+G);
		    //2nd cattle
		    line(165,-52+G,165,-45+G);
		    line(155,-52+G,155,-45+G);
		    bar(150,-45+G,180,-25+G);
		    bar(180,-40+G,230,-10+G);
		    bar(190,-10+G,195,g=0+G);
		    bar(215,-10+G,220,0+G);
		    line(230,-35+G,235,-5+G);
		    G=G+45;
		    if((bo>=360 && Bo<=445 && g>=v1 && g<=v2) || (bo>=150 && Bo<=235 && g>=v1 && g<=v2))
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont smash the animal");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		  }



		  //obstacle 7

		  if(g>450)
		   {
		   setfillstyle(SOLID_FILL,BLACK);
		   fillellipse(250,cc=-10+CC,100,30);

		   CC=CC+45;
		   if(bo>=150 && Bo<=350 && cc>=v1 && cc<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall in the ditch");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

		    }

		   //obstacle 8
		   if (cc>=400)
		   {
		     setcolor(BROWN);
		    setfillstyle(4,BROWN);
		    bar3d(300,-10+S,450,s=5+S,0,3);
		    S=S+45;
		    if(bo>=300 && Bo<=450 && s>=v1 && s<=v2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont hit the block");
			 delay(2000);
			 if(getch())
			lvlscrn();
		      }
		     }



		     if(s>400)
		  {

		  setfillstyle(10,15);
		  setcolor(0);
		    line(225,-52+T,225,-45+T);
		    line(230,-52+T,230,-45+T);
		    bar(210,-45+T,240,-25+T);
		    bar(240,-40+T,290,-10+T);
		    bar(250,-10+T,255,t=0+T);
		    bar(275,-10+T,280,0+T);
		    line(290,-35+T,295,-5+T);
		    T=T+45;
		    if(bo>=190 && Bo<=275 && t>=v1 && t<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont smash the animal");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		  }


		  if(t>=500)
		  {
		  while(b<=500)
	{
	cleardevice();

       //BG
	setfillstyle(SOLID_FILL,WHITE);
	bar(50,-10,149 ,500);
	bar(451,-10,550,500);
	setfillstyle(SOLID_FILL,DARKGRAY);
	bar(150,-10,450,500);
	setfillstyle(SOLID_FILL,WHITE);
	bar(295,-30,315,50);
	bar(295,80,315,160);
	bar(295,190,315,270);
	bar(295,300,315,380);
	bar(295,410,315,490);
	bar(295,520,315,600);
	bar(295,630,315,710);
	bar(295,740,315,820);
	bar(295,850,315,930);
	//BUGGY
	//joints

	setfillstyle(SOLID_FILL,RED);
	bar(210,410-b,215,413-b);
	bar(210,440-b,215,443-b);
	bar(180,410-b,175,413-b);
	bar(180,440-b,175,443-b);
	//wheels


	setfillstyle(SOLID_FILL,BLACK);
	bar(175,405-b,170,417-b);
	bar(175,435-b,170,447-b);
	bar(215,405-b,220,417-b);
	bar(215,435-b,220,447-b);

		//body
		setfillstyle(SLASH_FILL,LIGHTBLUE);
		bar(185,390-b,205,400-b);
		setfillstyle(LINE_FILL,BLUE);
		bar(180,400-b,210,450-b);
   b=b+25;
   delay(100);
   if (b>450)
   {
   cleardevice();
   setcolor(12);
   settextstyle(3,0,1);
   outtextxy(150,200,"DEMO GAME COMPLETE");
   settextstyle(3,0,2);
   outtextxy(150,240,"CONGRATULATIONS");
   delay(2000);
   cleardevice();
   while(w<=360)
   {
   settextstyle(2,0,7);
   outtextxy(250,200-w,"sponsors");
   outtextxy(255,220-w,"Noone");
   outtextxy(250,300-w,"designs");
   outtextxy(255,320-w,"Everyone");
   outtextxy(250,400-w,"codes developers");
   outtextxy(255,420-w,"Pragun");
   outtextxy(255,440-w,"Ankit");
   outtextxy(250,500-w,"Company");
   outtextxy(245,520-w,"PA Games");
   w=w+40;
   delay(500);
   cleardevice();
	}
	settextstyle(3,0,5);
	outtextxy(250,250,"THE END..");
	delay(2000);
   exit(0);
     }
   }
 }



		if(e<150 || p>450)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont go out of the road");
			 delay(3000);
			lvlscrn();
			 }



	if(kbhit())
	  {
		    B=getch();
		if(B==97 || B==129)
		     {
			x=-20;

			a=a+x;
			delay(1);
		      }


		  if(B==100 || B==132)
		     {
			  x=20;
		    a=a+x;
		    delay(1);
		    }
		   if(B==27)
		     lvlscrn();



	      }

	      i=i+45;
	      delay(110);
	      if(i>=800)
	      i=0;



	}

}

else if(X==50)
{
while(1)
	{


		 cleardevice();


	setfillstyle(SOLID_FILL,WHITE);
	bar(50,-10,149 ,500);
	bar(451,-10,550,500);

	setfillstyle(SOLID_FILL,DARKGRAY);


	bar(150,-10,450,500);
	setfillstyle(SOLID_FILL,WHITE);
	bar(295,-1020+i,315,-1041+i);
	bar(295,-910+i,315,-1030+i);
	bar(295,-900+i,315,-920+i);
	bar(295,-890+i,315,-810+i);
	bar(295,-780+i,315,-700+i);
	bar(295,-670+i,315,-590+i);
	bar(295,-560+i,315,-480+i);
	bar(295,-450+i,315,-370+i);
	bar(295,-340+i,315,-260+i);
	bar(295,-230+i,315,-150+i);
	bar(295,-120+i,315,-60+i);
	bar(295,-30+i,315,50+i);
	bar(295,80+i,315,160+i);
	bar(295,190+i,315,270+i);
	bar(295,300+i,315,380+i);
	bar(295,410+i,315,490+i);
	bar(295,520+i,315,600+i);
	bar(295,630+i,315,710+i);
	bar(295,740+i,315,820+i);
	bar(295,850+i,315,930+i);
	i=i+25;



		//BUGGY 2
	//joints

	setfillstyle(SOLID_FILL,RED);
	bar(210+a,410,215+a,413);
	bar(210+a,440,215+a,443);
	bar(180+a,410,175+a,413);
	bar(180+a,440,175+a,443);
	//wheels


	setfillstyle(SOLID_FILL,BLACK);
	bar(e=175+a,405,e=170+a,417);
	bar(175+a,435,170+a,447);
	bar(215+a,405,220+a,417);
	bar(p=215+a,435,p=220+a,447);

		//body
		setfillstyle(SLASH_FILL,LIGHTBLUE);
		bar(185+a,v1=390,205+a,400);
		setfillstyle(LINE_FILL,GREEN);
		bar(bo=180+a,400,Bo=210+a,v2=450);


		 //obstacle 1
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);
	    bar3d(150,-10+BB,180,bb=0+BB,3,1);
	    bar3d(180,-10+BB,210,0+BB,3,1);
	    bar3d(210,-10+BB,240,0+BB,3,1);
	    bar3d(240,-10+BB,245,0+BB,3,1);
	    bar3d(150,-20+BB,165,-10+BB,3,1);
	    bar3d(165,-20+BB,195,-10+BB,3,1);
	    bar3d(195,-20+BB,215,-10+BB,3,1);
	    bar3d(215,-20+BB,245,-10+BB,3,1);
	    bar3d(150,-30+BB,180,-20+BB,3,1);
	    bar3d(180,-30+BB,210,-20+BB,3,1);
	    bar3d(210,-30+BB,240,-20+BB,3,1);
	    bar3d(240,-30+BB,245,-20+BB,3,1);
	    bar3d(150,-40+BB,165,-30+BB,3,1);
	    bar3d(165,-40+BB,195,-30+BB,3,1);
	    bar3d(195,-40+BB,215,-30+BB,3,1);
	    bar3d(215,-40+BB,245,-30+BB,3,1);
	    BB=BB+55;

		if(bb>=v1 && bo>=150 && Bo<=240 && bb<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
	    bar3d(320,-10+JJ,350,jj=0+JJ,3,1);
	    bar3d(350,-10+JJ,380,0+JJ,3,1);
	    bar3d(380,-10+JJ,410,0+JJ,3,1);
	    bar3d(410,-10+JJ,440,0+JJ,3,1);
	    bar3d(440,-10+JJ,445,0+JJ,3,1);
	    bar3d(320,-20+JJ,335,-10+JJ,3,1);
	    bar3d(335,-20+JJ,365,-10+JJ,3,1);
	    bar3d(365,-20+JJ,395,-10+JJ,3,1);
	    bar3d(395,-20+JJ,415,-10+JJ,3,1);
	    bar3d(415,-20+JJ,445,-10+JJ,3,1);
	    bar3d(320,-30+JJ,350,-20+JJ,3,1);
	    bar3d(350,-30+JJ,380,-20+JJ,3,1);
	    bar3d(380,-30+JJ,410,-20+JJ,3,1);
	    bar3d(410,-30+JJ,440,-20+JJ,3,1);
	    bar3d(440,-30+JJ,445,-20+JJ,3,1);
	    bar3d(320,-40+JJ,350,-30+JJ,3,1);
	    bar3d(350,-40+JJ,365,-30+JJ,3,1);
	    bar3d(365,-40+JJ,395,-30+JJ,3,1);
	    bar3d(395,-40+JJ,415,-30+JJ,3,1);
	    bar3d(415,-40+JJ,445,-30+JJ,3,1);

	    JJ=JJ+55;


		if(jj>=v1 && bo>=350 && Bo<=450 && jj<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

			// obstacle2
		 if(jj>400)
		 {
		  setlinestyle(SOLID_LINE,1,2);
		 setfillstyle(SLASH_FILL,6);
		 setcolor(6);

		 bar3d(300,10+I,360,Zz2=40+I,3,1);
		 I=I+80;


		if(bo>=300 && Bo<=360 && Zz2>=v1 && Zz2<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the blocks");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		}
		  if(Zz2>450)
		  {
			  setfillstyle(10,15);
		    line(365,-52+D,365,-45+D);
		    line(370,-52+D,370,-45+D);;
		    bar(350,-45+D,380,-25+D);
		    bar(380,-40+D,430,-10+D);
		    bar(390,-10+D,395,dd=0+D);
		    bar(415,-10+D,420,0+D);
		    line(430,-35+D,445,-5+D);
		    D=D+55;
		    if(bo>=350 && Bo<=430 && dd>=v1 && dd<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont smash the animal");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		  }
		  //obstacle 3
		   if(dd>=450)
		       {
		   setcolor(BLACK);
		    setfillstyle(SOLID_FILL,BLACK);
		    fillellipse(225,n=-10+N,70,30);
		    N=N+45;
		    if(bo>=155 && Bo<=295 && n>=v1 && n<=v2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall on th ditch");
			delay(2000);
			if(getch())
			lvlscrn();
		      }
		   }


			 //obstacle4
			  if(n>=450)
			  {
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);

	    bar3d(320,-10+OO,350,oo=0+OO,3,1);
	    bar3d(350,-10+OO,380,0+OO,3,1);
	    bar3d(380,-10+OO,410,0+OO,3,1);
	    bar3d(410,-10+OO,440,0+OO,3,1);
	    bar3d(440,-10+OO,445,0+OO,3,1);
	    bar3d(320,-20+OO,335,-10+OO,3,1);
	    bar3d(335,-20+OO,365,-10+OO,3,1);
	    bar3d(365,-20+OO,395,-10+OO,3,1);
	    bar3d(395,-20+OO,415,-10+OO,3,1);
	    bar3d(415,-20+OO,445,-10+OO,3,1);
	    bar3d(320,-30+OO,350,-20+OO,3,1);
	    bar3d(350,-30+OO,380,-20+OO,3,1);
	    bar3d(380,-30+OO,410,-20+OO,3,1);
	    bar3d(410,-30+OO,440,-20+OO,3,1);
	    bar3d(440,-30+OO,445,-20+OO,3,1);
	    bar3d(320,-40+OO,350,-30+OO,3,1);
	    bar3d(350,-40+OO,365,-30+OO,3,1);
	    bar3d(365,-40+OO,395,-30+OO,3,1);
	    bar3d(395,-40+OO,415,-30+OO,3,1);
	    bar3d(415,-40+OO,445,-30+OO,3,1);

	    OO=OO+45;

		if(oo>=v1 && bo>=350 && Bo<=450 && oo<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

	       }

	       //obstacle 5
	       if(oo>=400)
			{
	    setcolor(15);
	    setfillstyle(SOLID_FILL,12);

	    bar3d(270,-10+LL,300,ll=0+LL,3,1);
	    bar3d(300,-10+LL,330,0+LL,3,1);
	    bar3d(330,-10+LL,360,0+LL,3,1);
	    bar3d(360,-10+LL,390,0+LL,3,1);
	    bar3d(390,-10+LL,395,0+LL,3,1);
	    bar3d(270,-20+LL,385,-10+LL,3,1);
	    bar3d(285,-20+LL,315,-10+LL,3,1);
	    bar3d(315,-20+LL,345,-10+LL,3,1);
	    bar3d(345,-20+LL,365,-10+LL,3,1);
	    bar3d(365,-20+LL,395,-10+LL,3,1);
	    bar3d(270,-30+LL,350,-20+LL,3,1);
	    bar3d(300,-30+LL,330,-20+LL,3,1);
	    bar3d(330,-30+LL,360,-20+LL,3,1);
	    bar3d(360,-30+LL,390,-20+LL,3,1);
	    bar3d(390,-30+LL,395,-20+LL,3,1);
	    bar3d(270,-40+LL,300,-30+LL,3,1);
	    bar3d(300,-40+LL,315,-30+LL,3,1);
	    bar3d(315,-40+LL,345,-30+LL,3,1);
	    bar3d(345,-40+LL,365,-30+LL,3,1);
	    bar3d(365,-40+LL,395,-30+LL,3,1);

	    LL=LL+45;

		if(ll>=v1 && bo>=270 && Bo<=395 && ll<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont touch the wall..");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

	       }

		//obstacle 6
		    if(ll>450)
		  {

		  setfillstyle(10,15);
		  setcolor(0);
		    line(375,-52+G,375,-45+G);
		    line(380,-52+G,380,-45+G);
		    bar(360,-45+G,390,-25+G);
		    bar(390,-40+G,440,-10+G);
		    bar(400,-10+G,405,g=0+G);
		    bar(425,-10+G,430,0+G);
		    line(440,-35+G,445,-5+G);
		    //2nd cattle
		    line(165,-52+G,165,-45+G);
		    line(155,-52+G,155,-45+G);
		    bar(150,-45+G,180,-25+G);
		    bar(180,-40+G,230,-10+G);
		    bar(190,-10+G,195,g=0+G);
		    bar(215,-10+G,220,0+G);
		    line(230,-35+G,235,-5+G);
		    G=G+45;
		    if((bo>=360 && Bo<=445 && g>=v1 && g<=v2) || (bo>=150 && Bo<=235 && g>=v1 && g<=v2))
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont smash the animal");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		  }



		  //obstacle 7

		  if(g>450)
		   {
		   setfillstyle(SOLID_FILL,BLACK);
		   fillellipse(250,cc=-10+CC,100,30);

		   CC=CC+45;
		   if(bo>=150 && Bo<=350 && cc>=v1 && cc<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont fall in the ditch");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }

		    }

		   //obstacle 8
		   if (cc>=400)
		   {
		     setcolor(BROWN);
		    setfillstyle(4,BROWN);
		    bar3d(300,-10+S,450,s=5+S,0,3);
		    S=S+45;
		    if(bo>=300 && Bo<=450 && s>=v1 && s<=v2)
		      {
		       cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont hit the block");
			 delay(2000);
			 if(getch())
			lvlscrn();
		      }
		     }



		     if(s>400)
		  {

		  setfillstyle(10,15);
		  setcolor(0);
		    line(225,-52+T,225,-45+T);
		    line(230,-52+T,230,-45+T);
		    bar(210,-45+T,240,-25+T);
		    bar(240,-40+T,290,-10+T);
		    bar(250,-10+T,255,t=0+T);
		    bar(275,-10+T,280,0+T);
		    line(290,-35+T,295,-5+T);
		    T=T+45;
		    if(bo>=190 && Bo<=275 && t>=v1 && t<=v2)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont smash the animal");
			 delay(2000);
			 if(getch())
			 lvlscrn();

			 }
		  }

		     if(t>=500)
		  {
		  while(b<=500)
	{
	cleardevice();

       //BG
	setfillstyle(SOLID_FILL,WHITE);
	bar(50,-10,149 ,500);
	bar(451,-10,550,500);
	setfillstyle(SOLID_FILL,DARKGRAY);
	bar(150,-10,450,500);
	setfillstyle(SOLID_FILL,WHITE);
	bar(295,-30,315,50);
	bar(295,80,315,160);
	bar(295,190,315,270);
	bar(295,300,315,380);
	bar(295,410,315,490);
	bar(295,520,315,600);
	bar(295,630,315,710);
	bar(295,740,315,820);
	bar(295,850,315,930);
	//BUGGY
	//joints

	setfillstyle(SOLID_FILL,RED);
	bar(210,410-b,215,413-b);
	bar(210,440-b,215,443-b);
	bar(180,410-b,175,413-b);
	bar(180,440-b,175,443-b);
	//wheels


	setfillstyle(SOLID_FILL,BLACK);
	bar(175,405-b,170,417-b);
	bar(175,435-b,170,447-b);
	bar(215,405-b,220,417-b);
	bar(215,435-b,220,447-b);

		//body
		setfillstyle(SLASH_FILL,LIGHTBLUE);
		bar(185,390-b,205,400-b);
		setfillstyle(LINE_FILL,GREEN);
		bar(180,400-b,210,450-b);
   b=b+25;
   delay(100);
   if (b>450)
   {
   cleardevice();
   setcolor(12);
   settextstyle(3,0,1);
   outtextxy(150,200,"DEMO GAME COMPLETE");
   settextstyle(3,0,2);
   outtextxy(150,240,"CONGRATULATIONS");
   delay(2000);
   cleardevice();
   while(w<=360)
   {
   settextstyle(2,0,7);
   outtextxy(250,200-w,"sponsors");
   outtextxy(255,220-w,"Noone");
   outtextxy(250,300-w,"designs");
   outtextxy(255,320-w,"Everyone");
   outtextxy(250,400-w,"codes developers");
   outtextxy(255,420-w,"Pragun");
   outtextxy(255,440-w,"Ankit");
   outtextxy(250,500-w,"Company");
   outtextxy(245,520-w,"PA Games");
   w=w+40;
   delay(500);
   cleardevice();
	}
	settextstyle(3,0,5);
	outtextxy(250,250,"THE END..");
	delay(2000);
   exit(0);
     }
   }
 }




		if(e<150 || p>450)
			{
			 cleardevice();
			 setcolor(10);
			 settextstyle(3,0,4);
			 outtextxy(250,200,"Buggy is dead!!");
			 settextstyle(2,0,5);
			 outtextxy(300,400,"dont go out of the road");
			 delay(3000);
			lvlscrn();
			 }



	if(kbhit())
	  {
		    B=getch();
		if(B==97 || B==129)
		     {
			x=-20;

			a=a+x;
			delay(1);
		      }


		  if(B==100 || B==132)
		     {
			  x=20;
		    a=a+x;
		    delay(1);
		    }
		   if(B==27)
		     lvlscrn();



	      }

	      i=i+45;
	      delay(110);
	      if(i>=800)
	      i=0;



	}
}

else
{
  cleardevice();
  settextstyle(3,0,2);
  setcolor(2);
  outtextxy(250,250,"there is no such option .. try again");
  delay(2000);
cleardevice();
  goto Q;
  }
       }


