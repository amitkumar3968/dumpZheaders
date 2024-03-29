/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"


@interface BBThumbnailSizeConstraints : XXUnknownSuperclass <NSCoding> {
@private
	int _constraintType;
	float _fixedWidth;
	float _fixedHeight;
	float _fixedDimension;
	float _minAspectRatio;
	float _maxAspectRatio;
	float _thumbnailScale;
}
@property(assign, nonatomic) float thumbnailScale;	// @synthesize=_thumbnailScale
@property(assign, nonatomic) float maxAspectRatio;	// @synthesize=_maxAspectRatio
@property(assign, nonatomic) float minAspectRatio;	// @synthesize=_minAspectRatio
@property(assign, nonatomic) float fixedDimension;	// @synthesize=_fixedDimension
@property(assign, nonatomic) float fixedHeight;	// @synthesize=_fixedHeight
@property(assign, nonatomic) float fixedWidth;	// @synthesize=_fixedWidth
@property(assign, nonatomic) int constraintType;	// @synthesize=_constraintType
// declared property setter: -(void)setThumbnailScale:(float)scale;
// declared property getter: -(float)thumbnailScale;
// declared property setter: -(void)setMaxAspectRatio:(float)ratio;
// declared property getter: -(float)maxAspectRatio;
// declared property setter: -(void)setMinAspectRatio:(float)ratio;
// declared property getter: -(float)minAspectRatio;
// declared property setter: -(void)setFixedDimension:(float)dimension;
// declared property getter: -(float)fixedDimension;
// declared property setter: -(void)setFixedHeight:(float)height;
// declared property getter: -(float)fixedHeight;
// declared property setter: -(void)setFixedWidth:(float)width;
// declared property getter: -(float)fixedWidth;
// declared property setter: -(void)setConstraintType:(int)type;
// declared property getter: -(int)constraintType;
-(BOOL)areReasonable;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
@end

