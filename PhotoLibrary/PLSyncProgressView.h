/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumberFormatter, UIActivityIndicatorView, UILabel;

@interface PLSyncProgressView : XXUnknownSuperclass {
@private
	UIActivityIndicatorView* _spinner;
	UILabel* _infoLabel;
	NSNumberFormatter* _countFormatter;
	unsigned _totalCount;
	unsigned _currentCount;
	int _style;
	int _progressType;
}
@property(readonly, assign, nonatomic) unsigned totalCount;	// @synthesize=_totalCount
@property(readonly, assign, nonatomic) unsigned currentCount;	// @synthesize=_currentCount
@property(readonly, assign, nonatomic) int progressType;	// @synthesize=_progressType
@property(readonly, assign, nonatomic) int style;	// @synthesize=_style
// declared property getter: -(int)progressType;
// declared property getter: -(int)style;
// declared property getter: -(unsigned)currentCount;
// declared property getter: -(unsigned)totalCount;
-(id)_progressDescription;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)setCurrentCount:(unsigned)count totalCount:(unsigned)count2 progressType:(int)type;
-(void)dealloc;
-(id)initWithStyle:(int)style;
@end

