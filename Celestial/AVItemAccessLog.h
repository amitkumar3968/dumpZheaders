/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"

@class AVItemAccessLogInternal, NSArray;

@interface AVItemAccessLog : XXUnknownSuperclass <NSCopying> {
@private
	AVItemAccessLogInternal* _playerItemAccessLog;
}
@property(readonly, assign, nonatomic) NSArray* events;
// declared property getter: -(id)events;
-(unsigned)extendedLogDataStringEncoding;
-(id)extendedLogData;
-(void)dealloc;
-(void)finalize;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(id)initWithLogArray:(id)logArray;
-(id)init;
@end

