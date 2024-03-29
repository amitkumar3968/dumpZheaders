/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SALocation.h"

@class NSString;

@interface SAWeatherLocation : SALocation {
}
@property(copy, nonatomic) NSString* locationId;
+(id)locationWithDictionary:(id)dictionary context:(id)context;
+(id)location;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setLocationId:(id)anId;
// declared property getter: -(id)locationId;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

