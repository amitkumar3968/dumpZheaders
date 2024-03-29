/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

#import "HTSHTTPServerDelegate.h"
#import "iAdDeveloper-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString, NSDictionary, NSArray, HTSHTTPServer;
@protocol ADEmbeddedAdServerDelegate;

@interface ADEmbeddedAdServer : XXUnknownSuperclass <HTSHTTPServerDelegate> {
@private
	HTSHTTPServer* _server;
	NSMutableDictionary* _authTokens;
	FSEventStreamRef _stream;
	id<ADEmbeddedAdServerDelegate> _delegate;
	NSString* _publicURLRoot;
	BOOL _defaultsToNoQualifiedAds;
	NSDictionary* _defaultAdData;
	NSString* _adPath;
	NSArray* _adManifests;
	BOOL _alwaysRegenerateWebArchives;
}
@property(retain, nonatomic) NSArray* adManifests;	// @synthesize=_adManifests
@property(readonly, assign, nonatomic) unsigned long long totalBytesWritten;
@property(assign, nonatomic) BOOL pipeliningEnabled;
@property(assign, nonatomic) int cacheMaxAge;
@property(assign, nonatomic) double bandwidthStddev;
@property(assign, nonatomic) double kbps;
@property(assign, nonatomic) double latencyStddev;
@property(assign, nonatomic) double latency;
@property(assign, nonatomic) BOOL digestAuthenticationEnabled;
@property(assign, nonatomic) BOOL defaultsToNoQualifiedAds;	// @synthesize=_defaultsToNoQualifiedAds
@property(retain, nonatomic) NSDictionary* defaultAdData;	// @synthesize=_defaultAdData
@property(assign, nonatomic) BOOL alwaysRegenerateWebArchives;	// @synthesize=_alwaysRegenerateWebArchives
@property(copy, nonatomic) NSString* adPath;	// @synthesize=_adPath
@property(copy, nonatomic) NSString* publicURLRoot;	// @synthesize=_publicURLRoot
@property(readonly, assign, nonatomic) NSString* urlString;
@property(readonly, assign, nonatomic) unsigned short port;
@property(assign, nonatomic) id<ADEmbeddedAdServerDelegate> delegate;	// @synthesize=_delegate
+(id)manifestForAdAtURL:(id)url;
+(id)creativesForAdBundleAtURL:(id)url matchingRequest:(id)request;
+(BOOL)adBundleAtURL:(id)url matchesRequest:(id)request;
// declared property setter: -(void)setAlwaysRegenerateWebArchives:(BOOL)archives;
// declared property getter: -(BOOL)alwaysRegenerateWebArchives;
// declared property setter: -(void)setAdManifests:(id)manifests;
// declared property getter: -(id)adPath;
// declared property setter: -(void)setDefaultAdData:(id)data;
// declared property getter: -(id)defaultAdData;
// declared property setter: -(void)setDefaultsToNoQualifiedAds:(BOOL)noQualifiedAds;
// declared property getter: -(BOOL)defaultsToNoQualifiedAds;
// declared property setter: -(void)setPublicURLRoot:(id)root;
// declared property getter: -(id)publicURLRoot;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(id)defaultDisplayPolicy;
-(id)adDataForAdBundleAtPath:(id)path creative:(id)creative allowWebArchive:(BOOL)archive;
-(id)_adDataForPath:(id)path creative:(id)creative error:(id*)error;
-(id)_webArchiveFilenameForDirectory:(id)directory withBaseURL:(id)baseURL;
-(id)webArchiveForDirectory:(id)directory withBaseURL:(id)baseURL;
-(id)_webResourcesInDirectory:(id)directory baseURL:(id)url;
-(id)_webResourceForPath:(id)path url:(id)url;
// declared property getter: -(id)adManifests;
-(id)_handleManifestRequest:(id)request message:(id)message;
-(id)_handleMescalSignSAPSetupRequest:(id)request message:(id)message;
-(id)_handleMescalSignSAPSetupCertificateRequest:(id)request message:(id)message;
-(id)_handleOptOutRequest:(id)request message:(id)message;
-(id)_handleRewardsCodeResultRequest:(id)request message:(id)message;
-(id)_handleRewardRequest:(id)request message:(id)message;
-(id)_handleHeartbeatTokenRequest:(id)request message:(id)message;
-(id)_handleSegmentUpdateRequest:(id)request message:(id)message;
-(id)_handleLogAdContentErrorRequest:(id)request message:(id)message;
-(id)_handleLogAdEventRequest:(id)request message:(id)message;
-(id)_handleServerErrorRequest:(id)request message:(id)message;
-(id)_handleLogSysEventRequest:(id)request message:(id)message;
-(id)_handleLogImpressionRequest:(id)request message:(id)message;
-(id)_handleBatchRequest:(id)request message:(id)message;
-(id)_handlePostRequest:(id)request;
-(id)_handleGenericPostRequest:(id)request;
-(id)httpServer:(id)server proposedResponse:(id)response;
-(id)httpServer:(id)server unhandledRequest:(id)request;
-(void)httpServer:(id)server dataForRequest:(id)request resolvedPath:(id)path handler:(id)handler;
-(id)httpServer:(id)server rewritePath:(id)path;
-(BOOL)httpServer:(id)server shouldAllowRequest:(id)request withAuthorization:(id)authorization;
-(void)httpServer:(id)server logMessage:(id)message;
-(void)httpServer:(id)server connection:(id)connection blockedSandboxViolation:(id)violation;
-(void)httpServer:(id)server connection:(id)connection droppedResponseToRequestBeforeClosing:(id)requestBeforeClosing;
-(void)httpServer:(id)server connection:(id)connection wroteBytes:(unsigned)bytes andCompletedResponseToRequest:(id)request;
-(void)httpServer:(id)server connection:(id)connection wroteBytes:(unsigned)bytes forResponseToRequest:(id)request remaining:(unsigned)remaining;
-(void)httpServer:(id)server connection:(id)connection enqueuedResponseToRequest:(id)request statusCode:(int)code length:(unsigned)length;
-(void)httpServer:(id)server closedConnection:(id)connection withError:(id)error;
-(void)httpServer:(id)server closedConnection:(id)connection;
-(void)httpServer:(id)server receivedConnection:(id)connection;
-(void)httpServerListenSocketFailed:(id)failed;
-(id)_mimeTypeForExtension:(id)extension;
// declared property setter: -(void)setPipeliningEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)pipeliningEnabled;
// declared property getter: -(unsigned long long)totalBytesWritten;
// declared property setter: -(void)setBandwidthStddev:(double)stddev;
// declared property getter: -(double)bandwidthStddev;
// declared property setter: -(void)setKbps:(double)kbps;
// declared property getter: -(double)kbps;
// declared property setter: -(void)setLatencyStddev:(double)stddev;
// declared property getter: -(double)latencyStddev;
// declared property setter: -(void)setLatency:(double)latency;
// declared property getter: -(double)latency;
-(void)resetNetworkSetup;
// declared property setter: -(void)setCacheMaxAge:(int)age;
// declared property getter: -(int)cacheMaxAge;
// declared property setter: -(void)setDigestAuthenticationEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)digestAuthenticationEnabled;
// declared property setter: -(void)setAdPath:(id)path;
// declared property getter: -(id)urlString;
// declared property getter: -(unsigned short)port;
-(id)init;
-(id)initWithPort:(unsigned short)port adPath:(id)path;
-(void)dealloc;
@end

