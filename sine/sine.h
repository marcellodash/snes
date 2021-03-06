/* graphics */

void settiles(unsigned int b, unsigned char *p1, unsigned int size);
void setmap(unsigned int b, unsigned char *p1);
void setpalette(unsigned char *pal);
void enablescreen();
void screenmode(unsigned char m);
void setsprite(unsigned int s, unsigned char x, unsigned char y, unsigned char t, unsigned char p);
void waitforvsync();
void delay(unsigned int d);
void resettimer();
void sync(unsigned int d);

/* init */
void sine_init(void);

/* input */
#define TR_BUTTON		0x0010
#define TL_BUTTON		0x0020
#define Y_BUTTON		0x0040
#define X_BUTTON		0x0080
#define RIGHT_BUTTON	0x0100
#define LEFT_BUTTON	0x0200
#define DOWN_BUTTON	0x0400
#define UP_BUTTON		0x0800
#define START_BUTTON	0x1000
#define SELECT_BUTTON	0x2000
#define B_BUTTON		0x4000
#define A_BUTTON		0x8000
unsigned int getjoystatus(unsigned int j);
void clearjoy(unsigned int j);

/* string */
void addbcd(long long *bcd, unsigned int n);
void writebcd(long long bcd, unsigned int *map, unsigned int p, unsigned int offset);
void writestring(unsigned char *st, unsigned int *map, unsigned int p, unsigned int offset);

extern unsigned char sine_timer_enabled;
extern unsigned int sine_timers[16];
extern unsigned int sine_controllers[4];
extern unsigned char sine_do_copy;
extern unsigned int sine_oam_table1[256];
extern unsigned int sine_oam_table2[32];
extern unsigned char sine_palette[512];
extern unsigned char sine_dma_transfers[64*8];
