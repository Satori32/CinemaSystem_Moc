#include<stdio.h>

#include "CellSystem.h"
#include "TaskerColler.h"
#include "BrainFuck.h"
#include "Vector.h"

//if need sound. do it your self.

struct CinemaItem {
	CellSystem Cell;
	SystemBrainFuck BF;
};

struct CinemaSystem {
	Vector<CinemaItem> Scenes;
	SystemBrainFuck BF;
	TaskerCallerPlus Tasker
};
