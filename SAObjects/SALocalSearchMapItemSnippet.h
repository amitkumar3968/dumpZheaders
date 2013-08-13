/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAUISnippet.h"

@class SALocation, NSArray, NSNumber;

@interface SALocalSearchMapItemSnippet : SAUISnippet {
}
@property(copy, nonatomic) NSNumber* userCurrentLocation;
@property(retain, nonatomic) SALocation* searchRegionCenter;
@property(copy, nonatomic) NSNumber* regionOfInterestRadiusInMiles;
@property(copy, nonatomic) NSArray* providerCommand;
@property(copy, nonatomic) NSArray* items;
+(id)mapItemSnippetWithDictionary:(id)dictionary context:(id)context;
+(id)mapItemSnippet;
// declared property setter: -(void)setUserCurrentLocation:(id)location;
// declared property getter: -(id)userCurrentLocation;
// declared property setter: -(void)setSearchRegionCenter:(id)center;
// declared property getter: -(id)searchRegionCenter;
// declared property setter: -(void)setRegionOfInterestRadiusInMiles:(id)miles;
// declared property getter: -(id)regionOfInterestRadiusInMiles;
// declared property setter: -(void)setProviderCommand:(id)command;
// declared property getter: -(id)providerCommand;
// declared property setter: -(void)setItems:(id)items;
// declared property getter: -(id)items;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
