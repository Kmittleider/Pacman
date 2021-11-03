
//{{BLOCK(pelletMap)

//======================================================================
//
//	pelletMap, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 21 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 672 + 2048 = 3232
//
//	Time-stamp: 2021-11-02, 21:09:13
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_PELLETMAP_H
#define GRIT_PELLETMAP_H

#define pelletMapTilesLen 672
extern const unsigned short pelletMapTiles[336];

#define pelletMapMapLen 2048
extern const unsigned short pelletMapMap[1024];

#define pelletMapPalLen 512
extern const unsigned short pelletMapPal[256];

#endif // GRIT_PELLETMAP_H

//}}BLOCK(pelletMap)
