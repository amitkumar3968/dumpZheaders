/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "WAKView.h"


@interface WAKClipView : WAKView {
@private
	WAKView* _documentView;
	BOOL _copiesOnScroll;
}
@property(assign, nonatomic) BOOL copiesOnScroll;	// @synthesize=_copiesOnScroll
@property(readonly, assign, nonatomic) WAKView* documentView;	// @synthesize=_documentView
// declared property setter: -(void)setCopiesOnScroll:(BOOL)scroll;
// declared property getter: -(BOOL)copiesOnScroll;
// declared property getter: -(id)documentView;
-(CGRect)documentVisibleRect;
-(void)_setDocumentView:(id)view;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

