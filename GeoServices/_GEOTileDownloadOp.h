/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "NSURLConnectionDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLConnection, GEOSimpleTileRequester, NSString, NSURL, NSMutableData;

__attribute__((visibility("hidden")))
@interface _GEOTileDownloadOp : XXUnknownSuperclass <NSURLConnectionDelegate> {
@private
	NSURL* _url;
	BOOL _requireWiFi;
	NSMutableData* _data;
	NSURLConnection* _conn;
	GEOTileKey _key;
	BOOL _finished;
	NSString* _editionHeader;
	unsigned _tileEdition;
	NSString* _userAgent;
	BOOL _useCookies;
	_GEOTileDownloadOp* _baseTile;
	_GEOTileDownloadOp* _localizationTile;
	unsigned _contentLength;
	GEOSimpleTileRequester* _delegate;
	BOOL _gotData;
	_GEOTileDownloadOp* localizationTile;
}
@property(assign, nonatomic) GEOSimpleTileRequester* delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL finished;	// @synthesize=_finished
@property(readonly, assign, nonatomic) unsigned contentLength;	// @synthesize=_contentLength
@property(assign) unsigned tileEdition;	// @synthesize=_tileEdition
@property(assign) GEOTileKey key;	// @synthesize=_key
@property(retain, nonatomic) _GEOTileDownloadOp* localizationTile;	// @synthesize
@property(retain, nonatomic) _GEOTileDownloadOp* baseTile;	// @synthesize=_baseTile
@property(assign, nonatomic) BOOL useCookies;	// @synthesize=_useCookies
@property(retain, nonatomic) NSString* userAgent;	// @synthesize=_userAgent
@property(retain, nonatomic) NSString* editionHeader;	// @synthesize=_editionHeader
@property(retain, nonatomic) NSURLConnection* conn;	// @synthesize=_conn
@property(retain, nonatomic) NSMutableData* data;	// @synthesize=_data
@property(assign, nonatomic) BOOL requireWiFi;	// @synthesize=_requireWiFi
@property(retain, nonatomic) NSURL* url;	// @synthesize=_url
// declared property setter: -(void)setRequireWiFi:(BOOL)fi;
// declared property getter: -(BOOL)requireWiFi;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(BOOL)finished;
// declared property getter: -(unsigned)contentLength;
// declared property setter: -(void)setLocalizationTile:(id)tile;
// declared property getter: -(id)localizationTile;
// declared property setter: -(void)setBaseTile:(id)tile;
// declared property getter: -(id)baseTile;
// declared property setter: -(void)setUseCookies:(BOOL)cookies;
// declared property getter: -(BOOL)useCookies;
// declared property setter: -(void)setUserAgent:(id)agent;
// declared property getter: -(id)userAgent;
// declared property setter: -(void)setTileEdition:(unsigned)edition;
// declared property getter: -(unsigned)tileEdition;
// declared property setter: -(void)setEditionHeader:(id)header;
// declared property getter: -(id)editionHeader;
// declared property setter: -(void)setConn:(id)conn;
// declared property getter: -(id)conn;
// declared property setter: -(void)setData:(id)data;
// declared property getter: -(id)data;
// declared property setter: -(void)setKey:(GEOTileKey)key;
// declared property getter: -(GEOTileKey)key;
// declared property setter: -(void)setUrl:(id)url;
// declared property getter: -(id)url;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)cancel;
-(void)start;
-(id)description;
-(void)dealloc;
@end

