/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSURL, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSURL* thumbnail;
@property(retain, nonatomic) SAUIAppPunchOut* photoPunchOut;
@property(copy, nonatomic) NSString* identifier;
@property(copy, nonatomic) NSURL* fullsize;
+(id)photoWithDictionary:(id)dictionary context:(id)context;
+(id)photo;
// declared property setter: -(void)setThumbnail:(id)thumbnail;
// declared property getter: -(id)thumbnail;
// declared property setter: -(void)setPhotoPunchOut:(id)anOut;
// declared property getter: -(id)photoPunchOut;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property getter: -(id)identifier;
// declared property setter: -(void)setFullsize:(id)fullsize;
// declared property getter: -(id)fullsize;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

