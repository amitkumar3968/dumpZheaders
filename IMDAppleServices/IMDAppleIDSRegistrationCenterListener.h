/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */



@protocol IMDAppleIDSRegistrationCenterListener
-(void)center:(id)center failedDeregistration:(id)deregistration error:(int)error info:(id)info;
-(void)center:(id)center failedRegistration:(id)registration error:(int)error info:(id)info;
-(void)center:(id)center succeededDeregistration:(id)deregistration;
-(void)center:(id)center succeededRegistration:(id)registration;
-(void)center:(id)center failedProvisioning:(id)provisioning error:(int)error info:(id)info;
-(void)center:(id)center succeededProvisioning:(id)provisioning;
@end

