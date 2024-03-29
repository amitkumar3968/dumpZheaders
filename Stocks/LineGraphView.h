/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import "Stocks-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, TintedView, UIImage;

@interface LineGraphView : XXUnknownSuperclass {
	BOOL _showingTintedLine;
	UIImage* _lineImage;
	UIView* _tintedLineClipView;
	TintedView* _tintedLineView;
}
+(CGGradientRef)_gradient;
-(void).cxx_destruct;
-(void)resizeSelectedLineClipViewWithLeftX:(float)leftX rightX:(float)x;
-(void)setShowingSelectedLine:(BOOL)line;
-(void)setGraphImageSet:(id)set;
-(void)setSelectedLineImage:(id)image;
-(id)init;
@end

