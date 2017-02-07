#ifndef CORE_H
#define CORE_H
#include "object.h"
#include "titan.h"

void main_core(){
	start=SDL_GetTicks();
	input();
	game[0].stat();
if(!game[0].playing){menu_page();SDL_Delay(80);}
else{
	game[0].pause();
input();
generate(6);
if(!enemy.empty()){
logic();
}
//

control();
camera[0].holdChar();

if(!enemy.empty()){
	for(unsigned int x=0;x<enemy.size();x++){
enemy[x].oriantation();
enemy[x].intelArt(5);
enemy[x].handle_logic();
}
}

voidManager();
draw();
touchPad();

if(!enemy.empty()){if(!me[0].attacked){collision_enemy();}}
if(!me[0].attacked &&me[0].stand){
	}
	me[0].ins.y=SCREEN_HEIGHT-me[0].dim.h;

//punch_ennemy(3);
//stance_ennemy(3);
//lose_ennemy(3);
//guard_ennemy();
//stance_ennemy(4);

if(!giant.empty()){giant[0].smartGiant(7);}

//~
		if(!right_pressed&&!left_pressed&&!up_pressed&&!down_pressed){
			if(!a_pressed&&!b_pressed )
{
	if(!me[0].dash){
	me[0].ins.y=SCREEN_HEIGHT-me[0].dim.h;
	if(me[0].finish){
		if(me[0].stand){
		me[0].init_sprite(15,90,47,120);
		me[0].stand=false;}
			stand(7);
		me[0].init_move=true;
}
}
}
	}






}
cursor_handle();
}
#endif
