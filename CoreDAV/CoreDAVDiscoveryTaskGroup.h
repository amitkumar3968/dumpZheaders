/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"
#import "CoreDAVTaskGroup.h"

@class NSMutableArray, NSString, NSArray;
@protocol CoreDAVAccountInfoProvider, CoreDAVDiscoveryTaskGroupDelegate;

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate> {
	NSString* _requiredComplianceClass;
	NSArray* _httpPorts;
	NSArray* _httpsPorts;
	NSString* _httpServiceString;
	NSString* _httpsServiceString;
	NSString* _wellKnownPath;
	NSArray* _potentialContextPaths;
	NSMutableArray* _discoveries;
	BOOL _didReceiveAuthenticationError;
	id<CoreDAVAccountInfoProvider> _discoveredAccountInfo;
}
@property(retain, nonatomic) NSArray* potentialContextPaths;	// @synthesize=_potentialContextPaths
@property(retain, nonatomic) NSString* wellKnownPath;	// @synthesize=_wellKnownPath
@property(retain) id<CoreDAVAccountInfoProvider> discoveredAccountInfo;	// @synthesize=_discoveredAccountInfo
@property(assign) BOOL didReceiveAuthenticationError;	// @synthesize=_didReceiveAuthenticationError
@property(assign, nonatomic) id<CoreDAVDiscoveryTaskGroupDelegate> delegate;	// @dynamic
// declared property setter: -(void)setPotentialContextPaths:(id)paths;
// declared property getter: -(id)potentialContextPaths;
// declared property setter: -(void)setWellKnownPath:(id)path;
// declared property getter: -(id)wellKnownPath;
// declared property setter: -(void)setDiscoveredAccountInfo:(id)info;
// declared property getter: -(id)discoveredAccountInfo;
// declared property setter: -(void)setDidReceiveAuthenticationError:(BOOL)receiveAuthenticationError;
// declared property getter: -(BOOL)didReceiveAuthenticationError;
-(void)getDiscoveryStatus:(id)status priorFailed:(id*)failed subsequentFailed:(id*)failed3 priorIncomplete:(id*)incomplete subsequentIncomplete:(id*)incomplete5 priorSuccess:(id*)success subsequentSuccess:(id*)success7;
-(void)addToDiscoveryArray:(id*)discoveryArray discovery:(id)discovery;
-(id)cleanedStringsFromResponseHeaders:(id)responseHeaders forHeader:(id)header;
-(id)extractPrincipalURLFromPropFindTask:(id)propFindTask error:(id*)error;
-(id)propFindProperties;
-(void)completeDiscovery:(id)discovery error:(id)error;
-(void)propFindTaskFinished:(id)finished;
-(void)optionsTask:(id)task error:(id)error;
-(void)completeOptionsTask:(id)task error:(id)error;
-(void)srvLookupTask:(id)task error:(id)error;
-(void)task:(id)task didFinishWithError:(id)error;
-(void)startPropfindTask:(id)task;
-(void)startOptionsTask:(id)task;
-(void)startWellKnownFallbackHeadTask:(id)task withURL:(id)url;
-(void)startWellKnownLocationTask:(id)task withURL:(id)url;
-(void)startSRVLookup:(id)lookup serviceString:(id)string;
-(id)allDiscoveryPaths:(id)paths;
-(id)allDiscoveryPorts:(id)ports withScheme:(id)scheme;
-(id)setupDiscoveries:(id)discoveries withSchemes:(id)schemes;
-(void)syncAway;
-(void)startTaskGroup;
-(void)cancelTaskGroup;
-(void)taskGroupWillCancelWithError:(id)taskGroup;
-(void)dealloc;
-(id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;
-(id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager httpPorts:(id)ports httpsPorts:(id)ports4 httpServiceString:(id)string httpsServiceString:(id)string6 wellKnownPaths:(id)paths requiredComplianceClass:(id)aClass;
-(id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager httpPorts:(id)ports httpsPorts:(id)ports4 httpServiceString:(id)string httpsServiceString:(id)string6 wellKnownPath:(id)path potentialContextPaths:(id)paths requiredComplianceClass:(id)aClass;
@end

