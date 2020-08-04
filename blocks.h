//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
	{" ", "dwmcpu",    5,    0},
	{" ", "dwmmemory",	   10,    0},
	{" ", "dwmnet",    5,    0},
	{" ", "dwmtemp",     10,    0},
	{" ", "dwmdisk",     3600,    0},
        {" ", "dwmclock",    60,    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
