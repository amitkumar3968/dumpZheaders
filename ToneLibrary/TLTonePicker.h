/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "ToneLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class TLToneTableController, UITableView, NSString;

@interface TLTonePicker : XXUnknownSuperclass {
@private
	UITableView* _table;
	TLToneTableController* _tableController;
	id _delegate;
	Class _customTableViewClass;
}
@property(retain, nonatomic) NSString* vibrationAccountIdentifier;	// @dynamic
@property(assign, nonatomic) id delegate;	// @synthesize=_delegate
@property(retain) id selectedVibrationIdentifier;	// converted property
@property(assign) BOOL allowsDeletingCurrentSystemVibration;	// converted property
@property(retain) id selectedRingtoneIdentifier;	// converted property
+(id)tonePickerWithFrame:(CGRect)frame;
+(id)texttonePickerWithFrame:(CGRect)frame;
+(id)ringtonePickerWithFrame:(CGRect)frame;
// declared property getter: -(id)delegate;
-(void)ringtoneTableController:(id)controller willPlayRingtoneWithIdentifier:(id)identifier;
-(void)ringtoneTableController:(id)controller selectedMediaItemWithIdentifier:(id)identifier;
-(void)ringtoneTableController:(id)controller selectedRingtoneWithIdentifier:(id)identifier;
-(float)contentHeight;
-(void)setCustomTableViewCellClass:(Class)aClass;
-(void)setCustomTableViewClass:(Class)aClass;
-(void)finishedWithPicker;
-(void)stopPlayingWithFadeOut:(BOOL)fadeOut;
-(void)stopPlaying;
-(void)displayScrollerIndicators;
-(void)layoutSubviews;
-(void)didMoveToWindow;
// converted property setter: -(void)setSelectedVibrationIdentifier:(id)identifier;
// converted property getter: -(id)selectedVibrationIdentifier;
// converted property setter: -(void)setAllowsDeletingCurrentSystemVibration:(BOOL)vibration;
// converted property getter: -(BOOL)allowsDeletingCurrentSystemVibration;
-(void)setShowsNoVibrationSelected:(BOOL)selected;
-(void)setShowsNoneVibration:(BOOL)vibration;
-(void)setShowsUserGeneratedVibrations:(BOOL)vibrations;
-(void)setShowsDefaultVibration:(BOOL)vibration;
-(void)setShowsVibrations:(BOOL)vibrations;
-(void)removeMediaItems:(id)items;
-(void)addMediaItems:(id)items;
-(void)setSelectedMediaIdentifier:(id)identifier;
-(id)selectedIdentifier:(BOOL*)identifier;
// converted property getter: -(id)selectedRingtoneIdentifier;
// converted property setter: -(void)setSelectedRingtoneIdentifier:(id)identifier;
-(void)ringtoneManagerContentsChanged:(id)changed;
-(void)_buildTable;
-(void)buildUIWithAVController:(id)avcontroller filter:(unsigned)filter tonePicker:(BOOL)picker;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setContext:(int)context;
-(void)setShowsStoreButtonInNavigationBar:(BOOL)navigationBar;
-(void)setMediaAtTop:(BOOL)top;
-(void)setShowsMedia:(BOOL)media;
-(void)setShowsNothingSelected:(BOOL)selected;
-(void)setNoneString:(id)string;
// declared property setter: -(void)setVibrationAccountIdentifier:(id)identifier;
// declared property getter: -(id)vibrationAccountIdentifier;
-(void)setDefaultIdentifier:(id)identifier;
-(void)setNoneAtTop:(BOOL)top;
-(void)setShowsNone:(BOOL)none;
-(void)setShowsDefault:(BOOL)aDefault;
-(void)setShowsRingtonesStore:(BOOL)store;
-(void)setAVController:(id)controller;
-(void)_reloadData;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame avController:(id)controller filter:(unsigned)filter tonePicker:(BOOL)picker;
-(id)initWithFrame:(CGRect)frame avController:(id)controller;
-(id)initWithFrame:(CGRect)frame;
@end

