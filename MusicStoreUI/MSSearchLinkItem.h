/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

@interface MSSearchLinkItem : XXUnknownSuperclass {
@private
	NSDictionary* _queryStringDictionary;
}
@property(retain, nonatomic) NSDictionary* queryStringDictionary;	// @synthesize=_queryStringDictionary
+(id)URLBagKey;
// declared property setter: -(void)setQueryStringDictionary:(id)dictionary;
// declared property getter: -(id)queryStringDictionary;
-(BOOL)_parseURL:(id)url;
-(void)dealloc;
-(id)initWithURL:(id)url;
@end

