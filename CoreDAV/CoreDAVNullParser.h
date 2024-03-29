/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CoreDAVResponseBodyParser.h"

@class NSError;

@interface CoreDAVNullParser : XXUnknownSuperclass <CoreDAVResponseBodyParser> {
	NSError* _parserError;
}
@property(readonly, assign) NSError* parserError;
+(BOOL)canHandleContentType:(id)type;
-(BOOL)processData:(id)data forTask:(id)task;
// declared property getter: -(id)parserError;
-(void)dealloc;
@end

