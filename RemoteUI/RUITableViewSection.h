/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import "RemoteUI-Structs.h"
#import "RUIElement.h"

@class UIView, NSMutableArray;
@protocol RemoteUITableFooter, RemoteUITableHeader;

@interface RUITableViewSection : RUIElement {
	NSMutableArray* _rows;
	UIView<RemoteUITableHeader>* _header;
	UIView<RemoteUITableFooter>* _footer;
	id _delegate;
@private
	UIView<RemoteUITableFooter>* _footerView;
}
@property(retain, nonatomic) UIView<RemoteUITableFooter>* footerView;	// @synthesize=_footerView
@property(retain, nonatomic) UIView<RemoteUITableHeader>* headerView;	// @synthesize=_header
@property(readonly, assign, nonatomic) NSMutableArray* rows;	// @synthesize=_rows
// declared property setter: -(void)setFooterView:(id)view;
// declared property setter: -(void)setHeaderView:(id)view;
// declared property getter: -(id)rows;
-(void)dealloc;
-(void)populatePostbackDictionary:(id)dictionary;
-(BOOL)hasCustomFooter;
-(BOOL)hasCustomHeader;
-(void)setImageAlignment:(int)alignment;
-(void)setImageSize:(CGSize)size;
-(void)setImage:(id)image;
-(void)remoteUILinkFooterActivatedLink:(id)link;
// declared property getter: -(id)footerView;
-(Class)_customFooterClass;
// declared property getter: -(id)headerView;
-(Class)_customHeaderClass;
-(void)setDelegate:(id)delegate;
-(id)init;
@end
