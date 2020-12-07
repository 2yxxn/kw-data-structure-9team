#ifndef __LONGPRAC_H__
#define __LONGPRAC_H__

#include <cstring>
#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

using namespace std;

void move_cursor(int x, int y);
void subbackground();
void longbackground();
void longprac_game(string pathname);
void TypingGame();

#endif
