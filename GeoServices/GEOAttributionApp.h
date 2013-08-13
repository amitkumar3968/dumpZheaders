/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface GEOAttributionApp : PBCodable {
@private
	NSString* _appBundleIdentifier;
	NSMutableArray* _handledSchemes;
}
@property(retain, nonatomic) NSMutableArray* handledSchemes;	// @synthesize=_handledSchemes
@property(retain, nonatomic) NSString* appBundleIdentifier;	// @synthesize=_appBundleIdentifier
// declared property setter: -(void)setHandledSchemes:(id)schemes;
// declared property getter: -(id)handledSchemes;
// declared property setter: -(void)setAppBundleIdentifier:(id)identifier;
// declared property getter: -(id)appBundleIdentifier;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)handledSchemesAtIndex:(unsigned)index;
-(unsigned)handledSchemesCount;
-(void)addHandledSchemes:(id)schemes;
-(void)clearHandledSchemes;
-(void)dealloc;
@end

