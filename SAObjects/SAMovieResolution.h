/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"


@interface SAMovieResolution : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int width;
@property(assign, nonatomic) int height;
+(id)resolutionWithDictionary:(id)dictionary context:(id)context;
+(id)resolution;
// declared property setter: -(void)setWidth:(int)width;
// declared property getter: -(int)width;
// declared property setter: -(void)setHeight:(int)height;
// declared property getter: -(int)height;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

