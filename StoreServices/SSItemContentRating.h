/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import "NSCopying.h"

@class NSDictionary, SSItemArtworkImage, NSMutableDictionary, NSString;

@interface SSItemContentRating : XXUnknownSuperclass <SSXPCCoding, NSCopying> {
@private
	NSMutableDictionary* _dictionary;
}
@property(readonly, assign, nonatomic) SSItemArtworkImage* ratingSystemLogo;
@property(readonly, assign, nonatomic) NSDictionary* contentRatingDictionary;
@property(assign, nonatomic) BOOL shouldHideWhenRestricted;
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;
@property(assign, nonatomic) int ratingSystem;
@property(copy, nonatomic) NSString* ratingLabel;
@property(copy, nonatomic) NSString* ratingDescription;
@property(assign, nonatomic) int rank;
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;
+(id)stringForRatingSystem:(int)ratingSystem;
+(int)ratingSystemFromString:(id)string;
-(void)_setValue:(id)value forProperty:(id)property;
-(void)_setValueCopy:(id)copy forProperty:(id)property;
-(BOOL)_isRatingSystemForTV:(int)tv;
-(BOOL)_isRatingSystemForMusic:(int)music;
-(BOOL)_isRatingSystemForMovies:(int)movies;
-(BOOL)_isRatingSystemForApps:(int)apps;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(id)copyXPCEncoding;
// declared property getter: -(id)ratingSystemLogo;
// declared property getter: -(id)contentRatingDictionary;
-(id)valueForProperty:(id)property;
// declared property getter: -(BOOL)shouldHideWhenRestricted;
// declared property setter: -(void)setShouldHideWhenRestricted:(BOOL)hideWhenRestricted;
// declared property setter: -(void)setRatingSystem:(int)system;
// declared property setter: -(void)setRatingLabel:(id)label;
// declared property setter: -(void)setRatingDescription:(id)description;
// declared property setter: -(void)setRank:(int)rank;
// declared property getter: -(int)ratingSystem;
// declared property getter: -(id)ratingLabel;
// declared property getter: -(id)ratingDescription;
// declared property getter: -(int)rank;
// declared property getter: -(BOOL)isRestricted;
// declared property getter: -(BOOL)isExplicitContent;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary;
-(id)init;
@end

