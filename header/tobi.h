
#ifndef TOBI_H
#define TOBI_H
	#include "object.h"
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////	ENEMY MOVES
	
	
	
	
	
	
	//ENEMY ENVIRIMENT SPRIT !!
		void stance_ennemy(int clip){
			if(!proc){

		enemy[0].dim.w=77;
		enemy[0].dim.h=150;
		enemy[0].dim.x=0;
		enemy[0].dim.y=1410;
		proc=true;}
if(enemy[0].dim.x+enemy[0].dim.w<(enemy[0].dim.w*clip)){
			enemy[0].dim.x+=enemy[0].dim.w;

			}
			else{

				proc=false;
	}
				enemy[0].ins.w=enemy[0].dim.w;
				enemy[0].ins.h=enemy[0].dim.h;

			}

					void run_ennemy(int clip){
			if(!proc){
				finished=false;

		enemy[0].dim.w=138;
		enemy[0].dim.h=110;
		enemy[0].dim.x=0;
		enemy[0].dim.y=1590;
		proc=true;}
if(enemy[0].dim.x+enemy[0].dim.w<(enemy[0].dim.w*clip)){
			enemy[0].dim.x+=enemy[0].dim.w;
			}
			else{
				finished=true;

				proc=false;
					}
					enemy[0].ins.w=enemy[0].dim.w;
				enemy[0].ins.h=enemy[0].dim.h;

			}
			
			
			
			void 	lose_ennemy(int clip){


	if(!proc){
		finished=false;
		enemy[0].dim.w=80;
		enemy[0].dim.h=140;
		enemy[0].dim.x=230;
		enemy[0].dim.y=7820;
	proc=true;
	}
	if(enemy[0].dim.x==310){enemy[0].dim.w=100;}
	if(enemy[0].dim.x+enemy[0].dim.w<410){
			enemy[0].dim.x+=enemy[0].dim.w;
			}
			else{

				proc=false;
				finished=true;
		enemy[0].dim.x=230;
						enemy[0].dim.w=80;

			
					}
						enemy[0].ins.w=enemy[0].dim.w;
				enemy[0].ins.h=enemy[0].dim.h;


}
			
			
			
			
			void guard_ennemy(){

		enemy[0].dim.w=75;
		enemy[0].dim.h=135;
		enemy[0].dim.x=490;
		enemy[0].dim.y=1910;
finished=true;
enemy[0].ins.w=enemy[0].dim.w;
				enemy[0].ins.h=enemy[0].dim.h;

				}

					void dammage_ennemy(int clip){
				if(!proc){
					finished=false;

		enemy[0].dim.w=100;
		enemy[0].dim.h=150;
		enemy[0].dim.x=0;
		enemy[0].dim.y=2090;
	proc=true;
	}
	if(enemy[0].dim.x<(enemy[0].dim.w*clip)){
			enemy[0].dim.x+=enemy[0].dim.w;
			}
			else{
finished=true;

				proc=false;
					}
				enemy[0].ins.w=enemy[0].dim.w;
				enemy[0].ins.h=enemy[0].dim.h;
				}


					

void 	punch_ennemy(int clip){


	if(!proc){
		finished=false;
		enemy[0].dim.w=80;
		enemy[0].dim.h=155;
		enemy[0].dim.x=0;
		enemy[0].dim.y=8020;
	proc=true;
	}
	if(enemy[0].dim.x==80){enemy[0].dim.w=105;}
	if(enemy[0].dim.x+enemy[0].dim.w<380){
			enemy[0].dim.x+=enemy[0].dim.w;
			}
			else{

				proc=false;
				finished=true;
				enemy[0].dim.x=0;
						enemy[0].dim.w=80;

			
					}
						enemy[0].ins.w=enemy[0].dim.w;
				enemy[0].ins.h=enemy[0].dim.h;


}


void 	throw_ennemy(int clip){


	if(!proc){
		finished=false;
		enemy[0].dim.w=90;
		enemy[0].dim.h=150;
		enemy[0].dim.x=10;
		enemy[0].dim.y=4260;
	proc=true;
	}
		if(enemy[0].dim.x==90){		enemy[0].dim.w=100;} else {	
				enemy[0].dim.w=90;
}
	if(enemy[0].dim.x+enemy[0].dim.w<280){
			enemy[0].dim.x+=enemy[0].dim.w;
		}
			else{

				proc=false;
				finished=true;
				enemy[0].dim.x=10;
				
					}
					enemy[0].ins.w=enemy[0].dim.w;
				enemy[0].ins.h=enemy[0].dim.h;
}

				
				
	/////////////////////////////////////////////////////////////////////////////////////////////:::::::::END ENEMY MOVES
	

				
				
	/////////////////////////////////////////////////////////////////////////////////////////////:::::::::END ENEMY MOVES
	
	

	
	
	
	
	
	
	
	
	
	
//////////////////////////////////////////////////////////////////SPECIAL ATTACK
		//~ void sp(int clip){
			//~ mpos.w=frame.w;
			//~ mpos.h=frame.h;
	//~ 
		//~ if(!proc){
		//~ frame.w=118;
		//~ frame.h=110;
		//~ frame.x=380;
		//~ frame.y=2070;
		//~ proc=true;}
//~ if(frame.x+frame.w<(frame.w*clip)+380){
			//~ frame.x+=frame.w;
			//~ }
			//~ else{
				//~ proc=false;
				//~ }
				//~ mpos.x+=25;
			//~ }
			//~ 
		//~ void sp_print(){
//~ mpos.h=frame.h;
//~ mpos.w=frame.w;
//~ 
			//~ texture = SDL_CreateTextureFromSurface(screen,surface);
			 //~ SDL_RenderCopy(screen, texture,&frame, &mpos);
//~ 
//~ 
			 //~ SDL_DestroyTexture(texture);
		 	//~ SDL_FreeSurface(surface);
			//~ surface=SDL_LoadBMP("src/itachi.bmp");
			//~ SDL_SetColorKey(surface, SDL_TRUE,colorkey);
//~ }
/////////////////////////////////////////////////////////////////////////////////////////////:
//////////////////////////////////////////////////////////SPECIAL ATTACK
		//~ void shur(int clip){
			//~ mpos.w=frame.w;
			//~ mpos.h=frame.h;
		//~ if(!proc){
		//~ frame.w=50;
		//~ frame.h=55;
		//~ frame.x=800;
		//~ frame.y=4306;
		//~ proc=true;}
//~ if(frame.x+frame.w<(frame.w*clip)+800){
			//~ frame.x+=frame.w;
			//~ }
			//~ else{
				//~ proc=false;
				//~ frame.x=900;
				//~ }
				//~ mpos.x+=40;
			//~ }
			//~ 
		//~ void shur_print(){
//~ mpos.h=frame.h;
//~ mpos.w=frame.w;
//~ 
			 //~ SDL_RenderCopy(screen, texture,&frame, &mpos);
//~ 
//~ 
		//~ }
//////////////////////////////
	
			#endif	
