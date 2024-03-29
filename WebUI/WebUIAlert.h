/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

@interface WebUIAlert : XXUnknownSuperclass {
	NSString* _title;
	NSString* _bodyText;
	int _type;
	int _defaultAction;
	int _otherAction;
	int _hideAction;
	int _tableAction;
	NSMutableArray* _tableItems;
	int _indexOfSelectedTableItem;
	id _context;
	id _actionHandler;
}
@property(copy, nonatomic) id actionHandler;	// @synthesize=_actionHandler
@property(retain) id context;	// converted property
@property(assign) int hideAction;	// converted property
@property(readonly, retain) NSString* title;	// converted property
@property(readonly, retain) NSString* bodyText;	// converted property
@property(readonly, assign) int type;	// converted property
@property(readonly, assign) int defaultAction;	// converted property
@property(readonly, assign) int tableAction;	// converted property
@property(readonly, retain) NSMutableArray* tableItems;	// converted property
// declared property setter: -(void)setActionHandler:(id)handler;
// declared property getter: -(id)actionHandler;
-(id)selectedTableItem;
-(void)setSelectedTableItemIndex:(int)index;
-(void)setTableItems:(id)items withTitles:(id)titles;
// converted property getter: -(id)tableItems;
// converted property getter: -(id)context;
// converted property setter: -(void)setContext:(id)context;
// converted property setter: -(void)setHideAction:(int)action;
// converted property getter: -(int)tableAction;
// converted property getter: -(int)hideAction;
// converted property getter: -(int)defaultAction;
-(int)actionForButtonTag:(unsigned)buttonTag;
-(id)buttonTitles;
-(id)_buttonTitleForAction:(int)action;
// converted property getter: -(id)bodyText;
// converted property getter: -(id)title;
// converted property getter: -(int)type;
-(void)dealloc;
-(id)initWithType:(int)type title:(id)title defaultAction:(int)action otherAction:(int)action4;
-(id)initWithType:(int)type title:(id)title bodyText:(id)text defaultAction:(int)action otherAction:(int)action5;
-(id)initWithType:(int)type title:(id)title defaultAction:(int)action otherAction:(int)action4 tableAction:(int)action5;
-(id)initWithType:(int)type title:(id)title bodyText:(id)text defaultAction:(int)action otherAction:(int)action5 tableAction:(int)action6;
@end

