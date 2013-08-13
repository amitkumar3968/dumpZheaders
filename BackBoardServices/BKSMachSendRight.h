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


@interface BKSMachSendRight : XXUnknownSuperclass <NSCopying, BKSXPCCoding> {
@private
	unsigned _sendRight;
}
@property(assign, nonatomic) unsigned sendRight;	// @synthesize=_sendRight
+(id)wrapSendRight:(unsigned)right;
+(BOOL)portRightIsUsable:(unsigned)usable;
// declared property setter: -(void)setSendRight:(unsigned)right;
// declared property getter: -(unsigned)sendRight;
-(void)encodeWithXPCDictionary:(id)xpcdictionary;
-(id)initWithXPCDictionary:(id)xpcdictionary;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isUsable;
-(void)dealloc;
-(id)_initWithSendRight:(unsigned)sendRight insertRight:(BOOL)right;
@end

