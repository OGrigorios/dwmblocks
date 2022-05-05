//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sb-moonphase", 12, 0},
	{"", "sb-battery", 12, 0},
	{"", "sb-memory",	12,		0},
	{"", "date +%d.%m.%Y", 12, 0},
	{"", "date +%H:%M", 30, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
