static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 1900;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Codename Coder Free 4F:size=14:antialias=true:autohint:true"
};
static const char *prompt      = ":";      /* -p option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bcb49d", "#0c0c0c" },
	[SchemeSel] = { "#0c0c0c", "#bcb49d" }, 
	[SchemeSelHighlight] = { "#0c0c0c", "#bcb49d" },
	[SchemeNormHighlight] = { "#0c0c0c", "#bcb49d" },
	[SchemeOut] = { "#bcb49d", "#0c0c0c" },
	[SchemeMid] = { "#bcb49d", "#0c0c0c" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;
static unsigned int lineheight = 28;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;  /* -bw option; to add border width */
