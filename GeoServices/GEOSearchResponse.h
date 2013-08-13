/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOPlaceSearchResponse.h"

@class NSMapTable, NSString;

@interface GEOSearchResponse : GEOPlaceSearchResponse {
@private
	NSString* _businessQuery;
	NSMapTable* _attributionKeysToInfo;
}
@property(retain, nonatomic) NSString* businessQuery;	// @synthesize=_businessQuery
// declared property setter: -(void)setBusinessQuery:(id)query;
// declared property getter: -(id)businessQuery;
-(id)attributionInfoForSourceIdentifier:(id)sourceIdentifier sourceVersion:(unsigned)version;
-(void)_addAttributionInfo:(id)info;
-(void)dealloc;
@end

