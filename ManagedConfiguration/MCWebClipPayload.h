/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSData, NSString, NSURL;

@interface MCWebClipPayload : MCPayload {
@private
	NSURL* _URL;
	NSString* _label;
	NSData* _iconData;
	BOOL _isRemovable;
	BOOL _precomposed;
	BOOL _fullScreen;
}
@property(readonly, assign, nonatomic) BOOL fullScreen;	// @synthesize=_fullScreen
@property(readonly, assign, nonatomic) BOOL precomposed;	// @synthesize=_precomposed
@property(readonly, assign, nonatomic) BOOL isRemovable;	// @synthesize=_isRemovable
@property(readonly, assign, nonatomic) NSData* iconData;	// @synthesize=_iconData
@property(readonly, assign, nonatomic) NSString* label;	// @synthesize=_label
@property(readonly, assign, nonatomic) NSURL* URL;	// @synthesize=_URL
+(id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;
+(id)typeStrings;
// declared property getter: -(BOOL)fullScreen;
// declared property getter: -(BOOL)precomposed;
// declared property getter: -(BOOL)isRemovable;
// declared property getter: -(id)iconData;
// declared property getter: -(id)label;
// declared property getter: -(id)URL;
-(void).cxx_destruct;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)title;
-(id)description;
-(id)stubDictionary;
-(id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id*)error;
@end
