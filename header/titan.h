	#ifndef TITAN_H
#define TITAN_H
#include "class.h"

#include "object.h"
int ar=0;

void finish_him(){
	unsigned int c=0;
if(!giant.empty()){
for(c=0;c<=giant.size();c++)
{
if(giant[c].life<=0){
	if(destroy.empty()){
destroy.push_back(Destroy());
}
}
}

if(destroy[0].reload){
destroy[0].animate(&giant[0].ins.x,&giant[0].ins.y,4);

}
else{
for(unsigned int i=0;i<=giant.size();i++)
{
	if(giant[i].life<=0){
	giant.erase(giant.begin()+i,giant.begin()+i+1);
		SDL_DestroyTexture(giant[0].texture);
	SDL_DestroyTexture(destroy[0].texture);
	destroy.pop_back();}
}
}

}else if(!destroy.empty()){
	destroy.pop_back();}
}


bool collision_giant(){
//with zombie
if(!giant.empty()){

if(giant[ar].ins.x+giant[ar].dim.w>=me[0].ins.x && giant[ar].ins.x+giant[ar].dim.w<=me[0].ins.x+me[0].dim.w){
if(giant[ar].ins.y+giant[ar].dim.h>=me[0].ins.y && giant[ar].ins.y+giant[ar].dim.h<=me[0].ins.y+me[0].dim.h){




		return 1;
}
}
if(giant[ar].ins.x>=me[0].ins.x && giant[ar].ins.x<=me[0].ins.x+me[0].dim.w){
if(giant[ar].ins.y>=me[0].ins.y && giant[ar].ins.y<=me[0].ins.y+me[0].dim.h){



		return 1;
}
}
if(giant[ar].ins.x+giant[ar].dim.w>=me[0].ins.x && giant[ar].ins.x+giant[ar].dim.w<=me[0].ins.x+me[0].dim.w){
if(giant[ar].ins.y>=me[0].ins.y && giant[ar].ins.y<=me[0].ins.y+me[0].dim.h){


		return 1;
}
}
if(giant[ar].ins.x>=me[0].ins.x && giant[ar].ins.x<=me[0].ins.x+me[0].dim.w){
if(giant[ar].ins.y+giant[ar].dim.h>=me[0].ins.y && giant[ar].ins.y+giant[ar].dim.h<=me[0].ins.y+me[0].dim.h){


		return 1;
	}}



}
return 0;
}

void attackManager_titan(int dammage , int *ptr){
	*ptr-=dammage;}

void Destroy::animate(int *ptrX,int *ptrY,int clip){
		int x=0;int y=0;
	if(!init_move &&reload>=1){
finish=false;
init_sprite(685,945,45,35);
init_move=true;}

					switch(destroy[0].inc){
		case 0:dim.x=685;dim.y=945;dim.w=45;dim.h=35;break;
		case 1:dim.x=735;dim.y=930;dim.w=70;dim.h=65;break;
		case 2:dim.x=820;dim.y=915;dim.w=95;dim.h=95;break;
		case 3:dim.x=930;dim.y=905;dim.w=115;dim.h=125;break;
		case 4:dim.x=1060;dim.y=900;dim.w=120;dim.h=135;break;
}
	srand(time(NULL));
	x=rand()% 4+0;
	srand(time(NULL));
	y=rand()% 4+0;

	ins.w=dim.w*1.2;
	ins.h=dim.h*1.2;
	ins.x=*ptrX+x*10;
ins.y=*ptrY+y*40;

if(inc>=clip){
init_move=false;
finish=true;
inc=0;
reload--;
}
inc++;
}


	//ENEMY ENVIRIMENT SPRIT !!
		void Titan::stance(int clip){
			if(!init_move){
		finish=false;
		init_sprite(490,140,100,225);
		init_move=true;
				inc=0;
}
		switch(inc){
		case 0:dim.x=490;dim.w=100;break;
		case 1:dim.x=610;dim.w=100;break;
		case 2:dim.x=725;dim.w=110;break;
		case 3:dim.x=850;dim.w=100;break;
	  case 4:dim.x=970;dim.w=110;break;
		case 5:dim.x=1100;dim.w=110;break;
		case 6:dim.x=1230;dim.w=120;break;
}

inc++;
if(inc>=clip){
init_move=false;
finish=true;
stand=true;
inc=0;
}
	ins.w=dim.w;
	ins.h=dim.h;

}






