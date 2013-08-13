/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSSetupController.h"

@class NSString;

@interface PSInternationalLanguageSetupController : PSSetupController {
	NSString* _languageToSet;
}
-(void)setupController;
-(id)language:(id)language;
-(void)setLanguage:(id)language specifier:(id)specifier;
-(void)didFinishCommit;
-(void)commit;
-(void)rotateView:(id)view toOrientation:(int)orientation;
-(void)showBlackViewWithLabel:(id)label;
-(void)dealloc;
@end
