

#ifndef FUNCTION_H
#define FUNCTION_H

#include <SDL2/SDL.h>
#include <vector>

#include <ctime>
#include "screen.h"
#include "meMove.h"
#include "object.h"

#include "enemy.h"



void Camera::holdChar(){
if(right_pressed){
if(back.surface->w>=map[0].backDim.x+map[0].backDim.w){
if (me[0].ins.x+me[0].dim.w>=SCREEN_WIDTH/2){
map[0].forwardDim.x+=me[0].step;map[0].backDim.x+=me[0].step;
}
}
}
if (me[0].ins.x<=0+(me[0].dim.w*2)){
if(left_pressed){
map[0].forwardDim.x+=me[0].step;map[0].backDim.x+=me[0].step;
if(map[0].forwardDim.x<0){map[0].forwardDim.x=0;}
if(map[0].backDim.x<0){map[0].backDim.x=0;}
}
}

map[0].print();
}
void cursor_handle(){
	if(!cr.empty()){
if(cr[0].ins.x<=SCREEN_WIDTH || cr[0].ins.y<=SCREEN_HEIGHT){
cr[0].position(hvX,hvY);
//cr[0].animate();
cr[0].print();
}

}
}


void handle_attack(){
if(!me[0].finish){
	me[0].stand=false;
dammage(3);
}
}





int generate(int max){
int x=0;

if(	mission[0].max<max){
	if(mission[0].max>=1){
	max=mission[0].max;

	giant.push_back(Titan("Titan",100,100,1,false));

	      giant[0].init_sprite(490,140,100,225);

	giant[0].position(270,SCREEN_WIDTH-giant[0].ins.h);
}
}
if(enemy.empty()){
srand(time(NULL));
	x=rand()% max+1;
	mission[0].max-=x;
	for( int a=0;a<=x;a++){
std::cout<<"enemy added !"<<std::endl;
	enemy.push_back(Enemy("Zombie",100,100,5,true));
enemy[a].init_sprite(17,(en.surface->h/8)*2,26,56);
	enemy[a].position(90*x+a*20,SCREEN_HEIGHT-enemy[a].ins.h);
//	enemy[a].life=0;
}
}

return 	mission[0].max-x;
}


int loadTitan(){
//if(generate(5)){}

return 0;
}
void loadBoss(){
if( loadTitan() ){}

}
#endif
