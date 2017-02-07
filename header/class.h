
#ifndef CLASS_H
#define CLASS_H

#include <SDL2/SDL.h>
#include <sstream>

#include "MSmanager.h"

#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>


class Source{
	public:
	const char* src;
	SDL_Surface *surface;
	  Uint32 colorkey;
	Source(const char*src){
		this->src=src;
		//surface=SDL_LoadBMP(this->src);
		surface=IMG_Load(this->src);
		  colorkey = SDL_MapRGB( surface->format, 0, 64, 128);
SDL_SetColorKey(surface, SDL_TRUE,colorkey);
		}
		void clean(void);
	}itachi("src/itachi.bmp"),en("src/zombie.bmp"),titan("src/titan.png")
	,back("src/sky.bmp"),forward("src/grass.bmp"),
	touchs("src/buttons.bmp"),cursor("src/cursor.png"),chef("src/tobi.bmp");

void Source::clean(){

	SDL_FreeSurface(surface);
	surface=IMG_Load(this->src);
SDL_SetColorKey(surface, SDL_TRUE,colorkey);

	}

	class Text{
	public:
Uint8 r,b,g;
const char * fontPath;
SDL_Color color;
char c;
const char* label;
		SDL_Surface*surface=NULL;
		TTF_Font *font=NULL;
		Text(const char * label,const char * fontPath,int size ,char c){
				TTF_Init();
				TTF_Font *font=NULL;
				switch(c)
				{
					case'w':
					r=255;g=255;b=255;
					break;
					case 'r':
					r=255;g=0;b=0;
					break;
					case 't':
					r=64;g=153;b=255;
					break;
					default:
					r=255;g=255;b=255;
					break;
				}
				this->fontPath=fontPath;
				this->label=label;
				font = TTF_OpenFont(fontPath, size);
				surface=TTF_RenderText_Solid(font,label,color);}
		void clean(const char*,int size);
	}msg(" ","font/font.ttf",36,'w'),timer("--:--","font/font.ttf",36,'t');

	void Text::clean(const char* pt,int size){
	SDL_Color color={r,g,b};
SDL_FreeSurface(this->surface);
TTF_CloseFont(this->font);
		this->font=NULL;
				this->font = TTF_OpenFont(this->fontPath, size);
				surface=TTF_RenderText_Solid(this->font,pt,color);

	}
class Person {
public:
//ATTR
const char * name;
int life ;
int level;
int power;
int step;
bool left;
//
bool init_move;
bool finish_move;
bool attacked;
bool stand;
bool up;
bool kick;
bool punch;
bool dash;
bool gard;

//
	bool finish;
SDL_Rect dim,ins,zone;
//
int inc;
  int dammage;
  SDL_Texture *texture;
Person(const char* name,int life,int power,int level,bool left){
	step=20;
	this->inc=0;
	this->left=left;
	this->life=life;
	this->power=power;
	this->name=name;
	stand=true;
	attacked=false;
init_move=true;
finish_move=false;
texture = SDL_CreateTextureFromSurface(screen,itachi.surface);
finish=true;
kick=punch=dash=gard=false;
	}
void print();
void position(int,int);
void init_sprite(int,int,int,int);

};
void Person::position(int x,int y){
	this->ins.x=x;
	this->ins.y=y;
	}
	void Person::init_sprite(int x,int y,int w,int h){
		this->dim.x=x;
		this->dim.y=y;
		this->dim.w=w;
		this->dim.h=h;
		}
void Person::print(){
	if(left){SDL_RenderCopyEx(screen, texture,&dim, &ins,0,0,SDL_FLIP_HORIZONTAL );}
	else{SDL_RenderCopy(screen, texture,&dim, &ins);}

		SDL_SetRenderDrawColor(screen,0,255,0,100);
		      SDL_RenderFillRect(screen, &ins);
//clean();
}

//
class Enemy{
	public:
	int life;
	int power;
	int level;
	bool left;
	bool free;
//
//
	int step;
	const char * name;
    SDL_Texture * texture;

