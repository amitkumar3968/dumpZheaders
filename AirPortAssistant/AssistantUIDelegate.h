/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */



@protocol AssistantUIDelegate
-(void)doneWithAssistantResult:(long)assistantResult;
-(void)connectionVerificationSucceededForSelector:(int)selector;
-(void)showAskUserPluginAudioCablingForStatus:(long)status paramDict:(id)dict;
-(void)showAskUserSwapCablingForStatus:(long)status paramDict:(id)dict;
-(void)showAskUserForPPPoECredentialsForStatus:(long)status paramDict:(id)dict;
-(void)showTellUserToResetBroadbandDeviceForStatus:(long)status paramDict:(id)dict;
-(void)showTellUserToPlugInEthernetForStatus:(long)status paramDict:(id)dict;
-(void)presentUIForSetupResult:(long)setupResult baseStationInfo:(id)info withPrompt:(id)prompt;
-(void)presentUIForSetupStatusWithRecommendationDict:(id)recommendationDict;
-(void)presentUIForStepByStepResult:(long)stepByStepResult;
-(void)presentUIForStepByStepNextStep:(int)stepByStepNextStep paramDict:(id)dict;
-(void)presentUIForRecommendationResult:(long)recommendationResult paramDict:(id)dict;
-(void)presentUIForRecommmendationTargetInfo:(id)recommmendationTargetInfo;
-(void)presentUIForRecommendationStatus;
-(void)assistantUpdateProgress:(id)progress forState:(int)state;
@end

