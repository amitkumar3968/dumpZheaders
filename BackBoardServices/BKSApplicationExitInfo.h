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


@interface BKSApplicationExitInfo : XXUnknownSuperclass <NSCopying, BKSXPCCoding> {
@private
	long long _status;
	int _terminationReason;
	BOOL _wasReceiver;
}
@property(assign, nonatomic) BOOL wasReceiver;	// @synthesize=_wasReceiver
@property(assign, nonatomic) int terminationReason;	// @synthesize=_terminationReason
@property(assign, nonatomic) long long status;	// @synthesize=_status
// declared property setter: -(void)setWasReceiver:(BOOL)receiver;
// declared property getter: -(BOOL)wasReceiver;
// declared property setter: -(void)setTerminationReason:(int)reason;
// declared property getter: -(int)terminationReason;
// declared property setter: -(void)setStatus:(long long)status;
// declared property getter: -(long long)status;
-(void)encodeWithXPCDictionary:(id)xpcdictionary;
-(id)initWithXPCDictionary:(id)xpcdictionary;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
@end
