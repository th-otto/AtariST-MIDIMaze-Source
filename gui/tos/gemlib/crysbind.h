/* Application Manager			*/
#define APPL_INIT 10
#define APPL_READ 11
#define APPL_WRITE 12
#define APPL_FIND 13
#define APPL_TPLAY 14
#define APPL_TRECORD 15
#define APPL_BVSET 16
#define APPL_EXIT 19
#define APPL_GINFO 130

/* Event Manager			*/
#define EVNT_KEYBD 20
#define	EVNT_BUTTON 21
#define EVNT_MOUSE 22
#define EVNT_MESAG 23
#define EVNT_TIMER 24
#define EVNT_MULTI 25
#define EVNT_DCLICK 26

/* Menu Manager				*/
#define MENU_BAR 30
#define MENU_ICHECK 31
#define MENU_IENABLE 32
#define MENU_TNORMAL 33
#define MENU_TEXT 34
#define MENU_REGISTER 35
#define MENU_POPUP	36
#define	MENU_ATTACH	37
#define MENU_ISTART	38
#define MENU_SETTINGS	39

/* Object Manager			*/
#define OBJC_ADD 40
#define OBJC_DELETE 41
#define OBJC_DRAW 42
#define OBJC_FIND 43
#define OBJC_OFFSET 44
#define OBJC_ORDER 45
#define OBJC_EDIT 46
#define OBJC_CHANGE 47
#define	OBJC_SYSVAR 48

/* Form Manager				*/
#define FORM_DO 50
#define FORM_DIAL 51
#define FORM_ALERT 52
#define FORM_ERROR 53
#define FORM_CENTER 54
#define FORM_KEYBD 55
#define FORM_BUTTON 56

/* Graphics Manager			*/
#define GRAF_RUBBOX 70
#define GRAF_DRAGBOX 71
#define GRAF_MBOX 72
#define GRAF_GROWBOX 73
#define GRAF_SHRINKBOX 74
#define GRAF_WATCHBOX 75
#define GRAF_SLIDEBOX 76
#define GRAF_HANDLE 77
#define GRAF_MOUSE 78
#define GRAF_MKSTATE 79

/* Scrap Manager			*/
#define SCRP_READ 80
#define SCRP_WRITE 81

/* File Selector Manager		*/
#define FSEL_INPUT 90
#define FSEL_EXINPUT 91

/* Window Manager			*/
#define WIND_CREATE 100
#define WIND_OPEN 101
#define WIND_CLOSE 102
#define WIND_DELETE 103
#define WIND_GET 104
#define WIND_SET 105
#define WIND_FIND 106
#define WIND_UPDATE 107
#define WIND_CALC 108
#define WIND_NEW 109

/* Resource Manager			*/
#define RSRC_LOAD 110
#define RSRC_FREE 111
#define RSRC_GADDR 112
#define RSRC_SADDR 113
#define RSRC_OBFIX 114
#define RSRC_RCFIX 115

/* Shell Manager			*/
#define SHEL_READ 120
#define SHEL_WRITE 121
#define SHEL_GET 122
#define SHEL_PUT 123
#define SHEL_FIND 124
#define SHEL_ENVRN 125

/* max sizes for arrays		*/
#define C_SIZE 4 /* should actually be 5, but naddrout is never accessed */
#define G_SIZE 15
#define I_SIZE 16
#define O_SIZE 7
#define AI_SIZE 3
#define AO_SIZE 1

/* Crystal funtion op code	*/
#define OP_CODE control[0]
#define IN_LEN control[1]
#define OUT_LEN control[2]
#define AIN_LEN control[3]
			
#define RET_CODE int_out[0]

/* application lib parameters	*/
#define AP_VERSION global[0]
#define AP_COUNT global[1]
#define AP_ID global[2]
#define AP_LOPRIVATE global[3]
#define AP_HIPRIVATE global[4]
#define AP_LOPNAME global[5]		/* long ptr. to tree base in rsc*/
#define AP_HIPNAME global[6]
#define AP_LO1RESV global[7]		/* long address of memory alloc.*/
#define AP_HI1RESV global[8]
#define AP_LO2RESV global[9]		/* length of memory allocated	*/
#define AP_HI2RESV global[10]		/* colors available on screen	*/
#define AP_LO3RESV global[11]
#define AP_HI3RESV global[12]
#define AP_LO4RESV global[13]
#define AP_HI4RESV global[14]

#define AP_GLSIZE int_out[1]

#define AP_RWID int_in[0]
#define AP_LENGTH int_in[1]
#define AP_PBUFF addr_in[0]

#define AP_PNAME addr_in[0]

#define AP_TBUFFER addr_in[0]
#define AP_TLENGTH int_in[0]
#define AP_TSCALE int_in[1]

#define AP_BVDISK int_in[0]
#define AP_BVHARD int_in[1]


