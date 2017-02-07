#ifndef ENEMY_H
#define ENEMY_H
#include <ctime>
#include "tobi.h"
#include "titan.h"

#include "class.h"

#include "logic.h"
#include "object.h"


void handle(){
	  if(camera[0].old_x!=map[0].backDim.x){
	  camera[0].decalage=-camera[0].old_x+map[0].backDim.x;
    for(unsigned int x=0; x<=enemy.size();x++){
	  enemy[x].ins.x-=camera[0].decalage;
  }
	for(unsigned int x=0; x<=giant.size();x++){
	giant[x].ins.x-=camera[0].decalage;
}
    camera[0].old_x=map[0].backDim.x;
}
}
void voidManager(){
  if(!enemy.empty()){
  for(unsigned int x;x<=enemy.size();x++){
    std::cout<<enemy[x].life<<std::endl;
  if(enemy[x].life<=0){
  std::cout<<"Death ! Go to HELL"<<x<<std::endl;
enemy.erase(enemy.begin()+x,enemy.begin()+x+1);}
  }
}
}
    void attackManager(int dammage , int *ptr){
    	*ptr-=dammage;}


void natural(){
if(me[0].attacked && me[0].gard){
	if(enemy[0].dammage<10){enemy[0].dammage/=2;}
	else{
		if(me[0].attacked){

if(me[0].init_move){me[0].init_sprite(25,960,77,125);}
me[0].init_move=false;me[0].stand=false;
dammage(3);
if(me[0].finish_move){me[0].stand=true;
	me[0].attacked=false;
}
if(me[0].left){me[0].ins.x+=2;}
else{me[0].ins.x-=2;}
}
		}
	}
	else if (me[0].attacked && !me[0].gard){
		if(me[0].attacked){

if(me[0].init_move){me[0].init_sprite(45,966,56,113);me[0].init_move=false;me[0].stand=false;
}
dammage(3);
if(me[0].finish_move){me[0].stand=true;
	me[0].attacked=false;
}
}
if(me[0].left){me[0].ins.x+=2;}
else{me[0].ins.x-=2;}

		}

	}


void Enemy::attack(){
//	if(collision()){me[0].attacked=true;}
//	natural();
	if(!atk){
free=false;
atk=true;
}

dim.y=257;
dim.w=31;


  switch(inc){
    case 0:dim.x=17;break;
    case 1:dim.x=82;break;
    case 2:dim.x=147;break;
    case 3:dim.x=210;break;
    case 4:dim.x=274;break;
  }if(inc>=3){inc=0;free=true;wlk=false;atk=false;}else {inc++;}
}

void Enemy::walk(){
	if(!wlk){
wlk=true;
free=false;
}
dim.y=130;
dim.w=26;
  switch(inc){
    case 0:dim.x=15;break;
    case 1:dim.x=83;break;
    case 2:dim.x=147;break;
    case 3:dim.x=210;break;
    case 4:dim.x=274;break;
    case 5:dim.x=339;break;
    case 6:dim.x=404;break;
  }
  if(inc>=6){inc=0;free=true;wlk=false;atk=false;}	else {inc++;}
}
void Enemy::oriantation(){
	if(me[0].ins.x<=ins.x){left=false;}
	if(me[0].ins.x>ins.x){left=true;}
}
void Enemy::intelArt(int hardness){
srand(time(NULL));
int x=0;
x=rand()% hardness+1;
if(free){
	if(x<3){
	if(me[0].ins.x<=ins.x)	{ins.x-=step/4;}
  if(me[0].ins.x>ins.x){ins.x+=step/4;}
  std::cout<<"order walk"<<std::endl;
free=false;atk=false;wlk=true;
dim.y=en.surface->h/8*2;
}
else   if( x>=3 &&collision_enemy()){
  attackManager(dammage,&me[0].life);
  std::cout<<"order attack"<<std::endl;
free=false;atk=true;wlk=false;
dim.y=en.surface->h/8*4;
SDL_Delay(10*x);
}
}
  else if(!free && wlk){walk();}
else if(!free &&atk){attack();}
}
	void Enemy::handle_logic(){
	  if(camera[0].old_x!=map[0].backDim.x){
	  camera[0].decalage=-camera[0].old_x+map[0].backDim.x;
	  ins.x-=camera[0].decalage;
    camera[0].old_x=map[0].backDim.x;

}
lifeDim.x=ins.x;
lifeDim.w=life/2;
if (lifeDim.w<=0 || life<=0){lifeDim.w=0;
death=true;}

if(collision_enemy()){
  if(me[0].punch || me[0].kick)
  {
    attackManager(dammage,&life);
std::cout<<"hurted";
  }
}
	  }
#endif
