//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",  "volume",   1,  100},
  {"",  "battery",  5,  3}, 
  {"",  "clock",    60, 1},
};

static char delim[] = " ] [ ";
static unsigned int delimLen = 5;
