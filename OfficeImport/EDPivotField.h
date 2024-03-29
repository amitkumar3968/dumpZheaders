/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotField : XXUnknownSuperclass {
@private
	int mAxis;
	bool mCompact;
	bool mDataField;
	bool mShowDefaultSubTotal;
	bool mInsertBlankRow;
	bool mOutlineItems;
	bool mShowAllItems;
	bool mSubtotalTop;
	unsigned mNumFmtId;
	EDCollection* mPivotFieldItems;
}
@property(assign) int axis;	// converted property
@property(assign) unsigned numFmtId;	// converted property
@property(assign) bool subtotalTop;	// converted property
@property(assign) bool showAllItems;	// converted property
@property(assign) bool outlineItems;	// converted property
@property(assign) bool insertBlankRow;	// converted property
@property(assign) bool showDefaultSubTotal;	// converted property
@property(assign) bool dataField;	// converted property
@property(assign) bool compact;	// converted property
+(id)pivotField;
-(id)pivotFieldItems;
// converted property setter: -(void)setAxis:(int)axis;
// converted property getter: -(int)axis;
// converted property setter: -(void)setNumFmtId:(unsigned)anId;
// converted property getter: -(unsigned)numFmtId;
// converted property setter: -(void)setSubtotalTop:(bool)top;
// converted property getter: -(bool)subtotalTop;
// converted property setter: -(void)setShowAllItems:(bool)items;
// converted property getter: -(bool)showAllItems;
// converted property setter: -(void)setOutlineItems:(bool)items;
// converted property getter: -(bool)outlineItems;
// converted property setter: -(void)setInsertBlankRow:(bool)row;
// converted property getter: -(bool)insertBlankRow;
// converted property setter: -(void)setShowDefaultSubTotal:(bool)total;
// converted property getter: -(bool)showDefaultSubTotal;
// converted property setter: -(void)setDataField:(bool)field;
// converted property getter: -(bool)dataField;
// converted property setter: -(void)setCompact:(bool)compact;
// converted property getter: -(bool)compact;
-(void)dealloc;
-(id)init;
@end

