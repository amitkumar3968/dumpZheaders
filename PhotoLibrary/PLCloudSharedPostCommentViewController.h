/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PLModalDimmingContained.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"
#import "UITextViewDelegate.h"

@class UINavigationBar, UIImageView, UILabel, NSString, UIView, UITextView, PLSheetCardView, NSMutableArray;

@interface PLCloudSharedPostCommentViewController : XXUnknownSuperclass <UITextViewDelegate, PLModalDimmingContained> {
	UILabel* _textPlaceholderLabel;
	UILabel* _albumNameView;
	UIImageView* _cloudIcon;
	UINavigationBar* _navBar;
	UIView* _textViewWrapper;
	UITextView* _textView;
	PLSheetCardView* _backgroundView;
	UIImageView* _paperclipView;
	id _completionHandler;
	NSMutableArray* _previewViews;
	NSMutableArray* _lines;
	NSMutableArray* _attachments;
	unsigned _keyPathObserverAdded : 1;
@private
	NSString* _placeholderText;
	NSString* _albumName;
}
@property(copy, nonatomic) NSString* albumName;	// @synthesize=_albumName
@property(readonly, assign, nonatomic) NSString* commentText;
@property(copy, nonatomic) NSString* placeholderText;	// @synthesize=_placeholderText
@property(copy, nonatomic) id completionHandler;	// @synthesize=_completionHandler
// declared property setter: -(void)setCompletionHandler:(id)handler;
// declared property getter: -(id)completionHandler;
// declared property setter: -(void)setAlbumName:(id)name;
// declared property getter: -(id)albumName;
// declared property setter: -(void)setPlaceholderText:(id)text;
// declared property getter: -(id)placeholderText;
-(void)addImage:(id)image;
-(void)_postAction:(id)action;
-(void)_cancelAction:(id)action;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)keyboardWillShow:(id)keyboard;
-(void)_updateKeyboard;
-(void)_buildLineRulesForOrientation:(int)orientation;
-(void)_updateAttachmentsForOrientation:(int)orientation;
-(CGRect)previewFrameForOrientation:(int)orientation;
-(void)_updateTextViewAndPaperClipForOrientation:(int)orientation;
-(void)viewWillLayoutSubviews;
-(void)_updateNavigationBarToOrientation:(int)orientation;
-(void)loadView;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)_updateAlbumNameForOrientation:(int)orientation;
-(void)textViewDidChange:(id)textView;
// declared property getter: -(id)commentText;
-(CGRect)_albumNameRectForOrientation:(int)orientation;
-(id)_contentView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(CGSize)preferredSizeInParentViewController;
-(CGPoint)preferredOffsetInParentViewController;
@end
