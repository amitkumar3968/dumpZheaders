/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADeferredKeyObject.h"
#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SAAceView : AceObject <SAAceSerializable, SADeferredKeyObject> {
}
@property(copy, nonatomic) NSString* viewId;
@property(copy, nonatomic) NSString* speakableText;
@property(copy, nonatomic) NSNumber* listenAfterSpeaking;
+(id)aceViewWithDictionary:(id)dictionary context:(id)context;
+(id)aceView;
-(id)deferredKeys;
// declared property setter: -(void)setViewId:(id)anId;
// declared property getter: -(id)viewId;
// declared property setter: -(void)setSpeakableText:(id)text;
// declared property getter: -(id)speakableText;
// declared property setter: -(void)setListenAfterSpeaking:(id)speaking;
// declared property getter: -(id)listenAfterSpeaking;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
