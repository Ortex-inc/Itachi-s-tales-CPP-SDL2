
#ifndef HEROMOVE_H
#define HEROMOVE_H

#include "object.h"
bool proces=false;
bool proc=false;
	bool col=false;
	bool finished =true;
int u=0;
int rr=0;



	void jump(int clip){

if(me[0].dim.x+me[0].dim.w<(me[0].dim.w*clip)+483){
if(me[0].inc>0 &&me[0].inc<clip){
me[0].dim.x+=me[0].dim.w;
}
}
else if(me[0].inc>=clip){
	me[0].finish=true;
me[0].up=false;me[0].dim.x=483;me[0].inc=0;}
me[0].inc++;
if(me[0].dim.x==483){me[0].ins.y-=10;std::cout<<"clip0";}
if(me[0].dim.x==me[0].dim.w+483){me[0].ins.y-=10;std::cout<<"clip1";}
if(me[0].dim.x==me[0].dim.w*2+483){me[0].ins.y+=30;std::cout<<"clip2";}
}


void stand(int clip){
	switch(me[0].inc){
		case 0:me[0].dim.x=15 ;  me[0].dim.w=47 ;me[0].dim.h=120 ;  break;
		case 1:me[0].dim.x=81 ;  me[0].dim.w=49 ; me[0].dim.h=120 ; break;
		case 2:me[0].dim.x=141 ;  me[0].dim.w=47 ; me[0].dim.h=120 ; break;
		case 3:me[0].dim.x=201 ;  me[0].dim.w=51 ; me[0].dim.h=120 ; break;
		case 4:me[0].dim.x=261 ;  me[0].dim.w=47 ;me[0].dim.h=120 ;  break;
		case 5:me[0].dim.x=316 ;  me[0].dim.w=53 ; me[0].dim.h=120 ; break;
		case 6:me[0].dim.x=378 ;  me[0].dim.w=51 ; me[0].dim.h=120 ; break;
	}


 if(me[0].inc>=clip){me[0].inc=0;}
else{me[0].stand=true;}
me[0].inc++;
me[0].ins.w=me[0].dim.w;
me[0].ins.h=me[0].dim.h;
}




void run(int clip){
	switch(me[0].inc){

		case 0:me[0].dim.x=15 ;  me[0].dim.w=90 ;me[0].dim.h=90 ;  break;
		case 1:me[0].dim.x=111 ;  me[0].dim.w=89 ; me[0].dim.h=90 ; break;
		case 2:me[0].dim.x=207 ;  me[0].dim.w=92 ; me[0].dim.h=90 ; break;
		case 3:me[0].dim.x=308 ;  me[0].dim.w=89 ; me[0].dim.h=90 ; break;
		case 4:me[0].dim.x=402 ;  me[0].dim.w=100 ;me[0].dim.h=90 ;  break;
		case 5:me[0].dim.x=507 ;  me[0].dim.w=93 ; me[0].dim.h=90 ; break;
	}
 if(me[0].inc>=clip){me[0].inc=0;me[0].up=false;}
else{me[0].init_move=false;}
me[0].inc++;
me[0].ins.w=me[0].dim.w;
me[0].ins.h=me[0].dim.h;
}













void dash(int clip){
	switch(me[0].inc)
{
case 0:me[0].dim.x=16 ;  me[0].dim.w=67 ;me[0].dim.y=402 ;me[0].dim.h=122 ;  break;
case 1:me[0].dim.x=91 ;  me[0].dim.w=46 ;me[0].dim.y=402 ;me[0].dim.h=122 ;  break;
case 2:me[0].dim.x=145 ;  me[0].dim.w=113 ;me[0].dim.y=444 ;me[0].dim.h=80 ;  break;
}
if(me[0].inc>=clip){me[0].dash=false;me[0].inc=0;me[0].stand=true;
	me[0].finish=true;}else{me[0].stand=false;me[0].dash=true;
		me[0].finish=false;}
me[0].ins.w=me[0].dim.w;
me[0].ins.h=me[0].dim.h;



me[0].inc++;
}