/* event lib parameters	*/
#define IN_FLAGS int_in[0]

#define B_CLICKS int_in[0]
#define B_MASK int_in[1]
#define B_STATE int_in[2]

#define MO_FLAGS int_in[0]
#define MO_X int_in[1]
#define MO_Y int_in[2]
#define MO_WIDTH int_in[3]
#define MO_HEIGHT int_in[4]

#define ME_PBUFF addr_in[0]

#define T_LOCOUNT int_in[0]
#define T_HICOUNT int_in[1]

#define MU_FLAGS int_in[0]
#define EV_MX int_out[1]
#define EV_MY int_out[2]
#define EV_MB int_out[3]
#define EV_KS int_out[4]
#define EV_KRET int_out[5]
#define EV_BRET int_out[6]


#define MB_CLICKS int_in[1]
#define MB_MASK int_in[2]
#define MB_STATE int_in[3]

#define MMO1_FLAGS int_in[4]
#define MMO1_X int_in[5]
#define MMO1_Y int_in[6]
#define MMO1_WIDTH int_in[7]
#define MMO1_HEIGHT int_in[8]

#define MMO2_FLAGS int_in[9]
#define MMO2_X int_in[10]
#define MMO2_Y int_in[11]
#define MMO2_WIDTH int_in[12]
#define MMO2_HEIGHT int_in[13]

#define MME_PBUFF addr_in[0]

#define MT_LOCOUNT int_in[14]
#define MT_HICOUNT int_in[15]

#define EV_DCRATE int_in[0]
#define EV_DCSETIT int_in[1]

/* menu library parameters */

#define MM_ITREE	addr_in[0]		/* ienable,icheck,tnorm	*/

#define MM_PSTR		addr_in[0]

#define MM_PTEXT	addr_in[1]

#define SHOW_IT		int_in[0]		/* bar			*/

#define	ITEM_NUM	int_in[0]		/* icheck, ienable	*/
#define	MM_PID		int_in[0]		/* register		*/
#define	CHECK_IT	int_in[1]		/* icheck		*/
#define	ENABLE_IT	int_in[1]		/* ienable		*/

#define	TITLE_NUM	int_in[0]		/* tnorm		*/
#define	NORMAL_IT	int_in[1]		/* tnormal		*/

/* 5/13/92		*/
#define M_MENU		addr_in[0]
#define M_XPOS		int_in[0]
#define M_YPOS		int_in[1]
#define M_MDATA		addr_in[1]
#define M_FLAG		int_in[0]
#define M_TREE		addr_in[0]
#define M_ITEM		int_in[1]
#define M_MENU2		int_in[1]
#define M_ITEM2		int_in[2]

/* form library parameters	*/
#define FM_FORM addr_in[0]
#define FM_START int_in[0]

#define FM_TYPE int_in[0]

#define FM_ERRNUM int_in[0]

#define FM_DEFBUT int_in[0]
#define FM_ASTRING addr_in[0]

#define FM_IX int_in[1]
#define FM_IY int_in[2]
#define FM_IW int_in[3]
#define FM_IH int_in[4]
#define FM_X int_in[5]
#define FM_Y int_in[6]
#define FM_W int_in[7]
#define FM_H int_in[8]

#define FM_XC int_out[1]
#define FM_YC int_out[2]
#define FM_WC int_out[3]
#define FM_HC int_out[4]

#define FM_OBJ int_in[0]
#define FM_ICHAR int_in[1]
#define FM_INXTOB int_in[2]

#define FM_ONXTOB int_out[1]
#define FM_OCHAR int_out[2]

#define FM_CLKS int_in[1]

/* object library parameters	*/
#define OB_TREE addr_in[0]		/* all ob procedures		*/

#define OB_DELOB int_in[0]		/* ob_delete			*/

#define OB_DRAWOB int_in[0]		/* ob_draw, ob_change		*/
#define OB_DEPTH int_in[1]
#define OB_XCLIP int_in[2]
#define OB_YCLIP int_in[3]
#define OB_WCLIP int_in[4]
#define OB_HCLIP int_in[5]

#define OB_STARTOB int_in[0]		/* ob_find			*/
/* #define OB_DEPTH int_in[1] */
#define OB_MX int_in[2]
#define OB_MY int_in[3]

#define OB_PARENT int_in[0]		/* ob_add			*/
#define OB_CHILD int_in[1]
#define OB_OBJ int_in[0]		/* ob_offset, ob_order		*/
#define OB_XOFF int_out[1]
#define OB_YOFF int_out[2]
/*	New for ob_gclip 	8/6/92	*/
#define OB_GX 	int_out[3]
#define OB_GY	int_out[4]
#define OB_GW	int_out[5]
#define OB_GH	int_out[6]
#define OB_NEWPOS int_in[1]		/* ob_order			*/

