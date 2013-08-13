/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import "NSObject.h"


@protocol SCROBrailleDriverProtocol <NSObject>
-(BOOL)setStatusCells:(const char*)cells length:(int)length;
-(BOOL)setMainCells:(const char*)cells length:(int)length;
-(int)statusSize;
-(int)mainSize;
-(id)getInputEvents;
-(int)brailleInputMode;
-(BOOL)postsKeyboardEvents;
-(BOOL)isInputEnabled;
-(BOOL)supportsBlinkingCursor;
-(id)modelIdentifier;
-(BOOL)isSleeping;
-(BOOL)isDriverLoaded;
-(BOOL)unloadDriver;
-(int)loadDriverWithIOElement:(id)ioelement;
-(unsigned)interfaceVersion;
@end

