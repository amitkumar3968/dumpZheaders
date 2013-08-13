/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface AFSpeechPhrase : XXUnknownSuperclass {
@private
	NSArray* _interpretations;
	BOOL _isLowConfidence;
}
@property(assign) BOOL isLowConfidence;	// @synthesize=_isLowConfidence
@property(copy, nonatomic) NSArray* interpretations;	// @synthesize=_interpretations
// declared property setter: -(void)setIsLowConfidence:(BOOL)confidence;
// declared property getter: -(BOOL)isLowConfidence;
// declared property setter: -(void)setInterpretations:(id)interpretations;
// declared property getter: -(id)interpretations;
-(void).cxx_destruct;
-(id)initWithDKPlistRepresentation:(id)dkplistRepresentation;
-(id)dkPlistRepresentation;
@end