		SDL_Texture * lifee;
int inc;

	SDL_Rect dim,ins,lifeDim,zone;
	SDL_Surface life_tube;
	int dammage;
bool atk,wlk;
bool death;
	 Enemy(const char * name,int life, int power, int level,bool left){
		 this->left=left;
		 this-> life=life;
		 this-> level=level;
		 this-> power=power;
		 atk=false;
		 wlk=false;
		 	free=true;
		 	step=20;
		 	dammage=11;
			lifeDim.h=5;
			lifeDim.w=life/2;
	death=false;
		inc=0;
texture = SDL_CreateTextureFromSurface(screen,en.surface);

		 }
		 void position(int,int);
		 void oriantation();
	void intelArt(int);
		 void stand();
		 void walk();
		 void attack();
		 void specialAttack();
		 void handle_logic();
		 void init_sprite(int,int,int,int);
		 void print();
	};


void Enemy::position(int x,int y){
	this->ins.x=x;
	this->ins.y=y;
lifeDim.y=y-10;
lifeDim.x=x;
	}

void Enemy::init_sprite(int x,int y,int w,int h){
		this->dim.x=x;
		this->dim.y=y;
		this->dim.w=w;
		this->dim.h=h;

		this->ins.w=w*2;
		this->ins.h=h*2;
		}
	void Enemy::print() {
    if(left){SDL_RenderCopyEx(screen, texture,&dim, &ins,0,0,SDL_FLIP_HORIZONTAL);}
else{ SDL_RenderCopy(screen, texture,&dim, &ins);}

//SDL_SetRenderDrawColor(screen,255,0,0,100);
  //    SDL_RenderFillRect(screen, &ins);
			SDL_SetRenderDrawColor(screen,255,250,0,180);
			      SDL_RenderFillRect(screen, &lifeDim);
}
////////////////////////////
class Titan{
	public:
	int life;
	int power;
	int level;
	bool left;
	const char * name,*src;
    SDL_Texture * texture;
	SDL_Surface *surface,*a;
	SDL_Rect dim,ins,zone;
	int dammage,inc;
	bool finish;
	bool stand;
	bool bool_shake;
	bool bool_punch;
	bool init_move;
	int step;
	 Titan(const char * name,int life, int power, int level,bool left){
step=10;
		 this->left=left;
		 this->inc=0;
 this->a=NULL;
		 this->src=src;
		 this-> life=life;
		 this-> level=level;
		 this-> power=power;
		 finish=true;
		 stand=true;
		 init_move=false;
		 bool_punch=bool_shake=false;
texture = SDL_CreateTextureFromSurface(screen,titan.surface);

		 }
		 void position(int,int);
		void  punch(int);
		 void shake(int);
		 void stance(int);
		 void guard();
		 void death(int);
	//	 void death();
		 void smartGiant(int);
		 void init_sprite(int,int,int,int);
		 void print();
	};
void Titan::position(int x,int y){
	this->ins.x=x;
	this->ins.y=y;
	}

	void Titan::init_sprite(int x,int y,int w,int h){
		this->dim.x=x;
		this->dim.y=y;
		this->dim.w=this->ins.w=w;
		this->dim.h=this->ins.h=h;
		}


	void Titan::print() {
if(left){SDL_RenderCopyEx(screen, texture,&dim, &ins,0,0,SDL_FLIP_HORIZONTAL);}
else{ SDL_RenderCopy(screen, texture,&dim, &ins);}
SDL_SetRenderDrawColor(screen,0,255,23,100);
			SDL_RenderFillRect(screen, &ins);
}
////////////////:
class Boss {
public:
//ATTR
const char * name;
int life ;
int level;
int power;
int step;
bool left;
//
bool init_move;
bool finish_move;
bool attacked;
bool stand;
bool up;
bool kick;
bool punch;
bool dash;
bool gard;

//
	bool finish;
SDL_Rect dim,ins,zone;
//
int inc;
  int dammage;
  SDL_Texture *texture;
Boss(const char* name,int life,int power,int level,bool left){
	step=20;
	this->inc=0;
	this->left=left;
	this->life=life;
	this->power=power;
	this->name=name;
	stand=true;
	attacked=false;
init_move=true;
finish_move=false;
texture = SDL_CreateTextureFromSurface(screen,chef.surface);
finish=true;
kick=punch=dash=gard=false;
	}
void print();
void position(int,int);
void init_sprite(int,int,int,int);

};
void Boss::position(int x,int y){
	this->ins.x=x;
	this->ins.y=y;
	}
	void Boss::init_sprite(int x,int y,int w,int h){
		this->dim.x=x;
		this->dim.y=y;
		this->dim.w=this->ins.w=w;
		this->dim.h=this->ins.h=h;
		}