void dammage (int clip){
	me[0].finish_move=false;
	switch(me[0].inc)
	{
	case 0:me[0].dim.x=45 ;  me[0].dim.w=56 ;me[0].dim.y=966 ;me[0].dim.h=113 ;  break;
	case 1:me[0].dim.x=109 ;  me[0].dim.w=64 ;me[0].dim.y=970 ;me[0].dim.h=109 ;  break;
	case 2:me[0].dim.x=180 ;  me[0].dim.w=68 ;me[0].dim.y=987 ;me[0].dim.h=92 ;  break;
	}
if(me[0].inc>=clip){me[0].inc=0;
me[0].finish_move=true;
me[0].stand=true;
me[0].init_move=true;

}
me[0].ins.w=me[0].dim.w;
me[0].ins.h=me[0].dim.h;
me[0].inc++;
}









void gard(int level){
me[0].init_sprite(20,600,80,120);
me[0].ins.w=me[0].dim.w;
me[0].ins.h=me[0].dim.h;
	}



void attack(int clip){

if(me[0].dim.x+me[0].dim.w<(me[0].dim.w*clip)){
	if(me[0].inc>=1 &&me[0].inc<clip){me[0].dim.x+=me[0].dim.w;}
	else if(me[0].inc>=clip){me[0].inc=0;}
}
else{me[0].dim.x=0;}
me[0].inc++;
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////END HERO MOVES


	void winner(int clip){

if(me[0].dim.x+me[0].dim.w<(me[0].dim.w*clip)){
	if(me[0].inc>=1 &&me[0].inc<clip){me[0].dim.x+=me[0].dim.w;}
	if(me[0].dim.x==165){me[0].dim.w=40;me[0].ins.w=40;}
	else if(me[0].inc>=clip){me[0].inc=0;}
}
else{me[0].dim.x=45;me[0].dim.w=60;me[0].ins.w=65;}
me[0].inc++;
	}
	void crr(){
	if(crow.empty()){

		crow.push_back(Special_attack());
	crow[0].position(me[0].ins.x+20,me[0].ins.y);
	crow[0].init_sprite(380,2070,115,100);
		}
if(crow[0].ins.y<=SCREEN_HEIGHT){
crow[0].print();crow[0].clean();crow[0].ins.x+=30;}

if(crow[0].inc>=3){crow[0].dim.x=380;crow[0].dim.w=115;crow[0].inc=0;}
if(crow[0].inc==2){crow[0].dim.w=135;}
crow[0].animate(3);
//~

	}

	void punch(int clip){

me[0].init_move=false;
if(me[0].inc==0){me[0].dim.w=100;me[0].dim.x=0;}
if(me[0].inc==1){me[0].dim.w=82;me[0].dim.x=100;}
if(me[0].inc==2){me[0].dim.w=133;me[0].dim.x=182;me[0].ins.x-=20;}
if(me[0].inc==3){me[0].dim.w=128;me[0].dim.x=314;}
if(me[0].inc==4){me[0].dim.w=65;me[0].dim.x=444;me[0].ins.x+=20;}

if(me[0].inc>clip){me[0].finish_move=true;me[0].stand=true;me[0].finish=true;
	me[0].punch=false;
me[0].init_sprite(0,3990,100,125);me[0].inc=0;
}
me[0].ins.w=me[0].dim.w;
me[0].ins.h=me[0].dim.h;

me[0].inc++;
		}


void kick(int clip){
			me[0].init_move=false;


if(me[0].inc==0){me[0].dim.w=70;me[0].dim.x=15;}
if(me[0].inc==1){me[0].dim.w=120;me[0].dim.x=85;}
if(me[0].inc==2){me[0].dim.w=120;me[0].dim.x=207;}
if(me[0].inc==3){me[0].dim.w=120;me[0].dim.x=325;}
if(me[0].inc==4){me[0].dim.w=65;me[0].dim.x=435;}

if(me[0].inc>clip){me[0].finish_move=true;me[0].stand=true;me[0].finish=true;
	me[0].kick=false;
me[0].init_sprite(15,4125,60,125);
me[0].inc=0;
}
me[0].ins.w=me[0].dim.w;
me[0].ins.h=me[0].dim.h;

me[0].inc++;
}

void anim(){
if(!me[0].finish){
punch(3);
}
}


#endif
