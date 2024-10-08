/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#0d0d0d",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 60;

/* enable or disable (1 means enable, 0 disable) bell sound when password is incorrect */
static const int xbell = 0;

/*Enable blur*/
#define BLUR
	/*Set blur radius*/
	static const int blurRadius=5;
	/*Enable Pixelation*/
	//#define PIXELATION
	/*Set pixelation radius*/
	/*static const int pixelSize=10;*/