void Boss::print(){
	if(left){SDL_RenderCopyEx(screen, texture,&dim, &ins,0,0,SDL_FLIP_HORIZONTAL );}
	else{SDL_RenderCopy(screen, texture,&dim, &ins);


		}
//clean();
}
////////////////////////////


class Destroy{
	public:
    SDL_Texture * texture;
	SDL_Rect dim,ins;
	int inc;
	int reload;
	bool finish;
	bool init_move;
	 Destroy(){
		 this->inc=0;
		 finish=true;
		 init_move=false;
		 reload=2;
texture = SDL_CreateTextureFromSurface(screen,titan.surface);

		 }
		 void position(int,int);
		 void init_sprite(int,int,int,int);
		 void animate(int*,int*,int);
		 void print();
	};
void Destroy::position(int x,int y){
	this->ins.x=x;
	this->ins.y=y;
	}

	void Destroy::init_sprite(int x,int y,int w,int h){
		this->dim.x=x;
		this->dim.y=y;
		this->dim.w=this->ins.w=w;
		this->dim.h=this->ins.h=h;
		}


	void Destroy::print() {
 SDL_RenderCopy(screen, texture,&dim, &ins);
}
///////////////////
class Special_attack{
	public:
	SDL_Texture * texture;
	SDL_Surface *surface;
	SDL_Rect dim,ins;
	bool left;
	const char* src;
	int inc;
	Special_attack(){
		this->left=false;
		this->inc=0;
		 this->src=src;
texture = SDL_CreateTextureFromSurface(screen,itachi.surface);


}
void position(int,int);
void animate(int);
void init_sprite(int,int,int,int);
void print();
void clean();
	};
void Special_attack::position(int x,int y){
	this->ins.x=x;
	this->ins.y=y;
	}


	void Special_attack::animate(int clip){
		if(this->inc>=clip){this->inc=0;}
	if(this->inc<=clip){this->dim.x+=this->dim.w;}
	this->inc++;
	}

void Special_attack::init_sprite(int x,int y, int w,int h){
		this->dim.x=x;
		this->dim.y=y;
		this->dim.w=this->ins.w=w;
		this->dim.h=this->ins.h=h;
		}
void Special_attack::print() {

if(left){SDL_RenderCopyEx(screen, texture,&dim, &ins,0,0,SDL_FLIP_HORIZONTAL);}
else{ SDL_RenderCopy(screen, texture,&dim, &ins);}


}
void Special_attack::clean(){
SDL_DestroyTexture(texture);
texture = SDL_CreateTextureFromSurface(screen,itachi.surface);


	}







