/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import "CKContentEntryBridge.h"

@class NSMutableSet, NSMutableDictionary;

@interface CKWebviewBasedContentEntryBridge : CKContentEntryBridge {
	NSMutableDictionary* _resources;
	int _composeResourcePoolID;
	NSMutableSet* _imageDeletionSet;
}
@property(retain) id messageComposition;	// converted property
-(id)_htmlForMessagePart:(id)messagePart;
-(id)_nodeForImagePart:(id)imagePart forRichContentView:(id)richContentView;
-(id)_textView;
-(id)_imageURLForPart:(id)part partID:(id)anId;
-(void)reset;
-(void)updateComposition;
-(id)documentFragmentForPasteboardItemAtIndex:(int)index inTextContentView:(id)textContentView;
-(BOOL)hasContent;
-(void)insertMessagePart:(id)part;
-(id)attachments;
-(void)setMessageParts:(id)parts;
// converted property getter: -(id)messageComposition;
// converted property setter: -(void)setMessageComposition:(id)composition;
-(id)newContentViewWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)init;
@end
