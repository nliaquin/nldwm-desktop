//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/    /*Update Interval*/    /*Update Signal*/
    {"", "sh -c 'output=$(progress -q); if [ \"$output\" != \"No command currently running\" ]; then echo \"$output\" | head -n 2 | paste -sd \" \"; else echo \"\"; fi'", 1, 12},
    {"RAM:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 1, 0},
    {"", "date '+%D %R'", 5, 0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
