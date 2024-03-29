/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet, NSURL, CoreDAVResourceTypeItem, NSDictionary, NSString;

@interface CoreDAVContainer : XXUnknownSuperclass {
	BOOL _isUnauthenticated;
	NSURL* _url;
	CoreDAVResourceTypeItem* _resourceType;
	NSString* _containerTitle;
	NSSet* _privileges;
	NSString* _pushKey;
	NSDictionary* _pushTransports;
	NSURL* _resourceID;
	NSSet* _supportedReports;
	NSString* _quotaAvailable;
	NSString* _quotaUsed;
	NSURL* _owner;
	NSURL* _addMemberURL;
	NSDictionary* _bulkRequests;
	NSString* _syncToken;
}
@property(readonly, assign) BOOL supportsSyncCollectionReport;
@property(readonly, assign) BOOL supportsPrincipalPropertySearchReport;
@property(readonly, assign) NSSet* supportedReportsAsStringSet;
@property(readonly, assign) BOOL hasWritePropertiesPrivileges;
@property(readonly, assign) BOOL hasWriteContentPrivileges;
@property(readonly, assign) BOOL hasReadPrivileges;
@property(readonly, assign) NSSet* privilegesAsStringSet;
@property(readonly, assign) BOOL isPrincipal;
@property(readonly, assign) NSSet* resourceTypeAsStringSet;
@property(retain) NSString* syncToken;	// @synthesize=_syncToken
@property(retain) NSDictionary* bulkRequests;	// @synthesize=_bulkRequests
@property(retain) NSURL* addMemberURL;	// @synthesize=_addMemberURL
@property(retain) NSURL* owner;	// @synthesize=_owner
@property(retain) NSSet* supportedReports;	// @synthesize=_supportedReports
@property(retain) NSString* quotaUsed;	// @synthesize=_quotaUsed
@property(retain) NSString* quotaAvailable;	// @synthesize=_quotaAvailable
@property(retain) NSURL* resourceID;	// @synthesize=_resourceID
@property(retain) NSDictionary* pushTransports;	// @synthesize=_pushTransports
@property(retain) NSString* pushKey;	// @synthesize=_pushKey
@property(retain) NSSet* privileges;	// @synthesize=_privileges
@property(retain) NSString* containerTitle;	// @synthesize=_containerTitle
@property(retain) CoreDAVResourceTypeItem* resourceType;	// @synthesize=_resourceType
@property(assign) BOOL isUnauthenticated;	// @synthesize=_isUnauthenticated
@property(retain) NSURL* url;	// @synthesize=_url
+(id)convertPushTransportsForNSServerNotificationCenter:(id)nsserverNotificationCenter;
+(id)copyPropertyMappingsForParser;
// declared property setter: -(void)setSyncToken:(id)token;
// declared property getter: -(id)syncToken;
// declared property setter: -(void)setBulkRequests:(id)requests;
// declared property getter: -(id)bulkRequests;
// declared property setter: -(void)setAddMemberURL:(id)url;
// declared property getter: -(id)addMemberURL;
// declared property setter: -(void)setOwner:(id)owner;
// declared property getter: -(id)owner;
// declared property setter: -(void)setResourceType:(id)type;
// declared property getter: -(id)resourceType;
// declared property setter: -(void)setSupportedReports:(id)reports;
// declared property getter: -(id)supportedReports;
// declared property setter: -(void)setQuotaUsed:(id)used;
// declared property getter: -(id)quotaUsed;
// declared property setter: -(void)setQuotaAvailable:(id)available;
// declared property getter: -(id)quotaAvailable;
// declared property setter: -(void)setResourceID:(id)anId;
// declared property getter: -(id)resourceID;
// declared property setter: -(void)setPushTransports:(id)transports;
// declared property getter: -(id)pushTransports;
// declared property setter: -(void)setPushKey:(id)key;
// declared property getter: -(id)pushKey;
// declared property setter: -(void)setPrivileges:(id)privileges;
// declared property getter: -(id)privileges;
// declared property setter: -(void)setContainerTitle:(id)title;
// declared property getter: -(id)containerTitle;
// declared property setter: -(void)setIsUnauthenticated:(BOOL)unauthenticated;
// declared property getter: -(BOOL)isUnauthenticated;
// declared property setter: -(void)setUrl:(id)url;
// declared property getter: -(id)url;
-(void)dealloc;
// declared property getter: -(BOOL)supportsSyncCollectionReport;
// declared property getter: -(BOOL)supportsPrincipalPropertySearchReport;
// declared property getter: -(id)supportedReportsAsStringSet;
// declared property getter: -(BOOL)hasWritePropertiesPrivileges;
// declared property getter: -(BOOL)hasWriteContentPrivileges;
// declared property getter: -(BOOL)hasReadPrivileges;
// declared property getter: -(id)privilegesAsStringSet;
// declared property getter: -(BOOL)isPrincipal;
// declared property getter: -(id)resourceTypeAsStringSet;
-(void)applyParsedProperties:(id)properties;
-(id)description;
-(id)initWithURL:(id)url andProperties:(id)properties;
@end

