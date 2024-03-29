/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class IMHandle;

@interface CKIMComposeRecipient : XXUnknownSuperclass {
@private
	IMHandle* _handle;
}
@property(readonly, assign, nonatomic) IMHandle* handle;	// @synthesize=_handle
@property(assign) int identifier;	// converted property
// declared property getter: -(id)handle;
// converted property setter: -(void)setIdentifier:(int)identifier;
-(void)setRecord:(void*)record recordID:(int)anId identifier:(int)identifier;
-(BOOL)isRemovableFromSearchResults;
-(id)objectForDragType:(id)dragType;
-(id)supportedDragTypes;
-(void)dealloc;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)uncommentedAddress;
-(id)displayString;
-(id)compositeName;
-(id)copyWithZone:(NSZone*)zone;
-(id)unlocalizedLabel;
-(id)label;
// converted property getter: -(int)identifier;
-(id)commentedAddress;
-(id)address;
-(int)recordID;
-(void*)record;
-(int)property;
-(id)initWithRecord:(void*)record recordID:(int)anId property:(int)property identifier:(int)identifier address:(id)address;
-(id)initWithHandle:(id)handle;
@end

