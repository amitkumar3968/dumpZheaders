/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import "AssistantCallbackController.h"
#import "StepByStepUIDelegateResult.h"
#import "AirPortAssistant-Structs.h"
#import "AutoGuessSetup.h"

@class NSDictionary;
@protocol StepByStepUIDelegate;

__attribute__((visibility("hidden")))
@interface StepByStepController : AssistantCallbackController <AutoGuessSetup, StepByStepUIDelegateResult> {
	StepByStepContext* _stepByStepContext;
	id _delegate;
	NSDictionary* _restoreRecommendation;
}
@property(retain) NSDictionary* restoreRecommendation;	// @synthesize=_restoreRecommendation
@property(assign) id<StepByStepUIDelegate> delegate;	// @synthesize=_delegate
+(id)stepByStepController;
// declared property setter: -(void)setRestoreRecommendation:(id)recommendation;
// declared property getter: -(id)restoreRecommendation;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(long)setupFromAutoguessRecommendation:(id)autoguessRecommendation withOptions:(id)options;
-(void)stepByStepNextStepResult:(long)result withOptions:(id)options;
-(long)subclassAssistantCallback:(AssistantCallbackContext*)callback;
-(void)dealloc;
-(id)init;
@end

