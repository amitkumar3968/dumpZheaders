/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MFMessageDataSection.h"

@class NSData, NSString;

@interface MFBasicMessageDataSection : XXUnknownSuperclass <MFMessageDataSection> {
	NSData* _data;
	BOOL _complete;
	BOOL _partial;
	NSString* _partName;
}
@property(retain, nonatomic) NSString* partName;	// @synthesize=_partName
@property(retain, nonatomic) NSData* data;	// @synthesize=_data
@property(assign, nonatomic, getter=isComplete) BOOL complete;	// @synthesize=_complete
@property(assign, nonatomic, getter=isPartial) BOOL partial;	// @synthesize=_partial
// declared property setter: -(void)setPartName:(id)name;
// declared property getter: -(id)partName;
// declared property setter: -(void)setComplete:(BOOL)complete;
// declared property getter: -(BOOL)isComplete;
// declared property setter: -(void)setPartial:(BOOL)partial;
// declared property getter: -(BOOL)isPartial;
// declared property setter: -(void)setData:(id)data;
// declared property getter: -(id)data;
-(void)dealloc;
@end

