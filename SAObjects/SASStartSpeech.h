/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSNumber;

@interface SASStartSpeech : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString* refId;	// @dynamic
@property(copy, nonatomic) NSString* aceId;	// @dynamic
@property(copy, nonatomic) NSString* origin;
@property(copy, nonatomic) NSNumber* noiseReductionLevel;
@property(copy, nonatomic) NSNumber* motionConfidence;
@property(copy, nonatomic) NSString* motionActivity;
@property(copy, nonatomic) NSString* headsetName;
@property(copy, nonatomic) NSString* headsetId;
@property(copy, nonatomic) NSString* headsetAddress;
@property(copy, nonatomic) NSString* dspStatus;
@property(assign, nonatomic) int codec;
@property(copy, nonatomic) NSString* audioSource;
+(id)startSpeechWithDictionary:(id)dictionary context:(id)context;
+(id)startSpeech;
// declared property setter: -(void)setOrigin:(id)origin;
// declared property getter: -(id)origin;
// declared property setter: -(void)setNoiseReductionLevel:(id)level;
// declared property getter: -(id)noiseReductionLevel;
// declared property setter: -(void)setMotionConfidence:(id)confidence;
// declared property getter: -(id)motionConfidence;
// declared property setter: -(void)setMotionActivity:(id)activity;
// declared property getter: -(id)motionActivity;
// declared property setter: -(void)setHeadsetName:(id)name;
// declared property getter: -(id)headsetName;
// declared property setter: -(void)setHeadsetId:(id)anId;
// declared property getter: -(id)headsetId;
// declared property setter: -(void)setHeadsetAddress:(id)address;
// declared property getter: -(id)headsetAddress;
// declared property setter: -(void)setDspStatus:(id)status;
// declared property getter: -(id)dspStatus;
// declared property setter: -(void)setCodec:(int)codec;
// declared property getter: -(int)codec;
// declared property setter: -(void)setAudioSource:(id)source;
// declared property getter: -(id)audioSource;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

