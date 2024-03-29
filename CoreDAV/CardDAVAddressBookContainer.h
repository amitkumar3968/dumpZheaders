/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVContainer.h"

@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer {
	NSString* _maxResourceSize;
	NSString* _maxImageSize;
	NSURL* _meCardURL;
}
@property(readonly, assign) BOOL isSearchAddressBook;
@property(readonly, assign) BOOL isSharedAddressBook;
@property(readonly, assign) BOOL isAddressBook;
@property(retain) NSURL* meCardURL;	// @synthesize=_meCardURL
@property(retain) NSString* maxImageSize;	// @synthesize=_maxImageSize
@property(retain) NSString* maxResourceSize;	// @synthesize=_maxResourceSize
+(id)copyPropertyMappingsForParser;
// declared property setter: -(void)setMeCardURL:(id)url;
// declared property getter: -(id)meCardURL;
// declared property setter: -(void)setMaxImageSize:(id)size;
// declared property getter: -(id)maxImageSize;
// declared property setter: -(void)setMaxResourceSize:(id)size;
// declared property getter: -(id)maxResourceSize;
-(void)dealloc;
// declared property getter: -(BOOL)isSharedAddressBook;
// declared property getter: -(BOOL)isSearchAddressBook;
// declared property getter: -(BOOL)isAddressBook;
-(void)applyParsedProperties:(id)properties;
-(id)description;
@end

