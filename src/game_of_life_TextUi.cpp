#include "game_of_life_TextUi.h"
#include "game_of_life_situation.h"

game_of_life_TextUi::game_of_life_TextUi(void):FSM_UI<game_of_life_situation>()
{
}

void game_of_life_TextUi::displaySpecificSituation(const game_of_life_situation *p_situation)
{
	cout << p_situation->toString() << endl ;
}

string game_of_life_TextUi::toString(void)const
{
	return "game_of_life_TextUi";
}


FSM_UI_if* createGameOfLifeTextUi(void)
{
  return new game_of_life_TextUi();
}

extern "C"
{
	void registerFsmUi(map<string,FSM_UI_creator> *p_factory)
	{
		registerFsmUi("game_of_life",createGameOfLifeTextUi,p_factory);
	}
}