//////////////////////
class Label{
	public:
	Uint8 r,g,b;
	TTF_Font *police;
	const char * label;
	const char* fontPath;
	int size;
	SDL_Surface *surface;
	SDL_Texture *texture;
	SDL_Color color;
	SDL_Rect ins;
	int x,y;
	char c;
	bool clicked;
	Label(const char* label,const char* fontPath,int size,char c){
TTF_Init();
//
surface=NULL;
police=NULL;
this->c=c;
switch(this->c){
	case 'b':
	r=0;g=0;b=0;
	break;
	case 'r':
	r=255;g=0;b=0;
	break;
	case 'w':
	r=255;g=255;b=255;
	default:
  	r=255;g=255;b=255;
	break;
}
SDL_Color color={r,g,b};
		this->label=label;
		this->fontPath=fontPath;
			police = TTF_OpenFont(fontPath, size);
		surface=TTF_RenderText_Blended(police, label ,color);
		clicked=false;
		}
		void position(int x,int y);
		void hover(void);
		void onClick(void);
    void print(void);
    void clean(void);


	};
void Label::position(int x,int y){
	this->ins.x=x;
	this->ins.y=y;

	this->ins.h=surface->h;
	this->ins.w=surface->w;
		}


void Label::onClick(){
	if(btnX>ins.x && ins.x+ins.w>btnX && btnY>ins.y && ins.y+ins.h>=btnY){
ins.x=20;
clicked=true;
btnX=0;
btnY=0;
	}
	else{ins.x=40;}
	clicked=false;

	}
  void Label::clean(){
    SDL_DestroyTexture(texture);
   SDL_FreeSurface(surface);
   SDL_Color color={r,g,b};
   surface=TTF_RenderText_Blended(this->police, this->label ,color);

  }
	void Label::print(){

         texture  = SDL_CreateTextureFromSurface(screen,surface);
          SDL_RenderCopy(screen, texture,NULL ,&ins);
         clean();
    }
//
class  Map {
	public:
	SDL_Texture *textureBack;
	SDL_Texture *textureForward;

	SDL_Rect backIns;
	SDL_Rect backDim;
	//
	SDL_Rect forwardIns;
	SDL_Rect forwardDim;
	Map(int forwardHeight ){

				backIns.x=0;
			backIns.y=0;
			forwardIns.x=0;

		this->backIns.w=this->backDim.w=SCREEN_WIDTH;
		this->backIns.h=this->backDim.h=SCREEN_HEIGHT;
		//
			forwardIns.w=this->forwardDim.w=SCREEN_WIDTH;
			this->forwardDim.h=forwardHeight;

			forwardIns.y=SCREEN_HEIGHT-forwardHeight;

      this->forwardIns.w=this->forwardDim.w=SCREEN_WIDTH;
      this->forwardIns.h=this->forwardDim.h=forwardHeight;

textureForward = SDL_CreateTextureFromSurface(screen,forward.surface);
textureBack = SDL_CreateTextureFromSurface(screen,back.surface);
			backDim.x=0;
			backDim.y=0;
			forwardDim.x=0;
			forwardDim.y=0;}




		void print(){
SDL_RenderCopy(screen, textureBack,&backDim, &backIns);
				//
 SDL_RenderCopy(screen, textureForward,&forwardDim, &forwardIns);

		}
	};

class Camera {
	public:
	SDL_Rect ins;
int decalage;
int old_x;
	Camera(int x,int y,int h ,int w){
this->old_x=0;
decalage=0;
		this->ins.x=x;
		this->ins.y=y;
	}
	void holdChar();
};
class specialAttack{
	const char *src;
	SDL_Surface *surface;
	SDL_Rect dim,ins;
	};

class Panel{

public:
  SDL_Rect charDim,charIns;
SDL_Texture * textureLife;
SDL_Texture * texturePower;
    SDL_Surface *life;
      SDL_Surface *power;
      //  SDL_Surface *surface;
          SDL_Rect powerDim;
          SDL_Rect lifeDim;
          const char*src;
Panel(const char*src){

    this->src=src;
   life=NULL;
   power=NULL;
  }
  void position(int,int);
  void size(int,int);
  void print();
};
  void Panel::position(int x,int y){
    this->lifeDim.x=x;
    this->powerDim.y=y;
    this->lifeDim.y=y*4;
    this->powerDim.x=x;
  }