/* ob_edit			*/
#define OB_CHAR int_in[1]
#define OB_IDX int_in[2]
#define OB_KIND int_in[3]
#define OB_ODX int_out[1]

#define OB_NEWSTATE int_in[6]		/* ob_change			*/
#define OB_REDRAW int_in[7]

/* June 26 1992 - ml. */		/* ob_sysvar 			*/
#define	OB_MODE	    int_in[0]	/* 8/1/92 */
#define	OB_WHICH    int_in[1]
#define	OB_I1	    int_in[2]
#define	OB_I2       int_in[3]
#define	OB_O1       int_out[1]
#define	OB_O2       int_out[2]
/**/

/* graphics library parameters	*/
#define GR_I1 int_in[0]
#define GR_I2 int_in[1]
#define GR_I3 int_in[2]
#define GR_I4 int_in[3]
#define GR_I5 int_in[4]
#define GR_I6 int_in[5]
#define GR_I7 int_in[6]
#define GR_I8 int_in[7]

#define GR_O1 int_out[1]
#define GR_O2 int_out[2]

#define GR_TREE addr_in[0]
#define GR_PARENT int_in[0]
#define GR_OBJ int_in[1]
#define GR_INSTATE int_in[2]
#define GR_OUTSTATE int_in[3]

#define GR_ISVERT int_in[2]

#define GR_MNUMBER int_in[0]
#define GR_MADDR addr_in[0]

#define GR_WCHAR int_out[1]
#define GR_HCHAR int_out[2]
#define GR_WBOX int_out[3]
#define GR_HBOX int_out[4]

#define GR_MX int_out[1]
#define GR_MY int_out[2]
#define GR_MSTATE int_out[3]
#define GR_KSTATE int_out[4]

/* scrap library parameters	*/
#define SC_PATH addr_in[0]

/* file selector library parms	*/

#define FS_IPATH  addr_in[0]
#define FS_ISEL   addr_in[1]
#define FS_LABEL  addr_in[2]
#define FS_BUTTON int_out[1]

/* wm_create		*/
#define WM_KIND int_in[0]

/* wm_open, close, del	*/
#define WM_HANDLE int_in[0]

/* wm_open, wm_create	*/
#define WM_WX int_in[1]
#define WM_WY int_in[2]
#define WM_WW int_in[3]
#define WM_WH int_in[4]

/* wm_find		*/
#define WM_MX int_in[0]
#define WM_MY int_in[1]

/* wm_calc		*/
#define WM_WCTYPE int_in[0]
#define WM_WCKIND int_in[1]
#define WM_WCIX int_in[2]
#define WM_WCIY int_in[3]
#define WM_WCIW int_in[4]
#define WM_WCIH int_in[5]
#define WM_WCOX int_out[1]
#define WM_WCOY int_out[2]
#define WM_WCOW int_out[3]
#define WM_WCOH int_out[4]

/* wm_update		*/
#define WM_BEGUP int_in[0]


#define WM_WFIELD int_in[1]

#define WM_IPRIVATE int_in[2]

#define WM_IKIND int_in[2]

/* for name and info	*/
#define WM_IOTITLE addr_in[0]

#define WM_IX int_in[2]
#define WM_IY int_in[3]
#define WM_IW int_in[4]
#define WM_IH int_in[5]

#define WM_OX int_out[1]
#define WM_OY int_out[2]
#define WM_OW int_out[3]
#define WM_OH int_out[4]

#define WM_ISLIDE int_in[2]

#define WM_IRECTNUM int_in[6]

/* resource library parameters	*/

#define RS_PFNAME addr_in[0]		/* rs_init, 			*/
#define RS_TYPE int_in[0]
#define RS_INDEX int_in[1]
#define RS_INADDR addr_in[0]
#define RS_OUTADDR addr_out[0]		

#define RS_TREE addr_in[0]
#define RS_OBJ int_in[0]
#define RS_HEADER addr_in[0]

/* shell library parameters	*/
#define SH_DOEX int_in[0]
#define SH_ISGR int_in[1]
#define SH_ISCR int_in[2]
#define SH_PCMD addr_in[0]
#define SH_PTAIL addr_in[1]

#define SH_PDATA addr_in[0]
#define SH_PBUFFER addr_in[0]

#define SH_LEN int_in[0]

#define SH_PATH addr_in[0]
#define SH_SRCH addr_in[1]

#define	SH_INPATH  addr_in[0]
#define SH_OUTPATH addr_in[1]

extern short control[C_SIZE];
extern short global[G_SIZE];
extern short int_in[I_SIZE];
extern short int_out[O_SIZE];
extern void *addr_in[AI_SIZE];
extern void *addr_out[AO_SIZE];

typedef short int16_t;

int16_t crys_if(int16_t opcode);

extern AESPB aespb;
extern char const ctrl_cnts[];
