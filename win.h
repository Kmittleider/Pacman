
//{{BLOCK(win)

//======================================================================
//
//	win, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 49 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 1568 + 2048 = 4128
//
//	Time-stamp: 2021-11-02, 11:07:52
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_WIN_H
#define GRIT_WIN_H

#define winTilesLen 1568
extern const unsigned short winTiles[784];

#define winMapLen 2048
extern const unsigned short winMap[1024];

#define winPalLen 512
extern const unsigned short winPal[256];

#endif // GRIT_WIN_H

//}}BLOCK(win)