void Panel::size(int a, int b){
  this->lifeDim.h=b;
  this->powerDim.h=b;
  this->powerDim.w=a;
  this->lifeDim.w=a;
}

  void Panel::print(){

    SDL_SetRenderDrawColor(screen,0,0,255,225);
      SDL_RenderFillRect(screen, &lifeDim);
         textureLife = SDL_CreateTextureFromSurface(screen,life);

          SDL_SetRenderDrawColor(screen,255,0,0,225);

            SDL_RenderFillRect(screen, &powerDim);
              texturePower = SDL_CreateTextureFromSurface(screen,power);


  }
  /////////////////////::::::
  class Button{
public:
	SDL_Texture *texture;
	SDL_Rect dim,ins;
	bool clicked;
	short oldY;
	Button(){texture=SDL_CreateTextureFromSurface(screen,touchs.surface);clicked=false;}
		void position(int,int);
		void size(int,int,int,int);
		void onClick(void);
		void print(void);
};
	void Button::position(int x,int y){
		this->ins.x=x;
		this->ins.y=y;
		this->oldY=this->ins.y+2;}
	void Button::size(int x,int y,int w,int h){
		this->dim.x=x;
		this->dim.y=y;
		this->dim.w=this->ins.w=w;
		this->dim.h=this->ins.h=h;}

	void Button::onClick(){
		if(ins.x<=btnX && ins.x+dim.w>=btnX && ins.y<=btnY && ins.y+dim.h>=btnY ){
				//onClick code
			clicked=true;
		this->ins.y=this->oldY;
			//MAKE ANIMATION OR SOUND WHEN BUTTON COCKED
				}
				else if (btnX==-1 && btnY==-1){
					clicked=false;
				this->ins.y=this->oldY-2;}
}
	void Button::print(){SDL_RenderCopy(screen,texture ,&dim,&ins);}


  /////
  class T{
	public:
int second,minute,hour;
bool up;
std::string s;
SDL_Rect ins;

	T(){second=0; minute=0; hour=0;up=false;}
	void position(int,int);
	void toTime(int var);
	bool timeUp();
	void print();
};
void T::position(int x,int y){
	this->ins.x=x;
	this->ins.y=y;

	this->ins.w=timer.surface->w;
	this->ins.h=timer.surface->h;
}
void T::print(){
	ins.w=timer.surface->w;
	ins.h=timer.surface->h;
	SDL_Texture *texture=SDL_CreateTextureFromSurface(screen,timer.surface);
	SDL_RenderCopy(screen,texture,NULL,&ins);
	SDL_DestroyTexture(texture);
}
  //////
  class Mission{
	public:
	const char* path;
	std::string tokill;
	int max;
	int time;
		std::string back;
		std::string forward;
		std::string music;
		std::string todo;
		std::string boss;
	Mission(){}
	int currMission();
	void loadMission(int);
};
	int Mission::currMission(){
		getParam("mission/ndx.ita");
		path=value[0].c_str();
		return atoi(path);
		}
	void Mission::loadMission(int i){
		std::ostringstream ss;
		ss.str("");
		ss<<"mission/ms"<<i<<".ita";
		getParam(ss.str().c_str());
		tokill=value[0];
		this->max=atoi(tokill.c_str());
		time=atoi(value[1].c_str());
		back=value[2];
		forward=value[3];
		music=value[4];
		todo=value[5];
		boss=value[6];
}

