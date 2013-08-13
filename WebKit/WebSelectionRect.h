/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>


@interface WebSelectionRect : NSObject <NSCopying> {
@private
	CGRect m_rect;
	int m_writingDirection;
	BOOL m_isLineBreak;
	BOOL m_isFirstOnLine;
	BOOL m_isLastOnLine;
	BOOL m_containsStart;
	BOOL m_containsEnd;
	BOOL m_isInFixedPosition;
	BOOL m_isHorizontal;
}
@property(assign, nonatomic) BOOL isHorizontal;	// @synthesize=m_isHorizontal
@property(assign, nonatomic) BOOL isInFixedPosition;	// @synthesize=m_isInFixedPosition
@property(assign, nonatomic) BOOL containsEnd;	// @synthesize=m_containsEnd
@property(assign, nonatomic) BOOL containsStart;	// @synthesize=m_containsStart
@property(assign, nonatomic) BOOL isLastOnLine;	// @synthesize=m_isLastOnLine
@property(assign, nonatomic) BOOL isFirstOnLine;	// @synthesize=m_isFirstOnLine
@property(assign, nonatomic) BOOL isLineBreak;	// @synthesize=m_isLineBreak
@property(assign, nonatomic) int writingDirection;	// @synthesize=m_writingDirection
@property(assign, nonatomic) CGRect rect;	// @synthesize=m_rect
+(CGRect)endEdge:(id)edge;
+(CGRect)startEdge:(id)edge;
+(id)selectionRect;
// declared property setter: -(void)setIsHorizontal:(BOOL)horizontal;
// declared property getter: -(BOOL)isHorizontal;
// declared property setter: -(void)setIsInFixedPosition:(BOOL)fixedPosition;
// declared property getter: -(BOOL)isInFixedPosition;
// declared property setter: -(void)setContainsEnd:(BOOL)end;
// declared property getter: -(BOOL)containsEnd;
// declared property setter: -(void)setContainsStart:(BOOL)start;
// declared property getter: -(BOOL)containsStart;
// declared property setter: -(void)setIsLastOnLine:(BOOL)line;
// declared property getter: -(BOOL)isLastOnLine;
// declared property setter: -(void)setIsFirstOnLine:(BOOL)line;
// declared property getter: -(BOOL)isFirstOnLine;
// declared property setter: -(void)setIsLineBreak:(BOOL)aBreak;
// declared property getter: -(BOOL)isLineBreak;
// declared property setter: -(void)setWritingDirection:(int)direction;
// declared property getter: -(int)writingDirection;
// declared property setter: -(void)setRect:(CGRect)rect;
// declared property getter: -(CGRect)rect;
-(id)description;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end

