#ifndef LOGIC_H
#define LOGIC_H

int arr=0;


bool collision_enemy(){
//with zombie
if(!enemy.empty()){

if(enemy[arr].ins.x+enemy[arr].dim.w>=me[0].ins.x && enemy[arr].ins.x+enemy[arr].dim.w<=me[0].ins.x+me[0].dim.w){
if(enemy[arr].ins.y+enemy[arr].dim.h>=me[0].ins.y && enemy[arr].ins.y+enemy[arr].dim.h<=me[0].ins.y+me[0].dim.h){




		return 1;
}
}
if(enemy[arr].ins.x>=me[0].ins.x && enemy[arr].ins.x<=me[0].ins.x+me[0].dim.w){
if(enemy[arr].ins.y>=me[0].ins.y && enemy[arr].ins.y<=me[0].ins.y+me[0].dim.h){



		return 1;
}
}
if(enemy[arr].ins.x+enemy[arr].dim.w>=me[0].ins.x && enemy[arr].ins.x+enemy[arr].dim.w<=me[0].ins.x+me[0].dim.w){
if(enemy[arr].ins.y>=me[0].ins.y && enemy[arr].ins.y<=me[0].ins.y+me[0].dim.h){


		return 1;
}
}
if(enemy[arr].ins.x>=me[0].ins.x && enemy[arr].ins.x<=me[0].ins.x+me[0].dim.w){
if(enemy[arr].ins.y+enemy[arr].dim.h>=me[0].ins.y && enemy[arr].ins.y+enemy[arr].dim.h<=me[0].ins.y+me[0].dim.h){


		return 1;
	}}



}
return 0;
}
//////////////////////::



void logic(){
	//if(!me[0].attacked){me[0].ins.y=SCREEN_HEIGHT-me[0].dim.h;}

	if (me[0].ins.x+me[0].ins.w>=SCREEN_WIDTH){me[0].ins.x=SCREEN_WIDTH-me[0].ins.w-15;}
	if (me[0].ins.y+me[0].ins.h>SCREEN_HEIGHT){me[0].ins.y-=me[0].ins.h;}
	//
	if (me[0].ins.x<-10){me[0].ins.x=0;}
	if (me[0].ins.y<-10){me[0].ins.y=0;}


//if(collision() && me[0].attacked){attackManager(10,&me[0].life);}


}

#endif
