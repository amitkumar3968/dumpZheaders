/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DataDetectorsUI-Structs.h"
#import "UIActionSheetDelegate.h"

@class NSOperationQueue, NSObject, DDActionController;
@protocol OS_dispatch_queue;

@interface DDDetectionController : XXUnknownSuperclass <UIActionSheetDelegate> {
@private
	NSOperationQueue* _fullScannerQueue;
	NSOperationQueue* _urlScannerQueue;
	CFDictionaryRef _frameToOperationTable;
	CFSetRef _ignoreUIKitNotificationsFrames;
	NSObject<OS_dispatch_queue>* _protectQueue;
	CFDictionaryRef _frameToResultsTable;
	CFDictionaryRef _frameToContextesTable;
	DDActionController* _actionController;
}
+(id)tapAndHoldSchemes;
+(id)sharedController;
-(DDResult*)resultForDOMNode:(id)domnode forFrame:(id)frame;
-(DDResult*)_resultForAnchor:(id)anchor forFrame:(id)frame context:(id*)context;
-(DDResult*)_resultForURL:(id)url forFrame:(id)frame context:(id*)context;
-(DDResult*)_resultForIdentifier:(id)identifier forFrame:(id)frame context:(id*)context;
-(BOOL)shouldImmediatelyShowActionSheetForURL:(id)url forFrame:(id)frame;
-(void)performAction:(id)action inView:(id)view withPopoverController:(id)popoverController interactionDelegate:(id)delegate;
-(id)defaultActionForDOMNode:(id)domnode forFrame:(id)frame;
-(id)defaultActionForAnchor:(id)anchor url:(id)url forFrame:(id)frame;
-(id)actionsForDOMNode:(id)domnode forFrame:(id)frame;
-(id)actionsForAnchor:(id)anchor url:(id)url forFrame:(id)frame;
-(DDResult*)resultForNode:(id)node url:(id)url frame:(id)frame contextRef:(id*)ref;
-(void)_doURLificationOnWebThreadAndRelease:(id)release;
-(void)frameWillBeRemoved:(id)frame;
-(void)cancelURLificationForFrame:(id)frame;
-(void)_enqueueOperationAndRelease:(id)release;
-(void)setIgnoreUIKitNotifications:(BOOL)notifications forFrame:(id)frame;
-(void)startURLificationForFrame:(id)frame detectedTypes:(unsigned)types;
-(void)startURLificationForFrame:(id)frame detectedTypes:(unsigned)types options:(int)options;
-(void)_reallyStartURLificationForOperation:(id)operation;
-(void)resetResultsForFrame:(id)frame;
-(void)setContext:(id)context forFrame:(id)frame;
-(void)setResults:(CFArrayRef)results forFrame:(id)frame;
-(id)_newOperationForFrame:(id)frame;
-(void)dealloc;
-(id)init;
@end

