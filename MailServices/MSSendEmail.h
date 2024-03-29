/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSSendEmail : MSMailDefaultService {
}
+(id)sendEmail:(id)email playSound:(BOOL)sound completionBlock:(id)block;
+(id)sendMessageData:(id)data autosaveIdentifier:(id)identifier completionBlock:(id)block;
-(void)_simulateServicesMethod:(id)method arguments:(id)arguments callback:(id)callback;
-(void)_sendMessageData:(id)data autosaveIdentifier:(id)identifier completionBlock:(id)block;
-(void)_sendEmail:(id)email playSound:(BOOL)sound completionBlock:(id)block;
@end

