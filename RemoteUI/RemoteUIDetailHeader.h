/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import "RemoteUITableHeader.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel;

@interface RemoteUIDetailHeader : XXUnknownSuperclass <RemoteUITableHeader> {
	UILabel* _headerLabel;
	UILabel* _detailHeaderLabel;
	BOOL _isFirstSection;
}
-(float)headerHeightForWidth:(float)width inTableView:(id)tableView;
-(void)layoutSubviews;
-(void)setSectionIsFirst:(BOOL)first;
-(void)dealloc;
-(id)initWithAttributes:(id)attributes;
@end

