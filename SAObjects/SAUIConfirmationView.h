/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceView.h"

@class NSString, NSArray;

@interface SAUIConfirmationView : SAAceView {
}
@property(copy, nonatomic) NSString* denyText;
@property(copy, nonatomic) NSArray* denyCommands;
@property(copy, nonatomic) NSString* confirmText;
@property(copy, nonatomic) NSArray* confirmCommands;
@property(copy, nonatomic) NSString* cancelTrigger;
+(id)confirmationViewWithDictionary:(id)dictionary context:(id)context;
+(id)confirmationView;
// declared property setter: -(void)setDenyText:(id)text;
// declared property getter: -(id)denyText;
// declared property setter: -(void)setDenyCommands:(id)commands;
// declared property getter: -(id)denyCommands;
// declared property setter: -(void)setConfirmText:(id)text;
// declared property getter: -(id)confirmText;
// declared property setter: -(void)setConfirmCommands:(id)commands;
// declared property getter: -(id)confirmCommands;
// declared property setter: -(void)setCancelTrigger:(id)trigger;
// declared property getter: -(id)cancelTrigger;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

