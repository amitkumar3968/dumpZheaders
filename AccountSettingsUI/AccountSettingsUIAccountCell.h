/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UILabel;

@interface AccountSettingsUIAccountCell : XXUnknownSuperclass {
	UILabel* _dataclassesLabel;
	NSArray* _enabledDataclasses;
	NSArray* _supportedDataclasses;
	BOOL _useCustomDetailsText;
}
+(float)desiredRowHeight;
+(void)initialize;
-(void)layoutSubviews;
-(void)setDetailsText:(id)text;
-(id)_dataclassesLabel;
-(void)setEnabledDataclasses:(id)dataclasses supportedDataclasses:(id)dataclasses2;
-(id)enabledDataclassesTextForWidth:(float)width;
-(void)setCellEnabled:(BOOL)enabled;
-(void)dealloc;
@end
