/*
 *
 *  Copyright (C) 2007-2020 SimplyCore, LLC
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *
 */

#ifndef IIllIIlII
#define IIllIIlII
#include "apitypes.h"
#pragma pack(push,1)
enum{lIlIllIl=(0x641+8313-0x26ba),
lIIIIIIl,
IllIllII,
llIlllIl,
IlllIIIl,
IIlIlIll,
IllllllI,
llIIIIIl,
llIIllll,
IIlIllII,
IlIllIIlI,llIIlIlI,
lIllIIIl,
lIlIlIll,
llllIIlI,
IIIIIllIlI,
lIIllIIIlI,
IIIllIIIl,};enum{IlIllIlII=(0x6a4+556-0x8d0),lIIllllIl,IllIllIII,IIIllIIII,
IlIllIIIl,IIlIlIIII,IlIIlIlIl,IllIlIllI,IIIIIlIIl,lIllllIll,llIIlllII,llIllIIIl,
llIIIIIIl,lIlllIIII,IIlIlIllI,IIllIIIII,IIllIlIII,llIllllll};
#define lIllII 			(0xfb4+5926-0x26d9)
#define lllllII 		(0x92f+4103-0x1934)
#define IlIllllII          	(0x10fd+4649-0x2322)
#define llIllllIIl 			(0x6eb+5147-0x1afe)
typedef struct{lllIII lIIlIl:(0x37d+331-0x498);
lllIII IllIIll:(0x19f3+1345-0x1f24);lllII lIlIl;
lllII lIIlIII;
lllII Status;lllII Context;}__attribute__((packed))llIlll,*llIlllIIl;
#define IIIllIIllI	(0x504+5920-0x1c24)
#define IIlIllIII		(0x1fd5+1365-0x2529)
#define IIIIlIIl			(0xc99+3807-0x1b78)
#define IIlllllII	(0x1d77+564-0x1faa)
#define IlllIIIlI	(0x5c1+5711-0x1c0e)
#define lIIlllIIl	(0x1276+2093-0x1aa0)
typedef union{struct{lIlIlI llllIllI;};struct{lIlIlI llIlIIlI:
(0x3b6+8802-0x2617);lIlIlI lIIlIIlll:(0x3da+4198-0x143f);lIlIlI lIIIIIlIl:
(0x11db+4522-0x2384);lIlIlI lllIllIlI:(0x565+267-0x66f);lIlIlI IIlIIIlll:
(0x9b3+6405-0x22b7);lIlIlI lllIIlIIl:(0x194b+1239-0x1e21);lIlIlI IlIIlllII:
(0xeb7+2217-0x175e);lIlIlI IllIlIlll:(0x8d3+1909-0x1046);lIlIlI lIIllIlIl:
(0xe2d+3248-0x1adb);lIlIlI lIIllIllI:(0x127f+2449-0x1c0e);lIlIlI lIllIlIlI:
(0x1693+3429-0x23f6);};}lIIIIlIIl,*IlIIlllllI;typedef struct{llIlll IlllII;
IIIlll IIllIlI;
IIIlll IlIIIIll;
IIIlll lllIlIII;
IIIlll llIllIII;lIlIlI IIIIIlII;lllII IIllI;}__attribute__((packed))IIlllIllI,*
lIllIllIl;typedef struct{llIlll IlllII;IIIlll lllllIII;IIIlll IIlIlIlI;struct{
IIIlll IllllII;IIIlll IlIlllI;}__attribute__((packed))lIIIIIl[
(0xc5b+1709-0x1307)];}__attribute__((packed))llIllIllI,*IIIlllllll;typedef 
struct{llIlll IlllII;IIIlll IllllII;IIIlll IlIlllI;}__attribute__((packed))
IIIIIllIl,*IIIlIlllIl;
#define IIllIllII			(0xe04+169-0xead)
#define lIIlIlIIl				(0xb4d+2857-0x1675)
#define IIllIllIl				(0x973+2829-0x147e)
#define lIlIlIIll			(0x1942+1414-0x1ec5)
#define IIllIlIll		(0x535+2548-0xf29)
#define IllIIlllI		(0x8ba+6646-0x22af)
#define lllIIlIII		(0x835+1910-0xfa9)
#define IllIIIIlI			(0xf67+956-0x1320)
#define IllllIIlIl			(0x7e8+4133-0x180c)
#define llIIIIIlIl			(0x60f+6596-0x1fd3)
typedef struct{llIlll IlllII;IIIlll Endpoint;IIIlll Flags;union{struct{IIIlll 
IIIlIIIIII:(0x99d+4057-0x1971);IIIlll IIlllIIIlI:(0x31f+9199-0x270c);IIIlll 
lIIllIlll:(0x236+3986-0x11c7);}__attribute__((packed))llllllllIl;IIIlll IIllIlI;
}__attribute__((packed));IIIlll IIlIIlII;lIlIlI llllIllI;lIlIlI IIlIllIlI;lllII 
IIllI;}__attribute__((packed))llllllIIl,*lllllIlIIl;typedef struct{llIlll IlllII
;lllII IIllI;IIIlll Endpoint;IIIlll Flags;}__attribute__((packed))IlIIIlIlI,*
IIIlIIlIlI;typedef struct{llIlll IlllII;lllII IIllI;lllII Interval;IIIlll 
Endpoint;IIIlll Flags;}__attribute__((packed))IIlIlIIIl,*IlIIllIIIl;typedef 
struct{llIlll IlllII;IIIlll Flags;
IIIlll Endpoint;}__attribute__((packed))IIIIlIlIl,*lIlIIllIlI;typedef struct{
llIlll IlllII;lllII lIIllIll;}__attribute__((packed))IllIlIIll,*lIIIIlIlII;
#define llllllll(IIlIl) (sizeof(IlIlIIll) - sizeof(lllllIll) + \
			sizeof(lllllIll)*(IIlIl)->lIIIl.lIllIII)