class Menu{
	public:
Uint8 r,b,g;
int oldY;
bool clicked;
const char * fontPath;
SDL_Color color;
char c;
const char* label;
SDL_Rect ins,dim;
		SDL_Surface*surface=NULL;
		SDL_Texture *texture=NULL;
		TTF_Font *font=NULL;
		Menu(const char * label,const char * fontPath,int size ,char c,bool bold){
				TTF_Init();
				TTF_Font *font=NULL;
				switch(c)
				{
					case'r':
					r=205;g=51;b=51;
					break;
					case't':
					r=135;g=206;b=235;
					break;
					default:
					r=124;g=205;b=124;
					break;
				}
				clicked=false;
					oldY=0;
					SDL_Color color={r,g,b};
				this->fontPath=fontPath;
				this->label=label;
				font = TTF_OpenFont(this->fontPath, size);
				if(bold){TTF_SetFontStyle(font,TTF_STYLE_BOLD);}
				surface=TTF_RenderText_Solid(font,this->label,color);
ins.w=dim.w=this->surface->w;
ins.h=dim.h=this->surface->h;
}
void position(int,int);
void onClick();
void print();
};
void Menu::position(int x,int y){
	this->ins.x=x;
	this->ins.y=y;
	this->dim.x=0;
	 this->dim.y=0;
	 this->oldY=this->ins.y+2;
}
void Menu::onClick(){
		if(ins.x<=btnX && ins.x+dim.w>=btnX && ins.y<=btnY && ins.y+dim.h>=btnY ){
				//onClick code
			clicked=true;
		this->ins.y=this->oldY;
			//MAKE ANIMATION OR SOUND WHEN BUTTON COCKED
				}
				else if (btnX==-1 && btnY==-1){
					clicked=false;
				this->ins.y=this->oldY-2;}
}
void Menu::print(){
	SDL_Texture *texture=SDL_CreateTextureFromSurface(screen,surface);
	SDL_RenderCopy(screen,texture,&dim,&ins);
	SDL_DestroyTexture(texture);
}
	class Splash_screen{
	public:
	const char *src;
	SDL_Rect dim,ins;
	SDL_Surface *surface;
	SDL_Texture *texture;
	Splash_screen(const char*src){
			surface=NULL;
			this->src=src;
		surface=IMG_Load(src);
		texture=SDL_CreateTextureFromSurface(screen,surface);
		}
	void position(int,int);
		void size(int,int,int,int);
		void print();
		void clean();
	};

	void Splash_screen::position(int x,int y){
	this->ins.x=x;
	this->ins.y=y;
		}

	void Splash_screen::size(int x,int y,int w,int h){
		this->dim.w=surface->w;
		this->dim.h=surface->h;
		this->ins.h=h;
		this->ins.w=w;
		this->dim.x=x;
		this->dim.y=y;
}
void Splash_screen::print(){
SDL_RenderCopy(screen,texture,&dim,&ins);
}
void Splash_screen::clean(){
	surface=IMG_Load(this->src);
		texture=SDL_CreateTextureFromSurface(screen,surface);

	}


/////////////////////////////////////////////MAIN CORE INTENTION
class Game{
	public:
	bool charged;
	bool paused;
	bool playing;

		bool music;
	bool effect;

	Game(){
			music=true;
		effect=true;
		paused=charged=playing=false;
		}
		void pause();//pause and resume DONE
		void tryAgain();// if life 0 or time up -try again
		void newGame(); //from menu page
		void loadGame();
		void stat();//stat game assemble and hold all pause try again and new game
		void clean();// clean up DONE
		void setting();
		void getSetting();
	};

		class Cursor{
		public:
		SDL_Texture *texture;
		SDL_Rect dim,ins;

		Cursor(){
			texture=SDL_CreateTextureFromSurface(screen,cursor.surface);
			}

			void position(int,int);
			void size(int,int,int,int);
			void animate();
			void print();
		};
			void Cursor::position(int x,int y){
	this->ins.x=x;
	this->ins.y=y;
		}

	void Cursor::size(int x,int y,int w,int h){
		this->dim.x=x;
		this->dim.y=y;
		this->dim.w=this->ins.w=w;
		this->dim.h=this->ins.h=h;
		}

	void Cursor::print(){
	SDL_RenderCopy(screen,texture,&dim,&ins);
}
//////////////////////////////////////////

class Gen{
public:
unsigned int vector_enemy;
	Gen(int a){
		vector_enemy=a;}
}Genr(0);
#endif
