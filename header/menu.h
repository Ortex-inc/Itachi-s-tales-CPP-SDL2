#ifndef MENU_H
#define MENU_H

#include "object.h"

 int i=0;
void menu_page(){


	//short ii;
	std::stringstream src;
	if(fond.empty()){
	
		fond.push_back(Splash_screen("clip/0.bmp"));
		fond[0].position(0,0);
		fond[0].size(0,0,SCREEN_WIDTH,SCREEN_HEIGHT);
		}

if(i>=14){i=0;}
src<<"clip/"<<i<<".bmp";i++;
fond[0].src=src.str().c_str();
fond[0].clean();
src.str("");

	if(option.empty()){
		option.push_back(Menu("New Game","font/font.ttf",25,'t',false));
		option.push_back(Menu("Load Game","font/font.ttf",25,'t',false));
		option.push_back(Menu("Option","font/font.ttf",25,'t',false));
		option.push_back(Menu("Quit","font/font.ttf",25,'r',false));	
		option.push_back(Menu("By ortex.inc","font/font.ttf",15,'g',false));
			
		option.push_back(Menu("-Return","font/font.ttf",25,'r',false));	
		option.push_back(Menu("-Try again?","font/font.ttf",25,'r',false));
		
		
	option[0].position(10,120);
	option[1].position(10,170);
	option[2].position(10,220);
	option[3].position(10,270);
	option[4].position(SCREEN_WIDTH-option[4].surface->w,0);
	  	option[5].position(SCREEN_WIDTH/2-option[5].surface->w/2+100,SCREEN_HEIGHT-option[5].surface->h*2);
		option[6].position(SCREEN_WIDTH/2-option[6].surface->w/2-100,SCREEN_HEIGHT-option[6].surface->h*2);

	}
	fond[0].print();
	option[0].onClick();if(option[0].clicked){game[0].newGame();}
		option[1].onClick();if(option[1].clicked){game[0].loadGame();}
			option[2].onClick();if(option[2].clicked){game[0].setting();}
				option[3].onClick();if(option[3].clicked){game[0].clean();}
				
	
	option[0].print();
		option[1].print();
			option[2].print();
				option[3].print();
					option[4].print();
	}
	
	
	
#endif
