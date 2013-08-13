/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SAUIShowHelp : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString* text;
@property(copy, nonatomic) NSString* speakableText;
+(id)showHelpWithDictionary:(id)dictionary context:(id)context;
+(id)showHelp;
-(BOOL)requiresResponse;
// declared property setter: -(void)setText:(id)text;
// declared property getter: -(id)text;
// declared property setter: -(void)setSpeakableText:(id)text;
// declared property getter: -(id)speakableText;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

