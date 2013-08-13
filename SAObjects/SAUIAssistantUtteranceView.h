/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADeferredKeyObject.h"
#import "SAAceView.h"

@class NSString;

@interface SAUIAssistantUtteranceView : SAAceView <SADeferredKeyObject> {
}
@property(copy, nonatomic) NSString* text;
@property(copy, nonatomic) NSString* dialogIdentifier;
+(id)assistantUtteranceViewWithDictionary:(id)dictionary context:(id)context;
+(id)assistantUtteranceView;
-(id)deferredKeys;
// declared property setter: -(void)setText:(id)text;
// declared property getter: -(id)text;
// declared property setter: -(void)setDialogIdentifier:(id)identifier;
// declared property getter: -(id)dialogIdentifier;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

