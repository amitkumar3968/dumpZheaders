/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

@interface PLEmailAddressManager : XXUnknownSuperclass {
@private
	NSMutableDictionary* _keysForEmails;
	NSMutableDictionary* _emailsForKey;
	int _maxKey;
	NSString* _plistPath;
}
+(id)sharedManager;
-(void)_loadDictionariesIfNeeded;
-(id)emailAddressForKey:(id)key;
-(id)keyForEmailAddress:(id)emailAddress;
-(void)dealloc;
@end

