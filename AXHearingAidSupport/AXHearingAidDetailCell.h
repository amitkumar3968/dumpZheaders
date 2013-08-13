/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, UIActivityIndicatorView, NSNumberFormatter, AXHearingAidDevice;

@interface AXHearingAidDetailCell : XXUnknownSuperclass {
	AXHearingAidDevice* _device;
	UILabel* _leftLabel;
	UIImageView* _leftBattery;
	UILabel* _rightLabel;
	UIImageView* _rightBattery;
	UIActivityIndicatorView* _loadingIndicator;
	NSNumberFormatter* _numberFormatter;
}
@property(retain, nonatomic) AXHearingAidDevice* device;	// @synthesize=_device
// declared property setter: -(void)setDevice:(id)device;
// declared property getter: -(id)device;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityValue;
-(void)layoutSubviews;
-(void)updateAvailability;
-(id)imageForBatteryLevel:(float)batteryLevel;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;
@end
