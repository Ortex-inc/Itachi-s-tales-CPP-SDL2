#ifndef TOUCHPAD_H
#define TOUCHPAD_H

void touchPad(){
	input();
if(button.empty()){
	btnX=-1;
	btnY=-1;
	button.push_back(Button());
	button.push_back(Button());
	button.push_back(Button());
	button.push_back(Button());
	button.push_back(Button());
	button.push_back(Button());
	button.push_back(Button());



	button[0].size(50,0,80,55);
	button[0].position(button[0].dim.w+15,SCREEN_HEIGHT-(button[0].dim.h*2)-75);

	button[1].size(130,60,50,80);
	button[1].position(button[0].dim.w*2+30,SCREEN_HEIGHT-button[0].dim.h-75);

	button[2].size(50,140,80,55);
	button[2].position(button[0].ins.x,SCREEN_HEIGHT-58);

	button[3].size(0,60,50,80);
	button[3].position(30,button[1].ins.y);

	button[4].size(220,20,100,110);
	button[4].position(SCREEN_WIDTH-button[4].dim.w*2,SCREEN_HEIGHT-button[4].dim.h);

	button[6].size(320,20,100,110);
	button[6].position(SCREEN_WIDTH-button[6].dim.w,SCREEN_HEIGHT-button[6].dim.h);


//PAUSE RESUME
	button[5].size(220,140,100,100);
	button[5].position(SCREEN_WIDTH-button[5].dim.w,0);

}
//INIT BUTOON SIZE AND position
// buttonON UP

button[0].onClick();
button[0].print();

// buttonON RIGHT

button[1].onClick();
button[1].print();


// buttonON DOWN

button[2].onClick();
button[2].print();

// buttonON LEFT

button[3].onClick();
button[3].print();
//BUTTON A
button[4].onClick();
button[4].print();

//::BUTTON PAUSE& RESMUE
button[5].onClick();
button[5].print();

//BUTTON B
button[6].onClick();
button[6].print();


////////////////:CONTROL TOUCHPAD FUNCTIONS
if(button[0].clicked){up_pressed=true;}
if(button[1].clicked){right_pressed=true;}
if(button[2].clicked){down_pressed=true;}
if(button[3].clicked){left_pressed=true;}
if(button[4].clicked){a_pressed=true;}
if(button[5].clicked){escape_pressed=true;}
if(button[6].clicked){b_pressed=true;}
		if(!paused){button[5].size(220,140,100,100);}else if(paused){button[5].size(320,140,100,100);}
		
		
		
		
if(!button[0].clicked){up_pressed=false;}
if(!button[1].clicked){right_pressed=false;}
if(!button[2].clicked){down_pressed=false;}
if(!button[3].clicked){left_pressed=false;}
if(!button[4].clicked){a_pressed=false;}
if(!button[5].clicked){escape_pressed=false;}
if(!button[6].clicked){b_pressed=false;}

}
#endif
