/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDelegate.h"
#import "iPodUI-Structs.h"

@class UINavigationController;

@interface IUMoreListDelegateProxy : XXUnknownSuperclass <UITableViewDelegate> {
	UINavigationController* _moreListNavigationController;
	id _originalTableDelegate;
}
-(id)_table;
-(id)_navigationControllerForRow:(int)row;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(BOOL)respondsToSelector:(SEL)selector;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)forwardInvocation:(id)invocation;
-(void)dealloc;
-(id)initWithNavigationController:(id)navigationController;
@end
