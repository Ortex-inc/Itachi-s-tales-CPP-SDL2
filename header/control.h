#ifndef CONTROL_H
#define CONTROL_H
#include "meMove.h"
#include "object.h"
int count=0;
bool first=true;
bool process=false;
void control(){

//ORIANTATION
if(left_pressed){me[0].left=true;me[0].step=-20;me[0].ins.x+=me[0].step;}

if(right_pressed){me[0].left=false;me[0].step=20;me[0].ins.x+=me[0].step;}

//END




	if(left_pressed){
		if(me[0].init_move){
			me[0].inc=0;
			me[0].init_sprite(10,270,98,90);
}
		me[0].init_move=false;
		me[0].stand=true;
			run(6);}

 else if(up_pressed ){
	 if(me[0].init_move){
me[0].inc=0;
	 me[0].init_sprite(483,390,80,120);

	 me[0].finish=false;
 	me[0].up=true;
 me[0].inc=0;
 me[0].init_move=false;
 		me[0].stand=false;
}

		me[0].finish_move=false;
		me[0].init_move=false;
	 me[0].stand=true;
	 jump(3);}

  	 else if(right_pressed){
		  if(me[0].init_move){
			  me[0].inc=0;
	 me[0].init_sprite(10,270,98,90);

		}
		me[0].init_move=false;
		me[0].stand=true;
		run(6);

	}

 else if(down_pressed){
if(me[0].init_move){
	me[0].inc=0;
gard(1);
 }
me[0].init_move=false;
		me[0].stand=true;
		me[0].gard=true;
		}
		else if(!down_pressed){me[0].gard=false;}


	    //~ else if(b_pressed){
		  //~ if(me[0].init_move){
 //~ me[0].init_sprite(2,2070,84,130);
//~
//~ }
//~ me[0].init_move=false;
//~ me[0].stand=true;
//~ //	shur(4);
	//~ attack(4);
		//~ //sp(4);
//~ }

//sp_print();
	   //////////////////////////////


	   //~
	     //~ if(a_pressed){
//~ if(me[0].init_move){
 //~ me[0].init_sprite(16,402,67,125);
 //~ me[0].finish=false;
 //~ me[0].inc=0;
 //~ me[0].dash=true;
//~ 
 //~ me[0].init_move=false;
	//~ me[0].stand=false;
//~ }
//~ 
//~
		//~ dash(3);
		//~ if(me[0].left){me[0].ins.x-=80;}
		//~ else{me[0].ins.x+=80;}
//~
	//~ }

		     if(a_pressed){
if(me[0].init_move){
	me[0].finish=false;
	me[0].punch=true;
me[0].init_sprite(0,3990,100,125);
me[0].inc=0;
me[0].init_move=false;
		me[0].stand=false;
}
//crr();
punch(3);
		}


			     if(b_pressed){
	if(me[0].init_move){
		me[0].kick=true;
			me[0].finish=false;
me[0].init_sprite(15,4125,60,125);
me[0].inc=0;
me[0].init_move=false;
		me[0].stand=false;
}

//crr();
kick(4);
		}


		if(!me[0].finish){
	if(me[0].kick){kick(4);}
	else 	if(me[0].punch){punch(3);}
else	if(me[0].dash){dash(3);}
else	if(me[0].up){jump(3);}



}

	}

#endif
