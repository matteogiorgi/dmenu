/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"mononoki Nerd Font:Bold:pixelsize=12"    /* "monospace:size=10" */
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#729fcf", "#2e3436" },             /* "#bbbbbb", "#222222" */
	[SchemeSel] = { "#2e3436", "#729fcf" },              /* "#eeeeee", "#005577" */
	[SchemeSelHighlight] = { "#ff9500", "#3465a4" },     /* "#ffc978", "#005577" */ 
	[SchemeNormHighlight] = { "#ff9500", "#555753" },    /* "#ffc978", "#222222" */
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeOutHighlight] = { "#ffc978", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 22;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
