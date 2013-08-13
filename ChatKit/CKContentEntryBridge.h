/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol CKContentEntryBridgeClient;

@interface CKContentEntryBridge : XXUnknownSuperclass {
@private
	int _outgoingBubbleColor;
	NSObject<CKContentEntryBridgeClient>* _entryView;
}
@property(assign, nonatomic) int outgoingBubbleColor;	// @synthesize=_outgoingBubbleColor
@property(assign, nonatomic) NSObject<CKContentEntryBridgeClient>* contentEntryView;	// @synthesize=_entryView
@property(retain) id messageParts;	// converted property
@property(retain) id messageComposition;	// converted property
+(id)newContentEntryBridge;
// declared property getter: -(int)outgoingBubbleColor;
// declared property setter: -(void)setContentEntryView:(id)view;
// declared property getter: -(id)contentEntryView;
-(void)reset;
-(void)updateComposition;
-(id)documentFragmentForPasteboardItemAtIndex:(int)index inTextContentView:(id)textContentView;
-(id)newContentViewWithFrame:(CGRect)frame;
-(BOOL)hasContent;
-(void)insertMessagePart:(id)part;
-(id)attachments;
// converted property getter: -(id)messageParts;
// converted property setter: -(void)setMessageParts:(id)parts;
// converted property getter: -(id)messageComposition;
// converted property setter: -(void)setMessageComposition:(id)composition;
// declared property setter: -(void)setOutgoingBubbleColor:(int)color;
-(void)dealloc;
@end
