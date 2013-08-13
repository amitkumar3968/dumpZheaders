/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSArray;

@interface SASRecognition : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray* phrases;
+(id)recognitionWithDictionary:(id)dictionary context:(id)context;
+(id)recognition;
// declared property setter: -(void)setPhrases:(id)phrases;
// declared property getter: -(id)phrases;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

