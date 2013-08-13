/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "BKSXPCCoding.h"
#import "BackBoardServices-Structs.h"

@class NSDate;

@interface BKSWorkspaceActivationToken : XXUnknownSuperclass <NSCopying, BKSXPCCoding> {
@private
	NSDate* _timestamp;
}
@property(retain, nonatomic) NSDate* timestamp;	// @synthesize=_timestamp
+(id)token;
// declared property setter: -(void)setTimestamp:(id)timestamp;
// declared property getter: -(id)timestamp;
-(void)encodeWithXPCDictionary:(id)xpcdictionary;
-(id)initWithXPCDictionary:(id)xpcdictionary;
-(id)copyWithZone:(NSZone*)zone;
-(id)shortDescription;
-(id)description;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
-(id)init;
@end

