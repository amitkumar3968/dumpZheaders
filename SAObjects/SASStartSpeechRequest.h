/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASStartSpeech.h"


@interface SASStartSpeechRequest : SASStartSpeech {
}
@property(assign, nonatomic) BOOL handsFree;
@property(assign, nonatomic) BOOL eyesFree;
+(id)startSpeechRequestWithDictionary:(id)dictionary context:(id)context;
+(id)startSpeechRequest;
// declared property setter: -(void)setHandsFree:(BOOL)free;
// declared property getter: -(BOOL)handsFree;
// declared property setter: -(void)setEyesFree:(BOOL)free;
// declared property getter: -(BOOL)eyesFree;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

