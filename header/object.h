#ifndef OBJECT_H
#define OBJECT_H
#include <vector>
#include <sstream>
#include "screen.h"
#include "sound.h"

#include "class.h"
 std::vector <Game> game;

 std::vector <Menu> option;
  std::vector <Menu> under_option;

//Game
//Chars
std::vector <Person> me;
std::vector <Enemy> enemy;
std::vector <Titan> giant;

std::vector <Destroy> destroy;


std::vector <Map> map;
std::vector <Panel> panel;
//Texts
std::vector <Label> msgbox;

std::vector <T> chrono;

std::vector <Button> button;

std::vector <Mission> mission;
std::vector <Splash_screen> fond;
std::vector <Camera> camera;
std::vector <Special_attack> crow;
std::vector <Cursor> cr;


	 int margX=15;
			 int margY=4;


void T::toTime(int var){

	std::ostringstream ss;


	//~ if(var%3600==0){
		//~ this->hour=0;
		 //~ this->second=var%60;
		//~ this->minute=var/60;
		//~ }
	//~ else if(var%3600>0){
		 //~ this->hour=var%3600;
		//~ }
		if(second>=60){second=0;minute++;}
		if(minute>=60){minute=0;hour++;}

		if(var<=minute){up=true;}


	second++;
		if(minute<10){ss<<"0";}
ss<<minute<<":";


if(second<10){ss<<"0";}

ss<<second;
s=ss.str();
ss.str(" ");

}


	void init_src(){
		std::string num;
if(mission.empty()){mission.push_back(Mission());}

mission[0].loadMission(1);
	num=std::string("Mission: ")+std::string("1");
//soundTrack(mission[0].music.c_str());
/////////////:LOADING BOSS
//~ if(enemy.empty()){
//~ enemy.push_back(Enemy(mission[0].boss.c_str(),100,100,5,true));
//~ if(enemy[enemy.size()].name!=num.c_str()){std::cout<<"he is tobi"<<std::endl;}
//~
	//~ }


	en.src="src/zombie.bmp";
	en.clean();
	//~ std::cout<<mission[0].tokill<<std::endl;
	//~ std::cout<<mission[0].back<<std::endl;
//~ std::cout<<back.src<<std::endl;








giant.push_back(Titan("Titan",100,100,1,false));

      giant[0].init_sprite(490,140,100,225);

giant[0].position(270,SCREEN_WIDTH-giant[0].ins.h);










//MAP CHANGING DONE
back.src=mission[0].back.c_str();
back.clean();

forward.src=mission[0].forward.c_str();
forward.clean();




		if(me.empty()){

me.push_back(Person("Itachi",100,100,1,false));
 map.push_back(Map(40));
 camera.push_back(Camera(SCREEN_WIDTH,SCREEN_HEIGHT,0,0));
game.push_back(Game());
panel.push_back(Panel(""));


destroy.push_back(Destroy());


chrono.push_back(T());
cr.push_back(Cursor());

}
	if(msgbox.empty()){
		msgbox.push_back(Label("PAUSE","font/font.ttf",70,'w'));
		}
me[0].init_sprite(10,90,61,125);

me[0].position(40,SCREEN_HEIGHT-me[0].ins.h);

panel[0].size(me[0].life,15);
panel[0].position(10,10);



//~ //
//~ enemy.push_back(Enemy("LOL",100,100,5,true));
//~
//~ enemy.push_back(Enemy("LOL",100,100,5,true));
//~
//~
//~ enemy[1].dim.w=64;
//~ enemy[1].dim.h=59;
//~ enemy[1].dim.x=0;
//~ enemy[1].dim.y=(en.surface->h/8)*2;
//~
//~ enemy[1].ins.w=110;
//~ enemy[1].ins.h=120;
//~
//~ //enemy[1].ins.x=generateX();
//~
//~ enemy[1].position(160,SCREEN_HEIGHT-enemy[1].ins.h);
//~
//~
//~
//~ panel.push_back(Panel(""));
  //~ panel[1].size(enemy[1].life,15);
//~ panel[1].position(enemy[1].ins.x-20,enemy[1].ins.y);
//~ //

cr[0].size(0,0,40,40);
if(!chrono.empty()){
	chrono[0].second=0;
chrono[0].minute=0;
chrono[0].up=false;

}
if(game[0].music){soundTrack(mission[0].music.c_str());}

}


#endif
