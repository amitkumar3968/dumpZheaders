/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDPane : XXUnknownSuperclass {
@private
	double mXSplitPosition;
	double mYSplitPosition;
	EDReference* mTopLeftCell;
	int mActivePane;
}
@property(assign) int activePane;	// converted property
@property(retain) id topLeftCell;	// converted property
@property(assign) double ySplitPosition;	// converted property
@property(assign) double xSplitPosition;	// converted property
+(id)pane;
// converted property setter: -(void)setActivePane:(int)pane;
// converted property getter: -(int)activePane;
// converted property setter: -(void)setTopLeftCell:(id)cell;
// converted property getter: -(id)topLeftCell;
// converted property setter: -(void)setYSplitPosition:(double)position;
// converted property getter: -(double)ySplitPosition;
// converted property setter: -(void)setXSplitPosition:(double)position;
// converted property getter: -(double)xSplitPosition;
-(void)dealloc;
-(id)init;
@end

