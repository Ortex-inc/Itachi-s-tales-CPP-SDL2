#include <iostream>
#include <ctime>
#include "header/inputHandle.h"
#include "header/control.h"
#include "header/screen.h"
#include "header/object.h"

#include "header/menu.h"
#include "header/function.h"
#include "header/draw.h"
#include "header/touchPad.h"

#include "header/logic.h"
#include "header/meMove.h"
#include "header/enemy.h"
#include "header/control.h"
#include "header/core.h"
#include "header/game.h"
//~s

int main(){
setScreen("itachi\'s tales");

init_src();
game[0].getSetting();
SDL_ShowCursor(SDL_DISABLE);
menu_page();
//main loop
game[0].playing=true;

while(!quit){
	//
main_core();
me[0].life=100;
panel[0].powerDim.w=me[0].life;
	
update();
	}
game[0].clean();
  return 0;
  }
