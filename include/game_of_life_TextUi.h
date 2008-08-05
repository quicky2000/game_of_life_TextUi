#ifndef _GAME_OF_LIFE_TEXT_UI_H_
#define _GAME_OF_LIFE_TEXT_UI_H_

#include "FSM_UI.h"
#include "game_of_life_situation.h"

class game_of_life_TextUi:public FSM_UI<game_of_life_situation>
{
	public:
		game_of_life_TextUi(void);

		//Methods inherited from interface
		void displaySpecificSituation(const game_of_life_situation *p_situation);
		string toString(void)const;
	


	private:
};
#endif
