#ifndef DRAW_H
#define DRAW_H
#include "object.h"





void draw(){



//~ if(!map.empty()){
//~ for(unsigned int i=0;i<map.size();i++){
//~ if(map[i].ins.x<=SCREEN_WIDTH || map[i].ins.y<=SCREEN_HEIGHT){
//~ map[i].print();}
//~ }}
//~ }
if(me[0].attacked){
	//print the attacker after me
	}
if(me[0].punch || me[0].kick){
	//print enemy befor me
	}

if(!me.empty()){
for(unsigned int i=0;i<me.size();i++){
if(me[i].ins.x<=SCREEN_WIDTH || me[i].ins.y<=SCREEN_HEIGHT){

if(me[i].attacked){me[i].print();enemy[i].print();}
else{enemy[i].print();me[i].print();}
 //me[i].move();
}}
}

if(!enemy.empty()){
for(unsigned int i=0;i<enemy.size();i++){
if(enemy[i].ins.x<=SCREEN_WIDTH || enemy[i].ins.y<=SCREEN_HEIGHT){
enemy[i].print();
}
}}



if(!giant.empty()){
for(unsigned int i=0;i<giant.size();i++){
if(giant[i].ins.x<=SCREEN_WIDTH || giant[i].ins.y<=SCREEN_HEIGHT){
giant[i].print();}
}}






if(!panel.empty()){
 for(unsigned int i=0;i<panel.size();i++){
//~ if(panel[i].ins.x<=SCREEN_WIDTH || panel[i].ins.y<=SCREEN_HEIGHT){
panel[i].print();}
//~ }}
}
//crr();

if(destroy.empty()==false){destroy[0].print();}

}

#endif
