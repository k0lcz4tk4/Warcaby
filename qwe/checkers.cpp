// qwe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Gui.h"
#include "Board.h"
#include "Logic.h"

int main()
{
	Board b(WHITE);
	Gui gui;
	Logic log(WHITE,DARK);
	while (!log.checkWinningCondition(b))
	{
		gui.run(b, log);
	}
	while (1)
	{
		gui.showWinner(b, log);
	}
    return 0;
}