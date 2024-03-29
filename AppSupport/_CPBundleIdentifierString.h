/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface _CPBundleIdentifierString : XXUnknownSuperclass {
	NSString* _executablePath;
	NSString* _bundleIdentifierOrProcessName;
	BOOL _isProcessName;
}
-(void)getCharacters:(unsigned short*)characters range:(NSRange)range;
-(unsigned short)characterAtIndex:(unsigned)index;
-(unsigned)length;
-(BOOL)_isProcessName;
-(void)_loadBundleIdentifierOrProcessName;
-(void)dealloc;
-(id)_initWithExecutablePath:(id)executablePath;
@end

