/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SSURLBagContext, SSNetworkConstraints, NSDictionary, NSSet, NSArray;

@interface ISURLBag : XXUnknownSuperclass {
@private
	SSURLBagContext* _context;
	SSNetworkConstraints* _defaultConstraints;
	NSDictionary* _dictionary;
	NSArray* _guidPatterns;
	NSSet* _guidSchemes;
	NSDictionary* _headerPatterns;
	double _invalidationTime;
	BOOL _loadedFromDiskCache;
}
@property(readonly, assign, nonatomic) long long versionIdentifier;
@property(readonly, assign, nonatomic) NSDictionary* URLBagDictionary;
@property(copy, nonatomic) SSURLBagContext* URLBagContext;
@property(assign, nonatomic) BOOL loadedFromDiskCache;	// @synthesize=_loadedFromDiskCache
@property(assign, nonatomic) double invalidationTime;	// @synthesize=_invalidationTime
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;
@property(readonly, assign) NSSet* availableStorefrontItemKinds;
+(id)_copyFallbackContextForContext:(id)context;
+(BOOL)_allowUnsignedBags;
+(id)diskCachedURLBagForContext:(id)context;
+(id)valueForKey:(id)key inBagContext:(id)bagContext;
+(BOOL)urlIsTrusted:(id)trusted inBagContext:(id)bagContext;
+(id)urlForKey:(id)key inBagContext:(id)bagContext;
+(BOOL)shouldSendGUIDForURL:(id)url inBagContext:(id)bagContext;
+(id)networkConstraintsForDownloadKind:(id)downloadKind inBagContext:(id)bagContext;
+(id)copyExtraHeadersForURL:(id)url inBagContext:(id)bagContext;
+(id)storeFrontURLBagKeyForItemKind:(id)itemKind;
+(void)_loadItemKindURLBagKeyMap;
+(id)URLBagForContext:(id)context wasDiskCached:(BOOL*)cached;
+(id)urlBagForContext:(id)context;
+(id)_urlBagForContext:(id)context;
+(void)setURLBag:(id)bag forContext:(id)context;
+(void)_setURLBag:(id)bag forContext:(id)context;
+(void)_observeExternalChanges;
+(void)invalidateAllBags;
// declared property setter: -(void)setLoadedFromDiskCache:(BOOL)diskCache;
// declared property getter: -(BOOL)loadedFromDiskCache;
// declared property getter: -(double)invalidationTime;
-(void)_writeURLResolutionCacheFile;
-(void)_writeNetworkConstraintsCacheFile;
-(void)_setDictionary:(id)dictionary;
-(id)_networkConstraintsCachePath;
-(BOOL)_loadFromSignedDictionary:(id)signedDictionary returningError:(id*)error;
-(id)_copyHeaderPatternsFromDictionary:(id)dictionary;
-(id)_copyGUIDSchemesFromDictionary:(id)dictionary;
-(id)_copyGUIDPatternsFromDictionary:(id)dictionary;
-(BOOL)writeToFile:(id)file options:(unsigned)options error:(id*)error;
// declared property getter: -(long long)versionIdentifier;
// declared property getter: -(id)URLBagDictionary;
// declared property getter: -(id)URLBagContext;
// declared property setter: -(void)setURLBagContext:(id)context;
-(id)sanitizedURLForURL:(id)url;
-(void)invalidate;
-(id)valueForKey:(id)key;
-(id)URLForURL:(id)url clientIdentifier:(id)identifier;
-(BOOL)urlIsTrusted:(id)trusted;
-(id)urlForKey:(id)key;
-(BOOL)shouldSendGUIDForURL:(id)url;
// declared property setter: -(void)setInvalidationTime:(double)time;
-(id)searchQueryParametersForClientIdentifier:(id)clientIdentifier networkType:(int)type;
-(id)networkConstraintsForDownloadKind:(id)downloadKind;
// declared property getter: -(BOOL)isValid;
// declared property getter: -(id)availableStorefrontItemKinds;
-(BOOL)loadFromDictionary:(id)dictionary returningError:(id*)error;
-(id)copyExtraHeadersForURL:(id)url;
-(void)dealloc;
-(id)initWithURLBagContext:(id)urlbagContext;
-(id)initWithRawDictionary:(id)rawDictionary;
-(id)initWithContentsOfFile:(id)file;
-(id)init;
@end