void Titan::death(int clip){
if(!init_move){
bool_shake=false;
bool_punch=false;
finish=false;
finish=false;
init_sprite(640,1040,100,220);
init_move=true;}
				switch(inc){
		case 0:dim.x=640;dim.w=100;break;
		case 1:dim.x=755;dim.w=100;break;
		case 2:dim.x=870;dim.w=100;break;
	    case 3:dim.x=990;dim.w=100;break;
		case 4:dim.x=1105;dim.w=100;break;

}

 if(inc>=clip){

init_move=false;
finish=true;
stand=true;
inc=0;
}
inc++;
	ins.w=dim.w;
	ins.h=dim.h;
}



			void Titan::guard(){
		init_sprite(1220,680,180,210);
finish=true;
ins.w=dim.w;
ins.h=dim.h;
	}

void Titan::punch(int clip){
if(!init_move){
finish=false;
init_sprite(315,665,125,220);
init_move=true;
bool_punch=true;
}
				switch(inc){
		case 0:dim.x=315;dim.w=125;break;
		case 1:dim.x=447;dim.w=163;break;
		case 2:dim.x=625;dim.w=135;break;
	    case 3:dim.x=775;dim.w=225;break;
		case 4:dim.x=1015;dim.w=190;break;
		case 5:dim.x=1222;dim.w=162;break;
				case 6:dim.x=1400;dim.w=130;break;

}
 if(inc>=clip){

init_move=false;
finish=true;
stand=true;
inc=0;
bool_punch=false;

}
inc++;
ins.w=dim.w;
ins.h=dim.h;
}


void Titan::shake(int clip){
if(!init_move){
	bool_shake=true;
finish=false;
init_sprite(0,425,125,225);
init_move=true;}
				switch(inc){
		case 0:dim.x=0;dim.y=425;dim.w=128;dim.h=225;break;
		case 1:dim.x=145;dim.y=390;dim.w=120;dim.h=260;break;
		case 2:dim.x=284;dim.y=385;dim.w=141;dim.h=265;break;
	    case 3:dim.x=444;dim.y=415;dim.w=191;dim.h=235;break;
		case 4:dim.x=650;dim.y=490;dim.w=250;dim.h=160;break;
		case 5:dim.x=915;dim.y=525;dim.w=245;dim.h=125;break;
		case 6:dim.x=1180;dim.y=500;dim.w=225;dim.h=150;break;
		case 7:dim.x=1425;dim.y=455;dim.w=170;dim.h=195;break;
		case 8:dim.x=1610;dim.y=445;dim.w=125;dim.h=205;break;
				case 9:dim.x=1750;dim.y=435;dim.w=100;dim.h=215;break;

}
ins.w=dim.w;
	ins.h=dim.h;
		ins.y=SCREEN_HEIGHT-ins.h;
 if(inc>=clip){

	init_move=false;
finish=true;
stand=true;
bool_shake=false;
inc=0;
}
inc++;

}

void Titan::smartGiant(int hardness){
	std::cout<<"giant"<<life;

if(life<=0){
	death(3);
finish_him();

}
else{
	if(ins.x>me[0].ins.x){
		left=false;step*=-1;
	}else if (ins.x<=me[0].ins.x)
	{left=true;step=abs(step);}


	srand(time(NULL));
	int x=0;
	x=rand()% hardness+1;
	if(x<=2){
		shake(8);
	ins.x+=step;

	}
	else if(x>2 && x<=5 && finish ){

		if(	me[0].ins.x<ins.x && me[0].ins.x+me[0].ins.w>=ins.x){

			punch(6);

			//attackManager(40,&me[0].life);
		}
	}
	else if(finish ){
		if(!bool_punch  && !bool_shake ){
//	attackManager(20,&me[0].life);
stance(5);
}
}
}
if(bool_punch && !finish){
	punch(6);
	if(collision_giant()){
	attackManager_titan(6,&me[0].life);
}
}
if(bool_shake && !finish){
	shake(8);
	if(collision_giant()){
	attackManager_titan(8,&me[0].life);
}

}

ins.y=SCREEN_HEIGHT-ins.h;

if(collision_giant()){
  if(me[0].punch || me[0].kick)
  {
    life-=10;
std::cout<<"hurted";
  }
}
}
#endif
