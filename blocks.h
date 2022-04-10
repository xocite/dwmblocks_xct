//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "free -h | awk '/^Mem/ { print $3 }' | sed s/i//g",	30, 0},
	{"", "cat /sys/class/power_supply/BAT0/status",	120, 0},
	{"", "cat /sys/class/power_supply/BAT0/capacity", 120, 0},
	{"Net: ", "iw dev wlan0 info | grep ssid | awk '{print $2}'", 120, 0},
	{"", "date '+%A %F %R'",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
