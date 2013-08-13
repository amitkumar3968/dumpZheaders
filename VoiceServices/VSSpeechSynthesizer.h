/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VoiceServices-Structs.h"

@class NSString;
@protocol VSSpeechSynthesizerDelegate;

@interface VSSpeechSynthesizer : XXUnknownSuperclass {
@private
	void* _speechJob;
	void* _keepAlive;
	void* _inactiveKeepAlive;
	id<VSSpeechSynthesizerDelegate> _delegate;
	NSString* _voice;
	int _footprint;
	float _rate;
	float _pitch;
	float _volume;
	struct {
		unsigned delegateStart : 1;
		unsigned delegateFinish : 1;
		unsigned delegateFinishWithPhonemesSpoken : 1;
		unsigned delegatePause : 1;
		unsigned delegateContinue : 1;
		unsigned delegateWillSpeak : 1;
		unsigned willUseInput : 1;
	} _synthesizerFlags;
}
@property(assign) int footprint;	// converted property
@property(retain) NSString* voice;	// converted property
@property(readonly, assign) float rate;	// converted property
@property(readonly, assign) float pitch;	// converted property
@property(readonly, assign) float volume;	// converted property
+(void)_localeDidChange;
+(BOOL)isSystemSpeaking;
+(id)availableLanguageCodes;
+(id)availableVoicesForLanguageCode:(id)languageCode;
+(id)availableVoices;
-(void)_handleSpeech:(VSSpeechRef)speech willSpeakMarkType:(int)type inRange:(XXStruct_K5nmsA)range;
-(void)_handleSpeech:(VSSpeechRef)speech completed:(BOOL)completed phonemesSpoken:(CFStringRef)spoken withError:(id)error;
-(void)_handleSpeechContinued:(VSSpeechRef)continued;
-(void)_handleSpeechPaused:(VSSpeechRef)paused;
-(void)_handleSpeechStarted:(VSSpeechRef)started;
-(void)setMaintainInactivePersistentConnection:(BOOL)connection;
-(void)setMaintainPersistentConnection:(BOOL)connection;
// converted property getter: -(int)footprint;
// converted property setter: -(void)setFootprint:(int)footprint;
// converted property getter: -(id)voice;
// converted property setter: -(void)setVoice:(id)voice;
// converted property getter: -(float)volume;
-(id)setVolume:(float)volume;
// converted property getter: -(float)pitch;
-(id)setPitch:(float)pitch;
-(float)maximumRate;
-(float)minimumRate;
-(id)setRate:(float)rate;
// converted property getter: -(float)rate;
-(id)speechString;
-(BOOL)isSpeaking;
-(id)continueSpeaking;
-(id)pauseSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;
-(id)pauseSpeakingAtNextBoundary:(int)nextBoundary;
-(id)stopSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;
-(id)stopSpeakingAtNextBoundary:(int)nextBoundary;
-(id)startSpeakingAttributedString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;
-(id)startSpeakingAttributedString:(id)string toURL:(id)url;
-(id)startSpeakingAttributedString:(id)string;
-(id)startSpeakingString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;
-(id)startSpeakingString:(id)string attributedString:(id)string2 toURL:(id)url withLanguageCode:(id)languageCode;
-(id)startSpeakingString:(id)string withLanguageCode:(id)languageCode;
-(id)startSpeakingString:(id)string toURL:(id)url;
-(id)startSpeakingString:(id)string;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(id)initForInputFeedback;
-(id)init;
@end