typedef struct{lllII Offset;lllII Length;lllII Status;}__attribute__((packed))
lllllIll,*lIIIIIIlll;typedef struct{llIlll IlllII;IIIlll Endpoint;IIIlll Flags;
lllII Interval;lllII IIIlIIIl;lllII lIllIII;lllII lIlIllII;lllII IIllI;lllllIll 
llIIlII[(0x2122+13-0x212e)];}__attribute__((packed))IlIlIIll,*IlllIllIll;
#define IIIIlIIll(IIIlIIIIl) (sizeof(lIIlllIII)-(0x1c57+2041-0x244f)+(IIIlIIIIl)\
)
#define IlIIIlllII(IIllIIIIl) ((IIllIIIIl)->IIIlI.lIlIl-(sizeof(lIIlllIII)-\
(0x1249+4364-0x2354)))
typedef struct{llIlll IlllII;IIIlll IIlIIlIlII[(0x286+5947-0x19c0)];}
__attribute__((packed))lIIlllIII,*IIIIIllIII;
#define lllIlllIl		(0xf0b+1006-0x12f8)
#define IIllllllI		(0x23d4+594-0x2624)
typedef struct{llIlll IlllII;lllII lllIIIIl;}__attribute__((packed))llIlIIlll,*
llIlIIllIl;typedef struct{llIlll IlllII;}__attribute__((packed))lIIlIIIll,*
lllllIlIlI;typedef struct{llIlll IlllII;}__attribute__((packed))IlIllIIll,*
lIIlIlllll;typedef struct{llIlll IlllII;IIIlll Endpoint;IIIlll Flags;}
__attribute__((packed))IlllIlIIl,*lIlIIIIIll;
typedef union{llIlll IIIlI;IIlllIllI lIlIll;llIllIllI IlIlIll;IIIIIllIl lIIlIlI;
llllllIIl llIlII;IlIIIlIlI IlIll;IIlIlIIIl lIllIl;IIIIlIlIl IIlIIll;IllIlIIll 
llIlIllI;IlIlIIll lIIIl;lIIlllIII IllIIlIII;llIlIIlll llIlIIll;lIIlIIIll 
IllIllIIl;IlIllIIll IIIlIllII;IlllIlIIl lIlIIllI;}__attribute__((packed))
IIlIllIll,*IllII;
#pragma pack(pop)
#endif 

