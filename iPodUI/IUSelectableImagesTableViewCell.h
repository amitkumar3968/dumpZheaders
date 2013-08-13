/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, CALayer, NSMutableArray;

@interface IUSelectableImagesTableViewCell : XXUnknownSuperclass {
@private
	NSMutableArray* _selectableImageViews;
	CALayer* _dimmerLayer;
	int _selectedViewIndex;
}
@property(readonly, assign, nonatomic) int selectedViewIndex;	// @synthesize=_selectedViewIndex
@property(readonly, assign, nonatomic) NSArray* selectableImageViews;	// @synthesize=_selectableImageViews
// declared property getter: -(int)selectedViewIndex;
// declared property getter: -(id)selectableImageViews;
-(void)updateConnectionProgress:(float)progress forLibraryAtIndex:(unsigned)index;
-(void)_updateSelectedImage;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)clearSelectableImageViews;
-(void)addSelectableImageView:(id)view;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
