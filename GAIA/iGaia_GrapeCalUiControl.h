/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GAIA.framework/GAIA
 */



@protocol iGaia_GrapeCalUiControl
-(int)SystemShutdown;
-(int)SystemReboot;
-(int)SetInfoTextAtIndex:(unsigned char)index text:(const char*)text txtR:(unsigned char)r txtG:(unsigned char)g txtB:(unsigned char)b txtA:(unsigned char)a bgR:(unsigned char)r7 bgG:(unsigned char)g8 bgB:(unsigned char)b9 bgA:(unsigned char)a10;
-(int)SetScreenMessage:(const char*)message message2:(const char*)a2 R:(unsigned char)r G:(unsigned char)g B:(unsigned char)b A:(unsigned char)a;
-(int)SetScreenUnitName:(char*)name;
-(int)SetScreenBackgroundColorR:(unsigned char)r G:(unsigned char)g B:(unsigned char)b A:(unsigned char)a;
-(int)SetScreenImage:(char*)image;
@end
