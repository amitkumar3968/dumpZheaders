/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSString, NSArray;

@interface SAAssistantLoaded : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString* version;
@property(copy, nonatomic) NSArray* syncAnchors;
@property(copy, nonatomic) NSNumber* requestSync;
@property(copy, nonatomic) NSString* dataAnchor;
+(id)assistantLoadedWithDictionary:(id)dictionary context:(id)context;
+(id)assistantLoaded;
-(BOOL)requiresResponse;
// declared property setter: -(void)setVersion:(id)version;
// declared property getter: -(id)version;
// declared property setter: -(void)setSyncAnchors:(id)anchors;
// declared property getter: -(id)syncAnchors;
// declared property setter: -(void)setRequestSync:(id)sync;
// declared property getter: -(id)requestSync;
// declared property setter: -(void)setDataAnchor:(id)anchor;
// declared property getter: -(id)dataAnchor;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

