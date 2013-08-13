/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface TLVibrationPattern : XXUnknownSuperclass {
	id _propertyListRepresentation;
	id _complexPatternDescription;
	double _duration;
	id _contextObject;
@private
	id contextObject;
}
@property(assign, setter=_setDuration:) double _duration;	// @synthesize
@property(readonly, assign) id _artificiallyRepeatingPropertyListRepresentation;
@property(retain, nonatomic) id contextObject;	// @synthesize
@property(readonly, assign) double computedDuration;
@property(readonly, assign, nonatomic) id propertyListRepresentation;
+(id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)vibrationsAndPauses;
+(id)simpleVibrationPatternWithVibrationDuration:(double)vibrationDuration pauseDuration:(double)duration;
+(BOOL)isValidVibrationPatternPropertyListRepresentation:(id)representation;
// declared property setter: -(void)setContextObject:(id)object;
// declared property getter: -(id)contextObject;
// declared property setter: -(void)_setDuration:(double)duration;
// declared property getter: -(double)_duration;
-(void)appendVibrationComponentWithDuration:(double)duration isPause:(BOOL)pause;
// declared property getter: -(double)computedDuration;
// declared property getter: -(id)_artificiallyRepeatingPropertyListRepresentation;
// declared property getter: -(id)propertyListRepresentation;
-(void)dealloc;
-(id)initWithPropertyListRepresentation:(id)propertyListRepresentation skipValidation:(BOOL)validation;
-(id)initWithPropertyListRepresentation:(id)propertyListRepresentation;
-(id)init;
@end

