#include "portab.h"

char const ctrl_cnts[] = {
/* Application Manager		*/
	0, 1, 0,							/* func 010     */
	2, 1, 1,							/* func 011     */
	2, 1, 1,							/* func 012     */
	0, 1, 1,							/* func 013     */
	2, 1, 1,							/* func 014     */
	1, 1, 1,							/* func 015     */
	0, 0, 0,							/* func 016     */
	0, 0, 0,							/* func 017     */
	0, 0, 0,							/* func 018     */
	0, 1, 0,							/* func 019     */
/* Event Manager		*/
	0, 1, 0,							/* func 020     */
	3, 5, 0,							/* func 021     */
	5, 5, 0,							/* func 022     */
	0, 1, 1,							/* func 023     */
	2, 1, 0,							/* func 024     */
	16, 7, 1,							/* func 025     */
	2, 1, 0,							/* func 026     */
	0, 0, 0,							/* func 027     */
	0, 0, 0,							/* func 028     */
	0, 0, 0,							/* func 029     */
/* Menu Manager			*/
	1, 1, 1,							/* func 030     */
	2, 1, 1,							/* func 031     */
	2, 1, 1,							/* func 032     */
	2, 1, 1,							/* func 033     */
	1, 1, 2,							/* func 034     */
	1, 1, 1,							/* func 035     */
	2, 1, 2,							/* menu_unregister */
	2, 1, 2,							/* menu_popup */
	3, 1, 1,							/* menu_click */
	1, 1, 1,							/* menu_attach */
/* Object Manager		*/
	2, 1, 1,							/* func 040     */
	1, 1, 1,							/* func 041     */
	6, 1, 1,							/* func 042     */
	4, 1, 1,							/* func 043     */
	1, 3, 1,							/* func 044     */
	2, 1, 1,							/* func 045     */
	4, 2, 1,							/* func 046     */
	8, 1, 1,							/* func 047     */
	0, 0, 0,							/* func 048     */
	0, 0, 0,							/* func 049     */
/* Form Manager			*/
	1, 1, 1,							/* func 050     */
	9, 1, 0,							/* form_dial */
	1, 1, 1,							/* func 052     */
	1, 1, 0,							/* func 053     */
	0, 5, 1,							/* func 054     */
	0, 0, 0,							/* func 055     */
	0, 0, 0,							/* func 056     */
	0, 0, 0,							/* func 057     */
	0, 0, 0,							/* func 058     */
	0, 0, 0,							/* func 059     */
/* Dialog Manager		*/
	0, 0, 0,							/* func 060     */
	0, 0, 0,							/* func 061     */
	0, 0, 0,							/* func 062     */
	0, 0, 0,							/* func 063     */
	0, 0, 0,							/* func 064     */
	0, 0, 0,							/* func 065     */
	0, 0, 0,							/* func 066     */
	0, 0, 0,							/* func 067     */
	0, 0, 0,							/* func 068     */
	0, 0, 0,							/* func 069     */
/* Graphics Manager	*/
	4, 3, 0,							/* func 070     */
	8, 3, 0,							/* func 071     */
	6, 1, 0,							/* func 072     */
	8, 1, 0,							/* func 073     */
	8, 1, 0,							/* func 074     */
	4, 1, 1,							/* func 075     */
	3, 1, 1,							/* func 076     */
	0, 5, 0,							/* func 077     */
	1, 1, 1,							/* func 078     */
	0, 5, 0,							/* func 079     */
/* Scrap Manager		*/
	0, 1, 1,							/* func 080     */
	0, 1, 1,							/* func 081     */
	0, 0, 0,							/* func 082     */
	0, 0, 0,							/* func 083     */
	0, 0, 0,							/* func 084     */
	0, 0, 0,							/* func 085     */
	0, 0, 0,							/* func 086     */
	0, 0, 0,							/* func 087     */
	0, 0, 0,							/* func 088     */
	0, 0, 0,							/* func 089     */
/* fseler Manager		*/
	0, 2, 2,							/* func 090     */
	0, 3, 2,							/* fsel_exinput */
	0, 0, 0,							/* func 092     */
	0, 0, 0,							/* func 093     */
	0, 0, 0,							/* func 094     */
	0, 0, 0,							/* func 095     */
	0, 0, 0,							/* func 096     */
	0, 0, 0,							/* func 097     */
	0, 0, 0,							/* func 098     */
	0, 0, 0,							/* func 099     */
/* Window Manager		*/
	5, 1, 0,							/* func 100     */
	5, 1, 0,							/* func 101     */
	1, 1, 0,							/* func 102     */
	1, 1, 0,							/* func 103     */
	2, 5, 0,							/* func 104     */
	6, 1, 0,							/* func 105     */
	2, 1, 0,							/* func 106     */
	1, 1, 0,							/* func 107     */
	6, 5, 0,							/* func 108     */
	0, 0, 0,							/* func 109     */
/* Resource Manager		*/
	0, 1, 1,							/* func 110     */
	0, 1, 0,							/* func 111     */
	2, 1, 0,							/* func 112     */
	2, 1, 1,							/* func 113     */
	1, 1, 1,							/* func 114     */
	1, 0, 1,							/* rsrc_rcfix */
	0, 0, 0,							/* func 116     */
	0, 0, 0,							/* func 117     */
	0, 0, 0,							/* func 118     */
	0, 0, 0,							/* func 119     */
/* Shell Manager		*/
	0, 1, 2,							/* func 120     */
	3, 1, 2,							/* func 121     */
	1, 1, 1,							/* func 122     */
	1, 1, 1,							/* func 123     */
	0, 1, 1,							/* func 124     */
	0, 1, 2,							/* func 125     */
	0, 0, 0,							/* func 126     */
	0, 0, 0,							/* func 127     */
	0, 0, 0,							/* func 128     */
	0, 0, 0,							/* func 129     */
/* extended */
	1, 5, 0,							/* appl_getinfo */
};
