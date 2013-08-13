/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVResponseBodyParser.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, NSMutableData;

@interface CoreDAVOctetStreamParser : XXUnknownSuperclass <CoreDAVResponseBodyParser> {
	NSMutableData* _octetStreamData;
	NSError* _parserError;
}
@property(readonly, assign) NSError* parserError;
@property(retain) NSMutableData* octetStreamData;	// @synthesize=_octetStreamData
+(BOOL)canHandleContentType:(id)type;
// declared property setter: -(void)setOctetStreamData:(id)data;
// declared property getter: -(id)octetStreamData;
// declared property getter: -(id)parserError;
-(BOOL)processData:(id)data forTask:(id)task;
-(id)description;
-(void)dealloc;
-(id)init;
@end
