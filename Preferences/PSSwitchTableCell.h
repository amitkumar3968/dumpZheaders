/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSControlTableCell.h"

@class UIActivityIndicatorView;

@interface PSSwitchTableCell : PSControlTableCell {
	UIActivityIndicatorView* _activityIndicator;
	BOOL _alternateSwitchColor;
}
@property(assign, nonatomic) BOOL loading;
-(void)layoutSubviews;
-(void)setValue:(id)value;
-(void)reloadWithSpecifier:(id)specifier animated:(BOOL)animated;
-(id)controlValue;
-(void)dealloc;
// declared property setter: -(void)setLoading:(BOOL)loading;
// declared property getter: -(BOOL)loading;
-(void)setCellEnabled:(BOOL)enabled;
-(BOOL)canReload;
-(id)newControl;
-(void)prepareForReuse;
-(void)refreshCellContentsWithSpecifier:(id)specifier;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;
@end

