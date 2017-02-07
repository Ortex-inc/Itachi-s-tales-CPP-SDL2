#ifndef GAME_H
#define  GAME_H

#include "class.h"
#include "sound.h"
#include "object.h"
#include "menu.h"




void Game::stat(){
	//INIT
if(mission.empty()){mission.push_back(Mission());}
	if(game.empty()){game.push_back(Game());}
//PAUSE
	else if(game[0].paused || paused){
		if(playing){game[0].pause();}}
	//	//DEATH TRY AGAIN
if(me[0].life<=0 && playing){game[0].tryAgain();}
	}

	void Game::tryAgain(){

	while(playing && me[0].life<=0){

	msg.clean("Game Over",75);
	input();

			option[6].print();
			option[5].print();
				msgbox[0].print();
			//or return home
			option[5].onClick();
			option[6].onClick();
					cursor_handle();
	update();
	SDL_Delay(100);
			if(option[6].clicked){
				init_src();game[0].playing=false;game[0].paused=false;}
			if(option[5].clicked){
				game[0].playing=false;game[0].paused=false;msg.clean("`",1);init_src();
				}
}
	}



void Game::newGame(){
//OBJECTS
init_src();
	std::string num;
if(mission.empty()){mission.push_back(Mission());}

mission[0].loadMission(1);
	num=std::string("Mission: ")+std::string("1");
soundTrack(mission[0].music.c_str());
/////////////:LOADING BOSS
if(enemy.empty()){
enemy.push_back(Enemy(mission[0].boss.c_str(),100,100,5,true));
if(enemy[enemy.size()].name!=num.c_str()){std::cout<<"he is tobi"<<std::endl;}
//mission[0].max=atoi(mission[0].tokill.c_str());
	}
	std::cout<<mission[0].tokill<<std::endl;
	std::cout<<mission[0].back<<std::endl;



if(chrono.empty()){
chrono.push_back(T());
chrono[0].position(SCREEN_WIDTH/2-timer.surface->w,0);
}

	msg.clean(num.c_str(),70);

playing=true;
paused=false;
	}



void Game::loadGame(){
	init_src();
	std::string num;
	if(mission.empty()){mission.push_back(Mission());}

	mission[0].currMission();
	num=std::string("Mission: ")+std::string(mission[0].path);
mission[0].loadMission(atoi(mission[0].path));
soundTrack(mission[0].music.c_str());


if(chrono.empty()){
chrono.push_back(T());
chrono[0].position(SCREEN_WIDTH/2-timer.surface->w,0);
}
	chrono[0].second=0;
	chrono[0].minute=0;
	playing=true;
paused=false;


	msg.clean(num.c_str(),70);

	}






	void Game::clean(){
	unsigned int i=0;
	if(!me.empty()){for(i=0;i<me.size();i++){SDL_DestroyTexture(me[i].texture);}}
	if(!enemy.empty()){for(i=0;i<enemy.size();i++){SDL_DestroyTexture(enemy[i].texture);}}
	if(!giant.empty()){	for(i=0;i<giant.size();i++){SDL_DestroyTexture(giant[i].texture);}}


	if(!button.empty()){for(i=0;i<button.size();i++){SDL_DestroyTexture(button[i].texture);}}
		if(!option.empty()){for(i=0;i<option.size();i++){SDL_DestroyTexture(option[i].texture);}}

//
SDL_DestroyRenderer(screen);
SDL_DestroyWindow(window);
SDL_Quit();
	}





void Game::pause(){
	if(escape_pressed && playing){
	escape_pressed=false;
	paused=true;}

while(paused){
	//option menu must be added
	if(paused){button[5].size(320,140,100,100);}



	btnX=-1;btnY=-1;


	input();
	msg.clean("PAUSE",70);

msgbox[0].position(SCREEN_WIDTH/2-msg.surface->w/2,SCREEN_HEIGHT/2-msg.surface->h/2);
	msgbox[0].print();
	button[5].print();
	option[5].print();

	option[5].onClick();
	button[5].onClick();
		btnX=-1;btnY=-1;
	if(button[5].clicked ){escape_pressed=false;paused=false;
	if(!paused){button[5].size(220,140,100,100);}else if(paused){button[5].size(320,140,100,100);}break;}
	if(option[5].clicked ){game[0].playing=false;game[0].paused=false;menu_page();break;}
	cursor_handle();
	update();
	}
	}



	void Game::getSetting(){
			getParam("option.ita");
		music=atoi(value[0].c_str());
		effect=atoi(value[1].c_str());
		}

void Game::setting(){
	bool edited=false;
	while(1){




	if(under_option.empty()){
		under_option.push_back(Menu("Sound","font/font.ttf",30,'t',false));
		under_option.push_back(Menu("Fx","font/font.ttf",30,'t',false));
		}

		msg.clean("OPTION",70);
	msgbox[0].position(SCREEN_WIDTH/2-msg.surface->w/2,0);
	msgbox[0].print();

input();
under_option[0].position(SCREEN_WIDTH/2-under_option[0].surface->w/2,150);
under_option[1].position(SCREEN_WIDTH/2-under_option[1].surface->w/2,200);

under_option[0].onClick();
under_option[1].onClick();
option[5].onClick();
btnX=-1;btnY=-1;
//~
if(option[5].clicked){
game[0].playing=false;game[0].paused=false;msg.clean("`",1);
option[5].clicked=false;option[2].clicked=false;break;
}

if(under_option[0].clicked){edited=true;
	if(game[0].music){game[0].music=false;}
	else{game[0].music=true;}
	std::cout<<game[0].music<<std::endl;
	under_option[0].clicked=false;
}
if(under_option[1].clicked){edited=true;
	if(game[0].effect){game[0].effect=false;}
	else{game[0].effect=true;}
	std::cout<<game[0].effect<<std::endl;
under_option[1].clicked=false;
}

under_option[0].print();
under_option[1].print();
option[5].print();


if(edited){syncParam("option.ita",music,effect);}
	update();
}
	}





#endif
